/*
 * XREFs of CiProcessSuspend @ 0x1C0004810
 * Callers:
 *     CiProcessNotification @ 0x1C00026B0 (CiProcessNotification.c)
 * Callees:
 *     CiSchedulerPoke @ 0x1C0002410 (CiSchedulerPoke.c)
 *     CiSchedulerSetPriority @ 0x1C0002540 (CiSchedulerSetPriority.c)
 *     WPP_SF_qqd @ 0x1C00049CC (WPP_SF_qqd.c)
 *     CiSchedulerPostSuspend @ 0x1C0004AB4 (CiSchedulerPostSuspend.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000AA90 (CiThreadIncrementScheduledCount.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B760 (CiThreadDecrementScheduledCount.c)
 *     CiReleaseProcessLock @ 0x1C000B860 (CiReleaseProcessLock.c)
 *     CiAcquireProcessLock @ 0x1C000B890 (CiAcquireProcessLock.c)
 */

__int64 __fastcall CiProcessSuspend(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // bp
  char v5; // di
  _QWORD *v6; // rdi
  _QWORD **i; // rsi
  _QWORD *v8; // rcx
  unsigned int v9; // r15d
  __int64 v10; // r13
  _QWORD *j; // r14
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  char v14; // al
  __int64 result; // rax
  char v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_qqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a1, *(_QWORD *)(a1 + 80), (unsigned __int8)a2);
  v5 = 0;
  v17 = 0;
  CiAcquireProcessLock(a1);
  if ( *(_BYTE *)(a1 + 88) != v4 )
  {
    v6 = *(_QWORD **)(a1 + 64);
    for ( i = (_QWORD **)(a1 + 64); v6 != i; v6 = (_QWORD *)*v6 )
    {
      v8 = v6 - 14;
      if ( v4 )
        CiThreadDecrementScheduledCount(v8);
      else
        CiThreadIncrementScheduledCount(v8);
    }
    v9 = 0;
    v10 = KeQueryInterruptTimePrecise(&v16);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( j = *i; j != i; j = (_QWORD *)*j )
    {
      v12 = j - 14;
      v13 = v9 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(j - 5) + 136LL) + 3LL) & 1) == 0 )
        v13 = v9;
      v9 = v13;
      v14 = v4 & 1 | *((_BYTE *)v12 + 148) & 0xFE;
      *((_BYTE *)v12 + 148) = v14;
      if ( (v14 & 1) != 0 )
      {
        if ( *((_BYTE *)v12 + 107) != 0xFF )
          KeSetBasePriorityThread((PKTHREAD)v12[12], *((_DWORD *)v12 + 36));
        *((_BYTE *)v12 + 107) = -1;
      }
      else
      {
        CiSchedulerSetPriority((__int64)(j - 14));
      }
    }
    CiSchedulerPostSuspend(v4, v9, v10, &v17);
    v5 = v17;
    *(_BYTE *)(a1 + 88) = v4;
  }
  result = CiReleaseProcessLock(a1);
  if ( v5 )
    return CiSchedulerPoke(0);
  return result;
}
