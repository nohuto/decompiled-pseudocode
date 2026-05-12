/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x1C0013970
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0013850 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0022F00 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B34 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0005BC8 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005CC8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00136C0 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0013BC8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013D40 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00147A4 (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v4; // r14
  __int64 result; // rax
  int v7; // edi
  unsigned __int8 i; // bl
  __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // r15
  __int64 *v12; // r14
  __int64 j; // rdi
  __int64 UnitAtDirql; // rsi
  bool v15; // zf
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // r8
  _QWORD *v19; // rsi
  KIRQL v20; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v23[96]; // [rsp+50h] [rbp-98h] BYREF
  int v24; // [rsp+F0h] [rbp+8h]

  v4 = a3;
  memset(v23, 0, sizeof(v23));
  result = RaidBusEnumeratorGetUnit(a1, a2, v23);
  if ( (int)result >= 0 )
  {
    if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, v23, v4) < 0 )
    {
      v7 = RaidBusEnumeratorProbeLunZero((__int64)a1, a2);
      memset(v4, 0, 0xFFuLL);
      if ( v7 >= 0 )
        *v4 = 0x101010101010101LL;
    }
    RaidBusEnumeratorReleaseUnit(a1, v23);
    v24 = a2;
    for ( i = 0; i != 0xFF; ++i )
    {
      v9 = *a1;
      BYTE2(v24) = i;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v9 + 672) )
        {
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v9, v24);
        }
        else
        {
          v20 = RaidAdapterAcquireInterruptLock(v9);
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v9, v24);
          RaidAdapterReleaseInterruptLock(v9, v20);
        }
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        v11 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 112), &LockHandle);
        v12 = *(__int64 **)(v9 + 120);
        for ( j = v9 + 120; v12 != (__int64 *)j; v12 = (__int64 *)*v12 )
        {
          v11 = (__int64)(v12 - 7);
          if ( ((unsigned __int8)BYTE2(*((_DWORD *)v12 + 10)) | ((((unsigned __int8)*((_DWORD *)v12 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v12 + 10))) << 8)) == (i | ((BYTE1(v24) | ((unsigned __int8)v24 << 8)) << 8)) )
            break;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        UnitAtDirql = 0LL;
        v15 = v12 == (__int64 *)j;
        v4 = a3;
        if ( !v15 )
          UnitAtDirql = v11;
      }
      if ( UnitAtDirql )
        goto LABEL_20;
      v16 = *a1;
      memset(&v22, 0, sizeof(v22));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 192), &v22);
      v17 = (_QWORD *)(v16 + 200);
      v18 = (_QWORD *)*v17;
      if ( (_QWORD *)*v17 == v17 )
        goto LABEL_12;
      do
      {
        v19 = v18 - 7;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)v18 + 10)) | ((((unsigned __int8)*((_DWORD *)v18 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v18 + 10))) << 8)) == (i | ((BYTE1(v24) | ((unsigned __int8)v24 << 8)) << 8)) )
          break;
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != v17 );
      if ( v18 == v17 )
LABEL_12:
        v19 = 0LL;
      KeReleaseInStackQueuedSpinLock(&v22);
      if ( v19 )
LABEL_20:
        *((_BYTE *)v4 + i) = 1;
    }
    return 0LL;
  }
  return result;
}
