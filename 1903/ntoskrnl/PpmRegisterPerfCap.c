/*
 * XREFs of PpmRegisterPerfCap @ 0x14016FE50
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14016FFA0 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14017003C (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1401700B4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140302178 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140302280 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventThermalCapChange @ 0x140302FD8 (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x14072C06C (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG v3; // r14d
  __int64 v4; // rdx
  __int64 Prcb; // r13
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  unsigned int v15; // [rsp+50h] [rbp+8h]

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v15 = v3;
    if ( v3 != -1 )
    {
      Prcb = KeGetPrcb(v3);
      v6 = v3;
      v7 = *(_QWORD *)(Prcb + 24184);
      v8 = *(_QWORD *)(Prcb + 24176);
      goto LABEL_4;
    }
LABEL_31:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return (unsigned int)-1073741811;
  }
  v4 = PpmPerfDomainHead;
  v6 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v15 = -1;
  Prcb = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_31;
  do
  {
    v13 = *(_DWORD *)(v4 + 200);
    v8 = v4;
    v14 = 0;
    if ( v13 )
    {
      do
      {
        v7 = *(_QWORD *)(v4 + 208) + 136LL * v14;
        if ( *(_BYTE *)(v7 + 16) && *(_DWORD *)(v7 + 20) == *(_DWORD *)(a1 + 4) )
          break;
        ++v14;
      }
      while ( v14 < v13 );
      if ( v7 )
        break;
    }
    v4 = *(_QWORD *)v4;
  }
  while ( (__int64 *)v4 != &PpmPerfDomainHead );
LABEL_4:
  if ( !v8 || !v7 )
    goto LABEL_31;
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 16);
  v11 = *(_DWORD *)(v7 + 24);
  if ( v11 != v9 )
  {
    if ( v11 == 100 )
    {
      *(_QWORD *)(v7 + 40) = MEMORY[0xFFFFF78000000008];
    }
    else if ( v9 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack(
        (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v7 + 40)) / 0x2710uLL,
        (unsigned int)v6);
      *(_QWORD *)(v7 + 40) = 0LL;
    }
    *(_DWORD *)(v7 + 24) = v9;
    if ( !*(_BYTE *)(v8 + 207) && *(_BYTE *)(v7 + 16) )
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v8 + 16), *(unsigned int *)(a1 + 4), v9);
    else
      PpmEventBiosCapChange(Prcb, v9, v6);
    PopDiagTraceProcessorThrottlePerfTrack(100 - v9, v15);
  }
  if ( *(_DWORD *)(v7 + 28) != v10 )
  {
    *(_DWORD *)(v7 + 28) = v10;
    if ( *(_BYTE *)(v8 + 207) || !*(_BYTE *)(v7 + 16) )
      PpmEventThermalCapChange(Prcb, v10, v6);
    else
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v8 + 16), *(unsigned int *)(a1 + 4), v10);
  }
  *(_BYTE *)(v8 + 685) = 1;
  PpmCheckApplyPerfConstraints(0LL, v4, v6);
  return v2;
}
