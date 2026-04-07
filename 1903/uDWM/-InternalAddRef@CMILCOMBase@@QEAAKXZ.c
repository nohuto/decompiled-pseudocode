/*
 * XREFs of ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18004BCEC
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180047668 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800480E8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?AddRef@CCompoundBitmapLock@@UEAAKXZ @ 0x18004BCE0 (-AddRef@CCompoundBitmapLock@@UEAAKXZ.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800B7938 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILCOMBase::InternalAddRef(CMILCOMBase *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  if ( *((int *)this + 2) < 0 )
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
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1800C3E20,
        word_1800C3E20,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"windows\\dwm\\common\\shared\\milcom.cpp",
        31);
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
        JUMPOUT(0x18007503ELL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        if ( (char)Response == 105 )
          goto LABEL_25;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_24;
          goto LABEL_22;
        }
LABEL_23:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_24:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        }
        if ( (char)Response == 71 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_24;
LABEL_22:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_24;
          }
          goto LABEL_23;
        }
LABEL_25:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
