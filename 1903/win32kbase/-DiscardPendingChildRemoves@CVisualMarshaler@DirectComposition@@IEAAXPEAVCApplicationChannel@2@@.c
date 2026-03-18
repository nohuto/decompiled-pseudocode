/*
 * XREFs of ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008AAC8
 * Callers:
 *     ?Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008A9F0 (-Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1C008AA10 (-RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z.c)
 * Callees:
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0011208 (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::DiscardPendingChildRemoves(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  while ( *((_QWORD *)this + 23) )
    DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(this, a2, 0LL);
}
