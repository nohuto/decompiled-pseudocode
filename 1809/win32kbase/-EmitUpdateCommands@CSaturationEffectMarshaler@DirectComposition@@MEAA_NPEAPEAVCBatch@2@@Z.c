/*
 * XREFs of ?EmitUpdateCommands@CSaturationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017F140
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C01752A0 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CSaturationEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017F0E4 (-EmitData@CSaturationEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSaturationEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CSaturationEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CEffectInputSet::EmitUpdateCommands(
         (__int64)this + 56,
         (__int64)a2,
         *((_DWORD *)this + 6),
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CSaturationEffectMarshaler::EmitData(this, a2) != 0;
  }
  return v4;
}
