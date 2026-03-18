/*
 * XREFs of ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800BF30C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z @ 0x1800BF370 (-GetOpacity@CLegacyMilBrush@@KAJMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetRealizedColor(
        CSolidColorLegacyMilBrush *this,
        struct _D3DCOLORVALUE *a2)
{
  signed int Opacity; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  float v7; // xmm1_4
  float v9; // [rsp+40h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(this, *((_QWORD *)this + 8), &v9);
  v6 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, Opacity, 0x1Cu, 0LL);
  }
  else
  {
    v7 = v9;
    *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)((char *)this + 88);
    a2->a = v7 * a2->a;
  }
  return v6;
}
