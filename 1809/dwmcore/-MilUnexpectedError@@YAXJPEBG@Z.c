/*
 * XREFs of ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801E8CEC
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F790 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18009A614 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083F48 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800856A0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall MilUnexpectedError(unsigned int a1, const unsigned __int16 *a2)
{
  int v2; // eax
  int v3; // ebx
  BOOL v4; // eax
  CHAR v5; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-258h] BYREF
  unsigned __int16 v9[256]; // [rsp+70h] [rbp-248h] BYREF

  StringCchPrintfW(v9, 0x100uLL, (size_t *)L"MIL FAILURE: Unexpected HRESULT 0x%08x in caller: %s", a1, a2);
  DbgPrintEx(0x65u, 0, "%S\n", v9);
  *(_DWORD *)Response = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"BreakOnUnexpectedErrors", (unsigned int *)Response)
    && *(_DWORD *)Response )
  {
    while ( 1 )
    {
      v2 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v3 = v2;
      if ( !v2 )
      {
        v4 = IsDebuggerPresent();
        v5 = Response[0];
        if ( v4 )
          v5 = 103;
        Response[0] = v5;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"This break is due to an unexpected HRESULT in the caller, not this method.\n"
         "***   Investigate the stack capture to determine the source of the HRESULT.\n",
        word_180276388,
        word_180276388,
        "Function: ",
        L"MilUnexpectedError",
        ", ",
        L"onecoreuap\\windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
        170);
      if ( !v3 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        __debugbreak();
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          return;
        case 'G':
        case 'g':
          return;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_14;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_14;
        default:
LABEL_14:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
}
