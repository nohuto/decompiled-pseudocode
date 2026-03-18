/*
 * XREFs of ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B08C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C01B1950 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CEffectInputSet::EmitUpdateCommands((char *)this + 48, a2, *((unsigned int *)this + 6), a2);
}
