/*
 * XREFs of ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x18005018C
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // xmm1_4
  unsigned int v4; // xmm2_4
  unsigned int v5; // xmm3_4
  unsigned int v7; // xmm4_4
  __int64 v8; // r10
  char v9; // r11
  unsigned int v10; // xmm4_4
  __int128 v12; // xmm0
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v7 = a2[3];
  LODWORD(v13) = *a2;
  *(_QWORD *)((char *)&v13 + 4) = __PAIR64__(v5, v4);
  HIDWORD(v13) = v7;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a1 + 24, &v13) )
  {
    *(_QWORD *)&v13 = __PAIR64__(v4, v3);
    v9 = 1;
    *((_QWORD *)&v13 + 1) = __PAIR64__(v10, v5);
    v12 = v13;
    *(_BYTE *)(v8 + 44) = 1;
    *(_OWORD *)(v8 + 24) = v12;
  }
  if ( *(_DWORD *)(v8 + 40) != a3 )
  {
    *(_DWORD *)(v8 + 40) = a3;
    v9 = 1;
    *(_BYTE *)(v8 + 44) = 1;
  }
  return v9;
}
