/*
 * XREFs of ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180245170
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEA0 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CHolographicInteropTexture::AddInvalidRects(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v8; // eax
  __int64 v9; // r14
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF

  v4 = (__int64 *)((char *)this + 40);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 2883) )
    {
      CDirtyRegion::SetFullDirty(a3);
    }
    else
    {
      v8 = *(_DWORD *)(v6 + 1276);
      if ( v8 )
      {
        v9 = v8;
        do
        {
          v10 = *(_OWORD *)(v5 + v6 + 1116);
          CDirtyRegion::Add(a3, 0LL, 0LL, (__int64)&v10);
          v5 += 16LL;
          --v9;
        }
        while ( v9 );
      }
    }
    ReleaseInterface<CDisplay>(v4);
  }
}
