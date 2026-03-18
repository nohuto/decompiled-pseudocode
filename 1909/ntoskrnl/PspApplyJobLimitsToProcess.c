/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x140687CF4
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1406874E8 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetJobLimitsProcessCallback @ 0x1408C7B60 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x1400E901C (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x1400E9704 (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x1400EAAAC (KeSetDisableQuantumProcess.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140613614 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1406136C0 (PspLockJobMemoryLimitsShared.c)
 *     PspWritePebAffinityInfo @ 0x140680874 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6858 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspApplyJobLimitsToProcess(__int64 a1, __int16 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  bool v8; // zf
  int v9; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 952);
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v4 + 848) & 0x20) != 0 )
  {
    v8 = *(_BYTE *)(a1 + 1466) == 2;
    *(_BYTE *)(a1 + 1119) = *(_BYTE *)(v4 + 872);
    PspSetProcessPriorityByClass(a1, v8);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v4 + 848) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, 1, (int)v4 + 616, 0, (__int64)&v9) >= 0
    && v9 )
  {
    PspWritePebAffinityInfo((__int64)CurrentThread, a1);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v4, (__int64)CurrentThread);
    if ( (*(_DWORD *)(v4 + 848) & 0x100) != 0 )
      v6 = *(_QWORD *)(v4 + 808);
    else
      v6 = 0LL;
    *(_QWORD *)(a1 + 1256) = v6;
    PspUnlockJobMemoryLimitsShared(v4, (__int64)CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1119) != 1 )
  {
    v7 = *(_DWORD *)(v4 + 852);
    if ( v7 >= 0xA )
      v7 = *(_DWORD *)(v4 + 484);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v7));
    KeSetDisableQuantumProcess(a1, v7 == 9);
  }
}
