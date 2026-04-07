/*
 * XREFs of ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18008CBCC
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180082BE4 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001449C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180025A50 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x18008347C (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 */

void __fastcall CThumbnailVisual::OnRepresentationTypeUpdated(CThumbnailVisual *this)
{
  __int64 v2; // rax
  CImmersiveWindowIconic *v3; // rcx

  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
    CThumbnailVisual::SetDirtyFlags(this, 0x10000);
  }
  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    v3 = *(CImmersiveWindowIconic **)(v2 + 512);
    if ( v3 )
      CImmersiveWindowIconic::OnRepresentationTypeUpdated(v3, *(_DWORD *)(v2 + 164));
  }
}
