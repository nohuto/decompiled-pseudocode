/*
 * XREFs of ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C000CAC0
 * Callers:
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000ABDC (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000CBC8 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = *(_QWORD *)(v4 + 192);
  *(_QWORD *)(v4 + 192) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    a3[1] = 0LL;
    *((_DWORD *)a3 + 1) = 483;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v4 + 24);
  }
  *(_DWORD *)(v4 + 16) &= ~8u;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v4);
}
