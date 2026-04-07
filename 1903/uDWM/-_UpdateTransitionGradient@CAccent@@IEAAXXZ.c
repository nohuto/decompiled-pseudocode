/*
 * XREFs of ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18008C838
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180027580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180001E8C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 */

void __fastcall CAccent::_UpdateTransitionGradient(CAccent *this)
{
  CRenderDataVisual *v1; // rdx
  int v2; // r9d
  int v4; // eax
  int v5; // r8d
  int v6; // ecx
  int v7; // r8d
  __m128i v8; // [rsp+30h] [rbp-28h] BYREF

  v1 = (CRenderDataVisual *)*((_QWORD *)this + 41);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0;
    v5 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
    v6 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
    v8.m128i_i64[0] = 0LL;
    if ( v6 >= 0 )
      v4 = v6;
    if ( v5 >= 0 )
      v2 = v5;
    v7 = *((_DWORD *)this + 76);
    *(float *)&v8.m128i_i32[2] = (float)v4 + 0.0;
    *(float *)&v8.m128i_i32[3] = (float)v2 + 0.0;
    CAccent::_UpdateSolidFill(this, v1, v7, &v8, *((_DWORD *)this + 98));
  }
}
