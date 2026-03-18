/*
 * XREFs of VidSchiCheckNodeTimeout @ 0x1C0069D10
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00C6794 (VidSchiCheckGPUTimeout.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C0024B0C (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C002FCFC (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C002FDB4 (VidSchiSchedulerNodeToDriverNode.c)
 */

__int64 __fastcall VidSchiCheckNodeTimeout(__int64 a1, _QWORD *a2)
{
  __int32 v5; // ecx
  signed __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  signed __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  _QWORD *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _DXGKARG_QUERYENGINESTATUS v23; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(a1 + 440) & 2) == 0 && !*(_DWORD *)(a1 + 2012) && !*(_DWORD *)(a1 + 2016) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 1704) )
        goto LABEL_6;
    }
    else if ( !*(_DWORD *)(a1 + 2856) )
    {
LABEL_6:
      *(_DWORD *)(a1 + 440) &= ~1u;
      return (*(_DWORD *)(a1 + 440) >> 1) & 1;
    }
    v5 = _InterlockedExchange((volatile __int32 *)(a1 + 480), 0);
    if ( (*(_DWORD *)(a1 + 440) & 1) == 0 || v5 )
    {
      if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
        v10 = *(_QWORD *)(a1 + 1712);
      else
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), 0LL, 0LL);
      *(_QWORD *)(a1 + 472) = v10;
      v11 = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(a1 + 440) |= 1u;
      *(_QWORD *)(a1 + 456) = v11;
      *(_QWORD *)(a1 + 448) = v11;
      return (*(_DWORD *)(a1 + 440) >> 1) & 1;
    }
    *(_QWORD *)(a1 + 456) = MEMORY[0xFFFFF78000000320];
    if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
      v6 = *(_QWORD *)(a1 + 1712);
    else
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), 0LL, 0LL);
    v7 = *(_QWORD *)(a1 + 456);
    if ( v6 != *(_QWORD *)(a1 + 472) )
    {
      *(_QWORD *)(a1 + 448) = v7;
      *(_QWORD *)(a1 + 472) = v6;
      return (*(_DWORD *)(a1 + 440) >> 1) & 1;
    }
    v8 = v7 - *(_QWORD *)(a1 + 448);
    v9 = 10000000LL * g_TdrConfig[1];
    if ( v8 * (unsigned __int64)KeQueryTimeIncrement() <= v9 )
      return (*(_DWORD *)(a1 + 440) >> 1) & 1;
    v12 = *(_QWORD *)(a1 + 24);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 308LL) & 0x200) != 0 )
    {
      v13 = __rdtsc();
      v14 = __readmsr(0x400000F6u);
      v15 = *((unsigned int *)KeGetCurrentPrcb() + 17);
      v16 = 10 * (v13 - v14) / v15;
      v17 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v15, 10 * (v13 - v14) % v15);
      v17[3] = v14;
      v17[4] = v13;
      v17[5] = v16;
      WdLogEvent5_WdPresentTokenEvent(v17);
      if ( v14 > v13 || v16 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        return 0LL;
      v12 = *(_QWORD *)(a1 + 24);
    }
    if ( !*(_BYTE *)(v12 + 44)
      || !VidSchiRunningDeviceAllowsLongRunningPackets(a1)
      || (v18 = *(unsigned __int16 *)(a1 + 4),
          v19 = *(_QWORD *)(a1 + 24),
          v23.EngineStatus.Value = 0,
          v23.EngineOrdinal = VidSchiSchedulerNodeToDriverEngine(v19, v18),
          v23.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v21, v20),
          (unsigned int)ADAPTER_RENDER::DdiQueryEngineStatus(*(ADAPTER_RENDER **)(v22 + 8), &v23))
      || (*(_BYTE *)&v23.EngineStatus.0 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 440) |= 2u;
      *(_QWORD *)(a1 + 464) = v8;
      if ( a2 )
        *a2 = *(_QWORD *)(a1 + 448);
      return (*(_DWORD *)(a1 + 440) >> 1) & 1;
    }
    return 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(a1 + 448);
  return 1LL;
}
