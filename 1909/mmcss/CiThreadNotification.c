/*
 * XREFs of CiThreadNotification @ 0x1C0001060
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadDereference @ 0x1C000B420 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B4D0 (CiThreadCleanup.c)
 */

void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  if ( !Create )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
    v5 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
    if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      v5 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
    while ( v5 )
    {
      if ( (unsigned __int64)CurrentThread < *(_QWORD *)(v5 + 56) )
      {
        v6 = *(_QWORD *)v5;
        if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v6 )
        {
          v5 ^= v6;
          continue;
        }
      }
      else
      {
        if ( (unsigned __int64)CurrentThread <= *(_QWORD *)(v5 + 56) )
        {
          v4 = v5 - 40;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 40 + 32)) <= 1 )
            __fastfail(0xEu);
          break;
        }
        v6 = *(_QWORD *)(v5 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v6 )
        {
          v5 ^= v6;
          continue;
        }
      }
      v5 = v6;
    }
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
    if ( v4 )
    {
      CiThreadCleanup(v4);
      CiThreadDereference(v4);
    }
  }
}
