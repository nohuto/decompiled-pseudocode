/*
 * XREFs of KiUpdateThreadCpuSets @ 0x14018CC14
 * Callers:
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CB74 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115718 (KiRescheduleThreadAfterAffinityChange.c)
 */

__int64 __fastcall KiUpdateThreadCpuSets(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  char v6; // bl
  volatile signed __int64 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int64 *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 116);
  v3 = 0LL;
  v12 = 0LL;
  if ( (v2 & 8) == 0 )
  {
    v6 = KiAcquireThreadStateLock(a1, (__int64)&v12, (volatile signed __int32 **)&v13);
    KiComputeThreadAffinity(a1);
    v11 = a2;
    v7 = v13;
    v8 = KiRescheduleThreadAfterAffinityChange(a1, a1 + 576, v6, v12, (__int64)v13, v11);
    KiReleaseThreadStateLock(v9, v12, v7);
    return v12 & -(__int64)(v8 != 0);
  }
  return v3;
}
