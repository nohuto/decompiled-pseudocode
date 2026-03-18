/*
 * XREFs of ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18020D65C
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CHolographicInteropTexture::CacheDirtyRegion(CHolographicInteropTexture *this)
{
  int v2; // eax
  int v3; // esi
  BOOL v4; // eax
  char v5; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 12) )
  {
    while ( 1 )
    {
      v2 = IsKernelDebuggerPresent();
      Response = 63;
      v3 = v2;
      if ( !v2 )
      {
        v4 = IsDebuggerPresent();
        v5 = Response;
        if ( v4 )
          v5 = 103;
        LOBYTE(Response) = v5;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180276388,
        word_180276388,
        L"!m_pCachedDirtyRegion",
        "Function: ",
        L"CHolographicInteropTexture::CacheDirtyRegion",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
        508);
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
          &Response,
          &Response);
        __debugbreak();
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_15;
        case 'G':
        case 'g':
          goto LABEL_15;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_13;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_13;
        default:
LABEL_13:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_15:
  if ( *((_QWORD *)this + 12) )
  {
    ReleaseInterface<CDisplay>((__int64 *)this + 12);
    *((_BYTE *)this + 132) = 1;
  }
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
}
