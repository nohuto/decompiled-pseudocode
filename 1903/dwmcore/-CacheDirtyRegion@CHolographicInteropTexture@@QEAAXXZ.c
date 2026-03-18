/*
 * XREFs of ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802469B4
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180245980 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18015B610 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CHolographicInteropTexture::CacheDirtyRegion(CHolographicInteropTexture *this)
{
  __int64 *v1; // rbx
  int v3; // eax
  int v4; // esi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v9; // rax
  __int16 Response; // [rsp+80h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 96);
  if ( !*((_QWORD *)this + 12) )
    goto LABEL_28;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        &pwsz,
        &pwsz,
        L"!m_pCachedDirtyRegion",
        "Function: ",
        L"CHolographicInteropTexture::CacheDirtyRegion",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
        497);
      if ( !v4 )
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
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_26;
      if ( (char)Response != 105 )
      {
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_23;
LABEL_21:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_23;
        }
LABEL_22:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_23;
      }
LABEL_24:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    switch ( (char)Response )
    {
      case 'G':
        goto LABEL_26;
      case 'I':
        goto LABEL_24;
      case 'P':
        goto LABEL_22;
      case 'T':
        goto LABEL_21;
    }
LABEL_23:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
LABEL_26:
  if ( *v1 )
  {
    ReleaseInterface<CDisplay>(v1);
    *((_BYTE *)this + 132) = 1;
  }
LABEL_28:
  v9 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  *v1 = v9;
}
