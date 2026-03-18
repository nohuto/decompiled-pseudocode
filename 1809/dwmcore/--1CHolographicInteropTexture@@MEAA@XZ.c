/*
 * XREFs of ??1CHolographicInteropTexture@@MEAA@XZ @ 0x18020D0D0
 * Callers:
 *     ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x18020D4D0 (--_GCHolographicInteropTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CHolographicInteropTexture::~CHolographicInteropTexture(CHolographicInteropTexture *this)
{
  bool v1; // zf
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  int v9; // eax
  int v10; // edi
  BOOL v11; // eax
  char v12; // cl
  HANDLE v13; // rax
  HANDLE v14; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 10) == 0LL;
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  if ( !v1 )
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
        word_180276388,
        word_180276388,
        L"!m_pVisualTree",
        "Function: ",
        L"CHolographicInteropTexture::~CHolographicInteropTexture",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
        40);
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
  if ( *((_DWORD *)this + 34) )
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
        word_180276388,
        word_180276388,
        L"m_bufferCount == 0",
        "Function: ",
        L"CHolographicInteropTexture::~CHolographicInteropTexture",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
        41);
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
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_29;
        case 'G':
        case 'g':
          goto LABEL_29;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          v13 = GetCurrentProcess();
          TerminateProcess(v13, 0xC0000001);
          goto LABEL_27;
        case 'T':
        case 't':
          v14 = GetCurrentThread();
          TerminateThread(v14, 0xC0000001);
          goto LABEL_27;
        default:
LABEL_27:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_29:
  ReleaseInterface<CDisplay>((__int64 *)this + 11);
  ReleaseInterface<CDisplay>((__int64 *)this + 12);
  FastRegion::CRegion::FreeMemory((void **)this + 29);
  CResource::~CResource(this);
}
