/*
 * XREFs of PopSleepDeviceList @ 0x14015EA10
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     PopIsNotifyForDirectedPowerTransition @ 0x14015EC84 (PopIsNotifyForDirectedPowerTransition.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopNotifyDevice @ 0x1405985F0 (PopNotifyDevice.c)
 *     PopIssueDirectedPowerTransition @ 0x1408AC59C (PopIssueDirectedPowerTransition.c)
 */

int __fastcall PopSleepDeviceList(__int64 a1, __int64 a2)
{
  int v4; // r15d
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  int v7; // edi
  int v8; // ecx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-29h]
  _QWORD v17[4]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v18[4]; // [rsp+80h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+1Fh] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp+37h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v18, 0, sizeof(v18));
  v4 = *(_DWORD *)(a2 + 4);
  v5 = (_QWORD *)(a2 + 24);
  v6 = *(_QWORD **)(a2 + 24);
  v7 = 0;
  v8 = 0;
  while ( v6 != v5 )
  {
    v6 = (_QWORD *)*v6;
    ++v8;
  }
  LOWORD(v14) = 1;
  v16 = &v15;
  v15 = (__int64)&v15;
  v18[2] = &v18[1];
  v18[1] = &v18[1];
  v17[2] = &v17[1];
  v17[1] = &v17[1];
  *(_QWORD *)(a1 + 24) = &v14;
  *(_QWORD *)(a1 + 32) = v18;
  *(_QWORD *)(a1 + 40) = v17;
  Object[0] = &v14;
  v9 = v18;
  Object[1] = v18;
  BYTE2(v14) = 6;
  HIDWORD(v14) = 0;
  LOBYTE(v18[0]) = 5;
  BYTE2(v18[0]) = 8;
  HIDWORD(v18[0]) = v8;
  LODWORD(v18[3]) = v4;
  LOBYTE(v17[0]) = 5;
  BYTE2(v17[0]) = 8;
  HIDWORD(v17[0]) = 0;
  LODWORD(v17[3]) = v4;
  if ( v4 > 0 )
  {
    do
    {
      LODWORD(v9) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( *(int *)(a1 + 448) < 0 )
        break;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140442FD0 + 1, &LockHandle);
      v10 = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) == v5 )
      {
        v11 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) == v10 )
        {
          *v5 = v11;
          *(_QWORD *)(v11 + 8) = v5;
          v12 = *(_QWORD **)(a1 + 440);
          if ( *v12 == a1 + 432 )
            continue;
        }
      }
      __fastfail(3u);
      v10[1] = v12;
      *v10 = a1 + 432;
      *v12 = v10;
      *(_QWORD *)(a1 + 440) = v10;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v4;
      ++v7;
      LODWORD(v9) = (unsigned __int8)PopIsNotifyForDirectedPowerTransition(v10)
                  ? PopIssueDirectedPowerTransition(a1, v10)
                  : (unsigned int)PopNotifyDevice(a1, v10);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v7 > 0 )
        {
          LODWORD(v9) = KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
          --v7;
        }
      }
    }
    while ( v4 > 0 );
    while ( v7 > 0 )
    {
      LODWORD(v9) = KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
      --v7;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)v9;
}
