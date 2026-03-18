/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x14075A818
 * Callers:
 *     PopNewProcessorCallback @ 0x1408A21D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x14018B908 (PpmHvUseNativeAlgorithms.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  bool v0; // di
  __int64 v1; // rsi
  SIZE_T v2; // r14
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi

  v0 = 0;
  v1 = 1LL;
  if ( !PpmHvUseNativeAlgorithms() )
    v0 = (HvlEnlightenments & 0x200) != 0;
  v2 = 32 * ((unsigned int)v0 + 1) + 120;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x694D5050u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v2);
    *(_BYTE *)(v4 + 19) = 1;
    *(_DWORD *)(v4 + 116) = v0 + 1;
    *(_DWORD *)(v4 + 120) = *(_DWORD *)(v4 + 120) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 136), L"HLT");
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 80) = PpmIdleDefaultExecute;
    *(_QWORD *)(v4 + 88) = xHalTimerWatchdogStop;
    *(_QWORD *)(v4 + 96) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v4 + 104) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v0 )
    {
      *(_QWORD *)(v4 + 40) = PpmIdleGuestPreselect;
      *(_QWORD *)(v4 + 48) = PpmIdleGuestTest;
      *(_QWORD *)(v4 + 64) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v4 + 80) = PpmIdleGuestExecute;
      *(_QWORD *)(v4 + 88) = PpmIdleGuestComplete;
      *(_DWORD *)(v4 + 152) = *(_DWORD *)(v4 + 152) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v4 + 168), L"Enlightened Idle");
      v1 = 2LL;
    }
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    v5 = PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v4, v1);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v4, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
