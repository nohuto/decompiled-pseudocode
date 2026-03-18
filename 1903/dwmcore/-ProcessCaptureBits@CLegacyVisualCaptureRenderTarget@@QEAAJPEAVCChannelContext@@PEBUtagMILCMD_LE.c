/*
 * XREFs of ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AB254
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800CD308 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800CD358 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x1800CD748 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTarget::ProcessCaptureBits(
        CLegacyVisualCaptureRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS *a3)
{
  CDirtyRegion *v3; // rbp
  unsigned int v5; // edx
  struct CaptureBitsResponse *v6; // rdi
  struct CComposition **Resource; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  signed int VisualTree; // eax
  __int64 v14; // rcx
  CaptureBitsResponse *v15; // rax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  struct WICRect v20; // [rsp+50h] [rbp-28h] BYREF
  CDirtyRegion *v21; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  v21 = 0LL;
  if ( !v5 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 3)) & _xmm) < 0.0000011920929 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, 0x1Cu, 0LL);
    goto LABEL_14;
  }
  Resource = (struct CComposition **)CResourceTable::GetResource(*((_QWORD *)a2 + 3), v5, 0xBDu);
  if ( !Resource )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x88980403, 0x22u, 0LL);
    return v12;
  }
  VisualTree = CVisual::GetVisualTree(Resource, &v21, v11, 0);
  v12 = VisualTree;
  if ( VisualTree >= 0 )
  {
    v20 = (struct WICRect)*((_OWORD *)a3 + 1);
    v15 = (CaptureBitsResponse *)CaptureBitsResponse::operator new();
    v3 = v21;
    v16 = (__int64)v15;
    if ( v15 )
      v6 = CaptureBitsResponse::CaptureBitsResponse(
             v15,
             *(struct CGlobalSurfaceManager **)(*((_QWORD *)this + 2) + 72LL),
             a2,
             0LL,
             v21,
             1.0 / *((float *)a3 + 3),
             &v20,
             (enum DXGI_FORMAT)*((_DWORD *)a3 + 10),
             *((_QWORD *)a3 + 4));
    if ( !v6 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x8007000E, 0x33u, 0LL);
      goto LABEL_16;
    }
    v17 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 104LL),
            v6);
    v12 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x39u, 0LL);
LABEL_14:
    if ( v6 )
      (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v6 + 32LL))(v6);
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, VisualTree, 0x25u, 0LL);
  v3 = v21;
LABEL_16:
  if ( v3 )
    CDirtyRegion::Release(v3);
  return v12;
}
