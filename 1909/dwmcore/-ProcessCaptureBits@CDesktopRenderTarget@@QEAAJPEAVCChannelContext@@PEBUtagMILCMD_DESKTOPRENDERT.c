/*
 * XREFs of ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800CD10C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800CD1F8 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800CD248 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x1800CD638 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCaptureBits(
        CDesktopRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS *a3)
{
  CaptureBitsResponse *v6; // rax
  __int64 v7; // rcx
  struct CaptureBitsResponse *v8; // rdi
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct WICRect v13; // [rsp+50h] [rbp-18h] BYREF

  v13 = *(struct WICRect *)((char *)a3 + 8);
  v6 = (CaptureBitsResponse *)CaptureBitsResponse::operator new((unsigned __int64)this);
  if ( v6 )
    v8 = CaptureBitsResponse::CaptureBitsResponse(
           v6,
           *(struct CGlobalSurfaceManager **)(*((_QWORD *)this + 2) + 72LL),
           a2,
           (CDesktopRenderTarget *)((char *)this + 168),
           *((struct CVisualTree **)this + 15),
           1.0,
           &v13,
           (enum DXGI_FORMAT)*((_DWORD *)a3 + 8),
           *((_QWORD *)a3 + 3));
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = CLegacySurfaceManager::AddCaptureBitsResponse(
           (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 104LL),
           v8);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x8B2u, 0LL);
    (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v8 + 32LL))(v8);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x8ACu, 0LL);
  }
  return v11;
}
