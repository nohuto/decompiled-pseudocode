/*
 * XREFs of ?EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C1320
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C01B1950 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C1270 (-EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CColorMatrixEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CEffectInputSet::EmitUpdateCommands(
         (__int64)this + 48,
         (__int64)a2,
         *((_DWORD *)this + 6),
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CColorMatrixEffectMarshaler::EmitData(this, a2);
  }
  return v4;
}
