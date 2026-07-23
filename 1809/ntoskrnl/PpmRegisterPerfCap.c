/*
 * XREFs of PpmRegisterPerfCap @ 0x1402DB5A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1401B5D34 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1401B5E28 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1402E1C60 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1402E1DA8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1402E55E4 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x1402E653C (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x140876978 (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 Prcb; // r13
  unsigned int v7; // r10d
  __int64 v8; // rbp
  unsigned int v9; // r9d
  ULONG v10; // r14d
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  int v13; // eax
  unsigned int v15; // [rsp+50h] [rbp+8h]

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v10 = *(_DWORD *)(a1 + 4);
    v15 = v10;
    if ( v10 != -1 )
    {
      Prcb = KeGetPrcb(v10);
      v4 = v10;
      v5 = *(_QWORD *)(Prcb + 24184);
      v8 = *(_QWORD *)(Prcb + 24176);
      goto LABEL_12;
    }
LABEL_30:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return (unsigned int)-1073741811;
  }
  v3 = PpmPerfDomainHead;
  v4 = -1;
  v5 = 0LL;
  v15 = -1;
  Prcb = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_30;
  do
  {
    v7 = *(_DWORD *)(v3 + 200);
    v8 = v3;
    v9 = 0;
    if ( v7 )
    {
      do
      {
        v5 = *(_QWORD *)(v3 + 208) + 136LL * v9;
        if ( *(_BYTE *)(v5 + 16) && *(_DWORD *)(v5 + 20) == *(_DWORD *)(a1 + 4) )
          break;
        ++v9;
      }
      while ( v9 < v7 );
      if ( v5 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  while ( (__int64 *)v3 != &PpmPerfDomainHead );
LABEL_12:
  if ( !v8 || !v5 )
    goto LABEL_30;
  v11 = *(_DWORD *)(a1 + 8);
  v12 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 16);
  v13 = *(_DWORD *)(v5 + 24);
  if ( v13 != v11 )
  {
    if ( v13 == 100 )
    {
      *(_QWORD *)(v5 + 40) = MEMORY[0xFFFFF78000000008];
    }
    else if ( v11 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack(
        (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v5 + 40)) / 0x2710uLL,
        v4);
      *(_QWORD *)(v5 + 40) = 0LL;
    }
    *(_DWORD *)(v5 + 24) = v11;
    if ( *(_BYTE *)(v8 + 207) || !*(_BYTE *)(v5 + 16) )
      PpmEventBiosCapChange(Prcb, v11);
    else
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v8 + 16), *(_DWORD *)(a1 + 4), v11);
    PopDiagTraceProcessorThrottlePerfTrack(100 - v11, v15);
  }
  if ( *(_DWORD *)(v5 + 28) != v12 )
  {
    *(_DWORD *)(v5 + 28) = v12;
    if ( *(_BYTE *)(v8 + 207) || !*(_BYTE *)(v5 + 16) )
      PpmEventThermalCapChange(Prcb, v12);
    else
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v8 + 16), *(_DWORD *)(a1 + 4), v12);
  }
  *(_BYTE *)(v8 + 685) = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v2;
}
