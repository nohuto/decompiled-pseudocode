/*
 * XREFs of ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18008B928
 * Callers:
 *     ?GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18008B8CC (-GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAccentBlurBehind::GetAccentBlurBehindBrush(
        CAccentBlurBehind *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct MilPoint3F *a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 result; // rax

  if ( *a2 )
    CBaseObject::Release(*a2);
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 42);
  *a2 = (struct CImageLegacyMilBrushProxy *)v8;
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  if ( *a3 )
    CBaseObject::Release(*a3);
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 41);
  *a3 = (struct CCachedVisualImageProxy *)v9;
  if ( v9 )
    _InterlockedIncrement(v9 + 2);
  v10 = *((float *)this + 80);
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  v12 = FLOAT_1_0;
  if ( v11 >= 0.0000011920929 )
    v12 = 1.0 / v10;
  *(float *)a4 = v12;
  result = 0LL;
  *((float *)a4 + 1) = v12;
  *((_DWORD *)a4 + 2) = 1065353216;
  return result;
}
