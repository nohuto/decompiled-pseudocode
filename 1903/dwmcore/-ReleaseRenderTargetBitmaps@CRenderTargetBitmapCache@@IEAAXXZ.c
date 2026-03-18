/*
 * XREFs of ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180024318
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800240B0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800474C0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

void __fastcall CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 i; // rdi
  CScratchRenderTargetBitmap *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CScratchRenderTargetBitmap **)(*(_QWORD *)this + 8 * i);
    *((_BYTE *)v3 + 216) = 0;
    CScratchRenderTargetBitmap::Release(v3);
  }
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 8LL);
}
