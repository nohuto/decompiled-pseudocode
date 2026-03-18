/*
 * XREFs of ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0175780
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C01752A0 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01755B8 (-EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0175650 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // si

  if ( !DirectComposition::CEffectInputSet::EmitUpdateCommands(
          (__int64)this + 56,
          (__int64)a2,
          *((_DWORD *)this + 6),
          a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitData(this, (struct DirectComposition::CBatch **)a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 0) )
    return 0;
  v4 = 1;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 1u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 2u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 3u) )
  {
    return 0;
  }
  return v4;
}
