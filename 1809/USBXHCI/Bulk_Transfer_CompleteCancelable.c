/*
 * XREFs of Bulk_Transfer_CompleteCancelable @ 0x1C0032D6C
 * Callers:
 *     Bulk_MapStage @ 0x1C002FC50 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C0030114 (Bulk_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0030AC8 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0030FA8 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_RetrieveNextStage @ 0x1C003122C (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0032F2C (Bulk_Transfer_PrepareForCompletion.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0033D50 (WPP_RECORDER_SF_DDDqd.c)
 */

void __fastcall Bulk_Transfer_CompleteCancelable(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebx
  int v7; // edx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  __int64 **v14; // rcx
  KIRQL v15; // bl

  v5 = a3;
  v7 = *((_DWORD *)a2 + 16) - 1;
  if ( v7 )
  {
    if ( v7 != 2 )
    {
LABEL_16:
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      Bulk_Transfer_PrepareForCompletion(a1, a2, v5);
      v15 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        a2[3],
        *((unsigned int *)a2 + 18));
      KeLowerIrql(v15);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      return;
    }
    if ( a4 )
    {
      v8 = (__int64 *)*a2;
      v9 = (__int64 **)a2[1];
      v5 = -1073676288;
      if ( a3 != -1 )
        v5 = a3;
      if ( (__int64 *)v8[1] == a2 && *v9 == a2 )
      {
        *v9 = v8;
        v8[1] = (__int64)v9;
        goto LABEL_16;
      }
LABEL_17:
      __fastfail(3u);
    }
  }
  else
  {
    v10 = (__int64 *)*a2;
    v11 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v11 != a2 )
      goto LABEL_17;
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( (*(int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2048))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2[3]) >= 0 )
    {
      *((_DWORD *)a2 + 16) = 0;
      goto LABEL_16;
    }
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(unsigned __int8 *)(v12 + 135);
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v12, v13, 41);
    *((_DWORD *)a2 + 16) = 2;
    v14 = *(__int64 ***)(a1 + 392);
    if ( *v14 != (__int64 *)(a1 + 384) )
      goto LABEL_17;
    *a2 = a1 + 384;
    a2[1] = (__int64)v14;
    *v14 = a2;
    *(_QWORD *)(a1 + 392) = a2;
  }
}
