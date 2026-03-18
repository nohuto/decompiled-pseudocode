/*
 * XREFs of ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x18024A54C
 * Callers:
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801A7040 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x18024A75C (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 */

__int64 __fastcall CHolographicFrameProcessor::Create(
        struct CComposition *a1,
        unsigned int a2,
        void *a3,
        enum DXGI_FORMAT a4,
        void *a5,
        unsigned int a6,
        struct CHolographicFrameProcessor **a7)
{
  CHolographicFrameProcessor *v10; // rax
  CHolographicFrameProcessor *v11; // rbx
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  enum DXGI_FORMAT v16; // [rsp+20h] [rbp-28h]
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (CHolographicFrameProcessor *)DefaultHeap::AllocClear(0x98uLL);
  v11 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v10 + 4) = 0;
  *(_QWORD *)v10 = &CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'};
  *((_QWORD *)v10 + 1) = &CHolographicFrameProcessor::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v10 + 3) = &CHolographicFrameProcessor::`vftable'{for `IFlipPresentCallback'};
  *((_QWORD *)v10 + 4) = &CHolographicFrameProcessor::`vftable'{for `IFlipContentCallback'};
  *((_QWORD *)v10 + 5) = &CHolographicFrameProcessor::`vftable'{for `IHolographicWin32kInteropTexture'};
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 11) = 0LL;
  *((_QWORD *)v10 + 12) = 0LL;
  *((_QWORD *)v10 + 13) = 0LL;
  *((_QWORD *)v10 + 15) = 0LL;
  *((_QWORD *)v10 + 16) = 0LL;
  *((_QWORD *)v10 + 17) = 0LL;
  (**(void (__fastcall ***)(LPVOID))v10)(v10);
  v12 = CHolographicFrameProcessor::Initialize(v11, a1, a2, a3, v16, (unsigned int)a5, a6);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x5Bu, 0LL);
    (*(void (__fastcall **)(CHolographicFrameProcessor *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    *a7 = v11;
  }
  return v14;
}
