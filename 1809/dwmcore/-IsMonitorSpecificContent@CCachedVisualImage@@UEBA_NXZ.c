/*
 * XREFs of ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18018D3D0
 * Callers:
 *     ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x18019AA70 (-IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x1800300C8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008C6F4 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008C810 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 */

char __fastcall CCachedVisualImage::IsMonitorSpecificContent(CCachedVisualImage *this)
{
  char v1; // bl
  unsigned int v3; // edi
  __int64 v4; // rsi
  CRenderTargetBitmap *v5; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 64) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 29) + 48LL * v3;
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid((CCachedVisualImage::RenderTargetBitmapInfo *)v4)
        && !*(_BYTE *)(v4 + 44) )
      {
        v5 = *(CRenderTargetBitmap **)(v4 + 8);
        v7 = 0;
        if ( (int)CRenderTargetBitmap::GetDeviceInfo(v5, &v8, (struct DisplayId *)&v7) >= 0
          && DisplayId::IsSpecific((DisplayId *)&v7) )
        {
          break;
        }
      }
      if ( ++v3 >= *((_DWORD *)this + 64) )
        return v1;
    }
    return 1;
  }
  return v1;
}
