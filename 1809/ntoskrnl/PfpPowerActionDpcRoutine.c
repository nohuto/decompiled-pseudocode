/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x1401597C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KxAcquireSpinLock(&qword_14043D1C8);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( Object && dword_14043D1D0 == v6 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_14043D1D4 == v6 )
  {
    _InterlockedAnd(&dword_1404D8614, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_14043D1C8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
