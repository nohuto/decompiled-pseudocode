/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x140012EE0
 * Callers:
 *     KiIdleSchedule @ 0x140012CB0 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140013E40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140015500 (KiGroupSchedulingGenerationEnd.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 * Callees:
 *     KiBeginCounterAccumulation @ 0x1402AC33C (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x1402B04D0 (KiSetVpThreadSystemWork.c)
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
  __int64 result; // rax
  bool v14; // zf
  __int64 v15; // rax

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
    *(_QWORD *)(a1 + 8 * (2LL * v12 + 2952 + *(unsigned __int8 *)(a1 + 24224))) += v7;
    v8 = *(unsigned __int8 *)(a2 + 2);
  }
  if ( (v8 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 25016) )
      KiSetVpThreadSystemWork(a1, 0LL);
    v15 = *(_QWORD *)(a2 + 1520);
    if ( v15 )
      *(_BYTE *)(v15 + 64) = 1;
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
  v14 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v14 )
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
