/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x1400D1EF0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KiIdleSchedule @ 0x1400D1CD0 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KeUpdateThreadTag @ 0x14013E8F0 (KeUpdateThreadTag.c)
 * Callees:
 *     KiBeginCounterAccumulation @ 0x140295FFC (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 result; // rax
  bool v15; // zf
  __int64 v16; // rax

  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 23488);
  *(_QWORD *)(a1 + 23608) += v7;
  v8 = *(unsigned __int8 *)(a2 + 2);
  if ( (v8 & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 24176);
    v10 = *(_QWORD *)(a1 + 24184);
    if ( !v9 || !v10 )
      goto LABEL_8;
    if ( *(_BYTE *)(v10 + 100) )
    {
      v11 = *(_DWORD *)(v10 + 116);
    }
    else
    {
      v11 = *(_DWORD *)(v10 + 72);
      if ( v11 >= *(_DWORD *)(v9 + 360) )
        v11 = *(_DWORD *)(v9 + 360);
    }
    if ( v11 < 0x4B )
      v12 = v11 / 0x19;
    else
LABEL_8:
      v12 = 3;
    v13 = 2LL * v12 + 2952 + *(unsigned __int8 *)(a1 + 24224);
    *(_QWORD *)(a1 + 8 * v13) += v7;
    v8 = *(unsigned __int8 *)(a2 + 2);
  }
  if ( (v8 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 25016) )
      KiSetVpThreadSystemWork(a1, 0LL);
    v16 = *(_QWORD *)(a2 + 1512);
    if ( v16 )
      *(_BYTE *)(v16 + 64) = 1;
  }
  *(_QWORD *)(a1 + 23488) = v6;
  result = *(unsigned __int8 *)(a2 + 2);
  if ( (result & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 23496) = v6;
    result = *(unsigned __int8 *)(a2 + 2);
  }
  if ( (result & 2) != 0 )
    result = KiBeginCounterAccumulation(a2, 0LL);
  v15 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v15 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !a3 )
    {
      LOBYTE(v8) = 2;
      return HalRequestSoftwareInterrupt(v8);
    }
  }
  return result;
}
