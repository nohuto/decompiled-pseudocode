/*
 * XREFs of MiGetNextSession @ 0x140012754
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     PsQueryCpuQuotaInformation @ 0x140193EE4 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14007E604 (MiSelectSessionAttachProcess.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 */

void *__fastcall MiGetNextSession(_QWORD *Object)
{
  __int64 ThreadServerSilo; // rbp
  void *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rbx
  void *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  v3 = 0LL;
  if ( Object )
    v4 = Object[128];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 144);
LABEL_17:
    while ( v5 != &qword_14043C000 )
    {
      v7 = (void *)MiSelectSessionAttachProcess(v5 - 18);
      v3 = v7;
      if ( v7 )
      {
        if ( !ThreadServerSilo || v5[1020] == ThreadServerSilo )
          break;
        ObfDereferenceObject(v7);
        v3 = 0LL;
      }
      v5 = (__int64 *)*v5;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( Object )
      ObfDereferenceObject(Object);
    return v3;
  }
  else
  {
    v5 = (__int64 *)qword_14043C000;
    if ( qword_14043C000 )
      goto LABEL_17;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
}
