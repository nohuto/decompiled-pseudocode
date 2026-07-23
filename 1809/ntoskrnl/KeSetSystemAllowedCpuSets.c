/*
 * XREFs of KeSetSystemAllowedCpuSets @ 0x140114A0C
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     RtlWriteAcquireTickLock @ 0x140117AE0 (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x140117B04 (KiValidateCpuSetMasks.c)
 */

__int64 __fastcall KeSetSystemAllowedCpuSets(unsigned int a1, char *a2, int a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // r14d
  int v9; // edi
  unsigned int v10; // r8d
  __int64 *v11; // rdx
  signed __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax

  v3 = a2;
  v4 = a3;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v8 = 20;
    if ( v6 < 0x14 )
      v8 = v6;
    v9 = 0;
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v10 = 0;
    v11 = &KiSystemAllowedCpuSets[v4];
    v12 = (char *)qword_1405426A8 - v3;
    do
    {
      v13 = *(_QWORD *)&v3[v12];
      if ( v10 < v8 )
      {
        v14 = *(_QWORD *)v3;
      }
      else
      {
        v14 = 0LL;
        if ( !(_DWORD)v4 )
          v14 = *(_QWORD *)&v3[v12];
      }
      *v11 = v14;
      if ( (v13 & v14) != v13 )
        v9 = 1;
      ++v10;
      v3 += 8;
      v11 += 2;
    }
    while ( v10 < 0x14 );
    if ( !(_DWORD)v4 )
      KiRestrictedSystemCpuSetsActive = v9;
    LOBYTE(v11) = CurrentIrql;
    ++KiCpuSetSequence;
    KeCpuSetReportParkedProcessors(0LL, v11);
    return 0LL;
  }
  return result;
}
