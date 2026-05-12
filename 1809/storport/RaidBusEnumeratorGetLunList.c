/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x1C00183A0
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0018288 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0025C50 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006EF4 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00180F8 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00185DC (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0018748 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00191AC (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v4; // r14
  __int64 result; // rax
  int v7; // edi
  unsigned __int8 i; // bl
  __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 *v13; // r14
  __int64 UnitAtDirql; // rsi
  bool v15; // zf
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // r8
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  KIRQL v21; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v24[96]; // [rsp+50h] [rbp-98h] BYREF
  int v25; // [rsp+F0h] [rbp+8h]

  v4 = a3;
  memset(v24, 0, sizeof(v24));
  result = RaidBusEnumeratorGetUnit(a1, a2, v24);
  if ( (int)result >= 0 )
  {
    if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, v24, v4) < 0 )
    {
      v7 = RaidBusEnumeratorProbeLunZero(a1, a2);
      memset(v4, 0, 0xFFuLL);
      if ( v7 >= 0 )
        *v4 = 0x101010101010101LL;
    }
    RaidBusEnumeratorReleaseUnit(a1, v24);
    v25 = a2;
    for ( i = 0; i != 0xFF; ++i )
    {
      BYTE2(v25) = i;
      v9 = *(_QWORD *)a1;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        v20 = *(_QWORD *)a1;
        if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v9 + 696) )
        {
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v20, v25);
        }
        else
        {
          v21 = RaidAdapterAcquireInterruptLock(v20);
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v9, v25);
          RaidAdapterReleaseInterruptLock(v9, v21);
        }
      }
      else
      {
        v11 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 128), &LockHandle);
        v12 = v9 + 136;
        v13 = *(__int64 **)(v9 + 136);
        if ( v13 != (__int64 *)(v9 + 136) )
        {
          do
          {
            v11 = (__int64)(v13 - 7);
            if ( ((unsigned __int8)BYTE2(*((_DWORD *)v13 + 10)) | ((((unsigned __int8)*((_DWORD *)v13 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v13 + 10))) << 8)) == (i | ((BYTE1(v25) | ((unsigned __int8)v25 << 8)) << 8)) )
              break;
            v13 = (__int64 *)*v13;
          }
          while ( v13 != (__int64 *)v12 );
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        UnitAtDirql = 0LL;
        v15 = v13 == (__int64 *)v12;
        v4 = a3;
        if ( !v15 )
          UnitAtDirql = v11;
      }
      if ( UnitAtDirql )
        goto LABEL_20;
      v16 = *(_QWORD *)a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)a1 + 208LL), &v23);
      v17 = (_QWORD *)(v16 + 216);
      v18 = (_QWORD *)*v17;
      if ( (_QWORD *)*v17 == v17 )
        goto LABEL_12;
      do
      {
        v19 = v18 - 7;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)v18 + 10)) | ((((unsigned __int8)*((_DWORD *)v18 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v18 + 10))) << 8)) == (i | ((BYTE1(v25) | ((unsigned __int8)v25 << 8)) << 8)) )
          break;
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != v17 );
      if ( v18 == v17 )
LABEL_12:
        v19 = 0LL;
      KeReleaseInStackQueuedSpinLock(&v23);
      if ( v19 )
LABEL_20:
        *((_BYTE *)v4 + i) = 1;
    }
    return 0LL;
  }
  return result;
}
