/*
 * XREFs of Isoch_Stage_FreeScatterGatherList @ 0x1C0031034
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C002D7F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C002DA9C (Isoch_CompleteTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0030774 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00311FC (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     TR_SendCompleteStageRequest @ 0x1C00297F4 (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C0046B80 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 */

void __fastcall Isoch_Stage_FreeScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rsi
  KIRQL v9; // di
  __int64 v10; // r8

  if ( *(_BYTE *)(a1 + 280) )
  {
    v6 = *(_DWORD *)(a2 + 160);
    if ( v6 )
    {
      if ( a3 )
      {
        KeLowerIrql(0);
        v6 = *(_DWORD *)(a2 + 160);
      }
      TR_SendCompleteStageRequest(a1, v6);
      SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 128);
      if ( a3 )
        KfRaiseIrql(2u);
    }
  }
  else if ( *(_QWORD *)(a2 + 72) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    v9 = KfRaiseIrql(2u);
    LOBYTE(v10) = (*(_BYTE *)(v7 + 32) & 1) == 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v8 + 8) + 96LL))(v8, *(_QWORD *)(a2 + 72), v10);
    KeLowerIrql(v9);
    *(_QWORD *)(a2 + 72) = 0LL;
  }
}
