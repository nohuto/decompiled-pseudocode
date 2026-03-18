/*
 * XREFs of ?EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C0000
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C01AF9B0 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CFloodEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BFF8C (-EmitData@CFloodEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CFloodEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CFloodEffectMarshaler *this,
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
    return DirectComposition::CFloodEffectMarshaler::EmitData(this, a2) != 0;
  }
  return v4;
}
