/*
 * XREFs of ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180086A9C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007C88C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000976C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x18007D2EC (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 */

void __fastcall CThumbnailVisual::OnRepresentationTypeUpdated(CThumbnailVisual *this)
{
  __int64 v2; // rax
  CImmersiveWindowIconic *v3; // rcx

  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
  }
  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    v3 = *(CImmersiveWindowIconic **)(v2 + 512);
    if ( v3 )
      CImmersiveWindowIconic::OnRepresentationTypeUpdated(v3, *(_DWORD *)(v2 + 164));
  }
}
