/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x140605550
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140604EB0 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetJobLimitsProcessCallback @ 0x14088B590 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x14008F998 (KeSetDisableQuantumProcess.c)
 *     PspSetProcessPriorityByClass @ 0x1400D7A5C (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x1400D8144 (KeSetQuantumProcess.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405FF2B4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405FF360 (PspLockJobMemoryLimitsShared.c)
 *     PspWritePebAffinityInfo @ 0x14066DFD0 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x14088A2B4 (PspSetProcessAffinitySafe.c)
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
  v4 = *(_QWORD *)(a1 + 944);
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
    PspWritePebAffinityInfo(CurrentThread, a1);
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
