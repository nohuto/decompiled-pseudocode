/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x140880500
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 */

LONG_PTR __fastcall TtmpScheduledEvaluationWorker(volatile __int32 *Object)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  int v5; // eax

  result = (unsigned int)_InterlockedExchange(Object + 62, 0);
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    v4 = *((_QWORD *)Object + 2);
    if ( v4 )
    {
      v5 = *((_DWORD *)Object + 9);
      if ( (v5 & 1) == 0 && (v5 & 2) == 0 )
      {
        *((_DWORD *)Object + 9) = v5 | 4;
        TtmiScheduleSessionWorker(v4, 2LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
