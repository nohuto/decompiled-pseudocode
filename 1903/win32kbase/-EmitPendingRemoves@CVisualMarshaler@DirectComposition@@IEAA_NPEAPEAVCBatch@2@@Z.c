/*
 * XREFs of ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000DB1C
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0011208 (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

bool __fastcall DirectComposition::CVisualMarshaler::EmitPendingRemoves(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  struct DirectComposition::CApplicationChannel *v4; // rsi
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
  while ( *((_QWORD *)this + 23) )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
      break;
    DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(this, v4, v6);
  }
  return *((_QWORD *)this + 23) == 0LL;
}
