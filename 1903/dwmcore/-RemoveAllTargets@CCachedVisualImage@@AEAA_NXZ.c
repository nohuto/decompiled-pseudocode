/*
 * XREFs of ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18002B7D8
 * Callers:
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180021570 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18002B6FC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x18002B8F8 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180042AFC (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 */

char __fastcall CCachedVisualImage::RemoveAllTargets(CCachedVisualImage *this)
{
  int v1; // esi
  char v2; // di
  _QWORD *v3; // rbp
  __int64 v4; // rbx

  v1 = *((_DWORD *)this + 66);
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = (_QWORD *)((char *)this + 240);
    v2 = 1;
    do
    {
      v4 = (unsigned int)(v1 - 1);
      CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)(*v3 + 48 * v4));
      DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v3, (unsigned int)v4);
      --v1;
    }
    while ( v1 > 0 );
  }
  return v2;
}
