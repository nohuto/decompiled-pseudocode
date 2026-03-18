/*
 * XREFs of ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800BC4FC
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BC560 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z @ 0x1800BC480 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetRealizedColor(
        CSolidColorLegacyMilBrush *this,
        struct _D3DCOLORVALUE *a2)
{
  int Opacity; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  float v7; // xmm1_4
  float v9; // [rsp+40h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(*((double *)this + 7), *((_QWORD *)this + 8), &v9);
  v6 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, Opacity, 0x1Eu);
  }
  else
  {
    v7 = v9;
    *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)((char *)this + 88);
    a2->a = v7 * a2->a;
  }
  return v6;
}
