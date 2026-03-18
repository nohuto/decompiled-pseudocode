/*
 * XREFs of Isoch_CompleteTransfers @ 0x1C002DA9C
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x1C002F400 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0027C18 (StageQueue_ForwardScanGetNextStage.c)
 *     StageQueue_Release @ 0x1C0027C58 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0031034 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0032228 (Isoch_Transfer_CompleteCancelable.c)
 */

void __fastcall Isoch_CompleteTransfers(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rax
  KIRQL v7; // bl
  int v8; // r12d
  unsigned __int8 *NextStage; // rbx
  __int64 v10; // r8
  __int64 v11; // r13
  KIRQL v12; // dl

  v3 = a2;
  while ( 1 )
  {
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v5[1] != v3 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    v5[1] = v5;
    *v5 = v5;
    if ( *((_DWORD *)v5 + 17) == 259 )
    {
      *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
      v8 = 0;
      *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 128);
      if ( NextStage )
      {
        do
        {
          LOBYTE(v10) = a3;
          Isoch_Stage_FreeScatterGatherList(a1, NextStage, v10);
          *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
          v11 = *(_QWORD *)NextStage;
          if ( NextStage[56] )
          {
            IoFreeMdl(*((PMDL *)NextStage + 8));
            *((_QWORD *)NextStage + 8) = 0LL;
            NextStage[56] = 0;
          }
          TR_ReleaseSegments(a1, (unsigned __int64 *)NextStage + 1, 1);
          TR_ReleaseSegments(a1, (unsigned __int64 *)NextStage + 3, 0);
          StageQueue_Release((unsigned __int8 *)(v11 + 128), NextStage);
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
          ++*((_DWORD *)v5 + 28);
          ++v8;
          NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 128);
        }
        while ( NextStage );
        v3 = a2;
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v5, -1, -1073676288, 1, 0);
      v12 = *(_BYTE *)(a1 + 104);
      *(_DWORD *)(a1 + 376) -= v8;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
    }
    else
    {
      v7 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v5[3],
        *((unsigned int *)v5 + 17));
      KeLowerIrql(v7);
    }
  }
}
