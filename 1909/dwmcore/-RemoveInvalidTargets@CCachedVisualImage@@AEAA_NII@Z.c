/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180052448
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800AE340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18005235C (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18005250C (-GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILS.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180053B50 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800AD62C (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, int a2, int a3)
{
  int v3; // ebx
  char v4; // si
  _QWORD *v7; // rbp
  __int64 v8; // r14
  CCachedVisualImage::RenderTargetBitmapInfo *v9; // rdi
  _DWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *((_DWORD *)this + 66);
  v4 = 0;
  if ( v3 > 0 )
  {
    v7 = (_QWORD *)((char *)this + 240);
    do
    {
      v8 = (unsigned int)(v3 - 1);
      v9 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v7 + 48 * v8);
      if ( !CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v9)
        || (CRenderTargetBitmap::GetRenderBounds(*((_QWORD *)v9 + 1), v11), v11[2] - v11[0] != a2)
        || v11[3] - v11[1] != a3 )
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v9);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v7, (unsigned int)v8);
        v4 = 1;
      }
      --v3;
    }
    while ( v3 > 0 );
  }
  return v4;
}
