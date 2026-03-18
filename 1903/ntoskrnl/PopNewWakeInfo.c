/*
 * XREFs of PopNewWakeInfo @ 0x14059634C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14015E294 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14015E2C8 (PopAcquireWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x140169144 (PopWakeInfoDereference.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

LONG PopNewWakeInfo()
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  LONG result; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x206D654Du);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    *(_DWORD *)(v1 + 16) = 1;
    *(_QWORD *)(v1 + 8) = v1;
    *(_QWORD *)v1 = v1;
    *(_QWORD *)(v1 + 32) = v1 + 24;
    *(_QWORD *)(v1 + 24) = v1 + 24;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v2 = (_QWORD *)PopPendingWakeInfo;
  if ( PopPendingWakeInfo )
  {
    v5 = PopWakeInfoList;
    if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
      goto LABEL_15;
    PopPendingWakeInfo = 0LL;
    ++PopWakeInfoCount;
    *v2 = PopWakeInfoList;
    v2[1] = &PopWakeInfoList;
    *(_QWORD *)(v5 + 8) = v2;
    PopWakeInfoList = (__int64)v2;
  }
  v3 = (_QWORD *)PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo )
  {
    v6 = PopWakeInfoList;
    if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
      goto LABEL_15;
    PopCurrentWakeInfo = 0LL;
    ++PopWakeInfoCount;
    *v3 = PopWakeInfoList;
    v3[1] = &PopWakeInfoList;
    *(_QWORD *)(v6 + 8) = v3;
    PopWakeInfoList = (__int64)v3;
  }
  if ( v1 )
  {
    PopCurrentWakeInfo = v1;
    if ( PopWakeInfoCount == 1 )
    {
      v7 = (_QWORD *)qword_140443F08;
      v8 = *(_QWORD **)(qword_140443F08 + 8);
      if ( *(__int64 **)qword_140443F08 == &PopWakeInfoList && *v8 == qword_140443F08 )
      {
        qword_140443F08 = *(_QWORD *)(qword_140443F08 + 8);
        *v8 = &PopWakeInfoList;
        v7[1] = v7;
        *v7 = v7;
        PopWakeInfoDereference((__int64)v7);
        --PopWakeInfoCount;
        goto LABEL_7;
      }
LABEL_15:
      __fastfail(3u);
    }
  }
LABEL_7:
  PopReleaseWakeSourceSpinLock(&LockHandle);
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
