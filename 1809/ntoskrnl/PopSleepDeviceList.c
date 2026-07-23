/*
 * XREFs of PopSleepDeviceList @ 0x140569AB8
 * Callers:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInitializeSemaphore @ 0x14008A3D0 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PopNotifyDevice @ 0x140569C68 (PopNotifyDevice.c)
 */

int __fastcall PopSleepDeviceList(__int64 a1, __int64 a2)
{
  LONG v2; // r15d
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  int v5; // ebx
  LONG v6; // r14d
  struct _KSEMAPHORE *p_Semaphore; // rax
  _QWORD *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rcx
  PVOID Object[2]; // [rsp+48h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-29h] BYREF
  struct _KSEMAPHORE v15; // [rsp+70h] [rbp-11h] BYREF
  struct _KSEMAPHORE Semaphore; // [rsp+90h] [rbp+Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+2Fh] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (_QWORD *)(a2 + 24);
  v4 = *(_QWORD **)(a2 + 24);
  v5 = 0;
  v6 = 0;
  while ( v4 != v3 )
  {
    v4 = (_QWORD *)*v4;
    ++v6;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeSemaphore(&Semaphore, v6, v2);
  KeInitializeSemaphore(&v15, 0, v2);
  *(_QWORD *)(a1 + 24) = &Event;
  *(_QWORD *)(a1 + 32) = &Semaphore;
  *(_QWORD *)(a1 + 40) = &v15;
  Object[0] = &Event;
  p_Semaphore = &Semaphore;
  Object[1] = &Semaphore;
  if ( v2 > 0 )
  {
    do
    {
      LODWORD(p_Semaphore) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( *(int *)(a1 + 448) < 0 )
        break;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140418730 + 1, &LockHandle);
      v9 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) == v3 )
      {
        v10 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) == v9 )
        {
          *v3 = v10;
          *(_QWORD *)(v10 + 8) = v3;
          v11 = *(_QWORD **)(a1 + 440);
          if ( *v11 == a1 + 432 )
            continue;
        }
      }
      __fastfail(3u);
      v9[1] = v11;
      *v9 = a1 + 432;
      *v11 = v9;
      *(_QWORD *)(a1 + 440) = v9;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v2;
      ++v5;
      LODWORD(p_Semaphore) = PopNotifyDevice(a1, v9);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v5 > 0 )
        {
          LODWORD(p_Semaphore) = KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
          --v5;
        }
      }
    }
    while ( v2 > 0 );
    while ( v5 > 0 )
    {
      LODWORD(p_Semaphore) = KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
      --v5;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)p_Semaphore;
}
