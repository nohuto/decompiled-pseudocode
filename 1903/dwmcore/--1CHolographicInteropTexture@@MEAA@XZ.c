/*
 * XREFs of ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802464E0
 * Callers:
 *     ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x180246830 (--_GCHolographicInteropTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18015B610 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CHolographicInteropTexture::~CHolographicInteropTexture(CHolographicInteropTexture *this)
{
  bool v1; // zf
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v9; // eax
  int v10; // edi
  BOOL v11; // eax
  char v12; // cl
  HANDLE v13; // rax
  HANDLE v14; // rax
  __int16 Response; // [rsp+80h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 10) == 0LL;
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  if ( !v1 )
  {
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
          L"!m_pVisualTree",
          "Function: ",
          L"CHolographicInteropTexture::~CHolographicInteropTexture",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
          37);
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
          goto LABEL_27;
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
      switch ( (char)Response )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_27;
        case 'G':
          goto LABEL_27;
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
  }
LABEL_27:
  if ( *((_DWORD *)this + 34) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = IsKernelDebuggerPresent();
        Response = 63;
        v10 = v9;
        if ( !v9 )
        {
          v11 = IsDebuggerPresent();
          v12 = Response;
          if ( v11 )
            v12 = 103;
          LOBYTE(Response) = v12;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          &pwsz,
          &pwsz,
          L"m_bufferCount == 0",
          "Function: ",
          L"CHolographicInteropTexture::~CHolographicInteropTexture",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
          38);
        if ( !v10 )
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
          goto LABEL_53;
        if ( (char)Response != 105 )
        {
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_49;
LABEL_47:
            v13 = GetCurrentThread();
            TerminateThread(v13, 0xC0000001);
            goto LABEL_49;
          }
LABEL_48:
          v14 = GetCurrentProcess();
          TerminateProcess(v14, 0xC0000001);
          goto LABEL_49;
        }
LABEL_50:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( (char)Response )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_53;
        case 'G':
          goto LABEL_53;
        case 'I':
          goto LABEL_50;
        case 'P':
          goto LABEL_48;
        case 'T':
          goto LABEL_47;
      }
LABEL_49:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_53:
  ReleaseInterface<CDisplay>((__int64 *)this + 11);
  ReleaseInterface<CDisplay>((__int64 *)this + 12);
  FastRegion::CRegion::FreeMemory((void **)this + 29);
  CResource::~CResource(this);
}
