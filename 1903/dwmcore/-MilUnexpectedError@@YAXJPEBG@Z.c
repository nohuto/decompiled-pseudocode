/*
 * XREFs of ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18015B3FC
 * Callers:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18003FA2C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18009D300 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009D4F0 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A76D4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800A9E7C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18015B610 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall MilUnexpectedError(unsigned int a1, const unsigned __int16 *a2)
{
  int v2; // eax
  int v3; // ebx
  BOOL v4; // eax
  CHAR v5; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v9[256]; // [rsp+70h] [rbp-90h] BYREF

  StringCchPrintfW(v9, 0x100uLL, (size_t *)L"MIL FAILURE: Unexpected HRESULT 0x%08x in caller: %s", a1, a2);
  DbgPrintEx(0x65u, 0, "%S\n", v9);
  *(_DWORD *)Response = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"BreakOnUnexpectedErrors", (unsigned int *)Response)
    && *(_DWORD *)Response )
  {
    while ( 1 )
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
          &pwsz,
          &pwsz,
          "Function: ",
          L"MilUnexpectedError",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
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
        if ( Response[0] <= 98 )
          break;
        if ( Response[0] == 103 )
          return;
        if ( Response[0] != 105 )
        {
          if ( Response[0] != 112 )
          {
            if ( Response[0] != 116 )
              goto LABEL_24;
LABEL_22:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_24;
          }
LABEL_23:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_24;
        }
LABEL_25:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( Response[0] )
      {
        case 'b':
        case 'B':
          __debugbreak();
          return;
        case 'G':
          return;
        case 'I':
          goto LABEL_25;
        case 'P':
          goto LABEL_23;
        case 'T':
          goto LABEL_22;
      }
LABEL_24:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
}
