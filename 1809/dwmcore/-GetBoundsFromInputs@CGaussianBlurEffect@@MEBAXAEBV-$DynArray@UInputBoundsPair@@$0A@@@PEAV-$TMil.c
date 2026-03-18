/*
 * XREFs of ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C1EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CGaussianBlurEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, _OWORD *a3)
{
  struct D2D_RECT_F v3; // xmm0
  __int64 v4; // r10
  __int64 i; // r9
  float *v6; // r11
  float v7; // xmm4_4
  int v8; // r9d
  struct D2D_RECT_F v9; // [rsp+20h] [rbp-20h] BYREF

  v3 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = a2;
  *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v9 = v3;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 24); i = (unsigned int)(v8 + 1) )
  {
    v9 = *(struct D2D_RECT_F *)(*(_QWORD *)v4 + 20 * i + 4);
    if ( !IsEmpty(&v9) )
    {
      v9.left = v9.left - v7;
      v9.top = v9.top - v7;
      v9.right = v9.right + v7;
      v9.bottom = v9.bottom + v7;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, &v9.left);
  }
}
