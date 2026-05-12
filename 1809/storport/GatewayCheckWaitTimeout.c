/*
 * XREFs of GatewayCheckWaitTimeout @ 0x1C0021070
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020EF8 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GatewayCheckWaitTimeout(KSPIN_LOCK *SpinLock, int a2, KSPIN_LOCK a3)
{
  PKSPIN_LOCK v4; // rbx
  unsigned int v6; // r14d
  char v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rbp
  ULONGLONG UnbiasedInterruptTime; // r12
  PKSPIN_LOCK v12; // rax
  KSPIN_LOCK v13; // r8
  ULONGLONG v14; // rdx
  KSPIN_LOCK v15; // rcx
  PKSPIN_LOCK *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  PKSPIN_LOCK *v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = SpinLock + 33;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( !*((_DWORD *)SpinLock + 6) || (PKSPIN_LOCK)*v4 == v4 )
    return 0LL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
  v12 = (PKSPIN_LOCK)*v4;
  while ( v12 != v4 )
  {
    v13 = v12[3];
    if ( (*(_BYTE *)(v13 + 450) & 2) == 0 )
    {
      v14 = *(v12 - 2);
      if ( v14 == -1LL || v14 >= UnbiasedInterruptTime )
        break;
    }
    if ( (*(_BYTE *)(v13 + 450) & 2) == 0 && !v7 )
    {
      v9 = *(_QWORD *)(v13 + 24);
      v7 = 1;
      v8 = *((_DWORD *)SpinLock + 6);
    }
    v15 = *v12;
    if ( *(PKSPIN_LOCK *)(*v12 + 8) != v12 )
      goto LABEL_21;
    v16 = (PKSPIN_LOCK *)v12[1];
    if ( *v16 != v12 )
      goto LABEL_21;
    *v16 = (PKSPIN_LOCK)v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = v12[2] + 120;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) == v17 )
    {
      v19 = *(_QWORD **)(v12[2] + 128);
      if ( *v19 == v17 )
      {
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        --*((_DWORD *)SpinLock + 6);
        v20 = *(PKSPIN_LOCK **)(a3 + 8);
        if ( *v20 == (PKSPIN_LOCK)a3 )
          goto LABEL_26;
      }
    }
LABEL_21:
    __fastfail(3u);
LABEL_26:
    *v12 = a3;
    ++v6;
    v12[1] = (KSPIN_LOCK)v20;
    *v20 = v12;
    *(_QWORD *)(a3 + 8) = v12;
    v12 = (PKSPIN_LOCK)*v4;
    if ( v6 == a2 )
      break;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v7 )
  {
    if ( v8 > *(_DWORD *)(v9 + 5512) )
      *(_DWORD *)(v9 + 5512) = v8;
  }
  return v6;
}
