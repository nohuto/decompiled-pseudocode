/*
 * XREFs of ?ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0250
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C00A03AC (-ndisCheckWatchdogTimer@@YAEXZ.c)
 *     ?ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0414 (-ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A063C (-ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 */

void __fastcall ndis5InterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  struct _KDPC *v6; // rcx
  void *v7; // r8
  void *v8; // r9
  int v9; // eax

  v4 = DeferredContext[13];
  if ( ndisCheckWatchdogTimer() == 1 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    v9 = *(_DWORD *)(v4 + 120);
    if ( (v9 & 0x2000000) == 0 )
    {
      *(_DWORD *)(v4 + 120) = v9 | 0x2000000;
      ndisReferenceMiniportNoCheck(v4, 0x4Eu);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 3416), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
    *(_QWORD *)(v4 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
  }
  else if ( (*(_DWORD *)(v4 + 120) & 0x40000) != 0 )
  {
    ndisMDpcX(v6, DeferredContext, v7, v8);
  }
  else
  {
    ndisMDpc(v6, DeferredContext, v7, v8);
  }
}
