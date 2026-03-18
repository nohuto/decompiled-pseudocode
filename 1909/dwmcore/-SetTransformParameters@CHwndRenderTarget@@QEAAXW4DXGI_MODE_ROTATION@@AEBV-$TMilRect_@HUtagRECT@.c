/*
 * XREFs of ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180025B40
 * Callers:
 *     ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180028108 (-ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTA.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1801A7168 (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKT.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180025AF8 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CHwndRenderTarget::SetTransformParameters(__int64 a1, int a2, __int128 *a3, _OWORD *a4)
{
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // r10

  v4 = *(_QWORD *)(a1 + 168);
  *(_OWORD *)(a1 + 468) = *a4;
  v5 = *a3;
  *(_DWORD *)(a1 + 500) = a2;
  *(_OWORD *)(a1 + 484) = v5;
  if ( v4 )
  {
    *(_OWORD *)(v4 + 120) = *a4;
    *(_OWORD *)(*(_QWORD *)(a1 + 168) + 104LL) = *a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 168) + 296LL) = a2;
    LOBYTE(v4) = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                   (_DWORD *)(*(_QWORD *)(a1 + 168) + 104LL),
                   (_DWORD *)(*(_QWORD *)(a1 + 168) + 88LL)) ^ 1;
    *(_BYTE *)(v6 + 856) = v4;
  }
  return v4;
}
