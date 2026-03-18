/*
 * XREFs of EtwpLogContextSwapEvent @ 0x140147860
 * Callers:
 *     EtwTraceContextSwap @ 0x140147750 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x1400C9A50 (EtwpReleaseTraceBuffer.c)
 *     EtwpCCSwapTrace @ 0x1401479D0 (EtwpCCSwapTrace.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     EtwpStackTraceDispatcher @ 0x14032CC1C (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x14032F170 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14032F204 (EtwpReserveWithPmcCounters.c)
 *     EtwpTraceLastBranchRecord @ 0x1403362E4 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1403364D8 (EtwpTraceProcessorTrace.c)
 */

char __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // r14d
  bool v6; // zf
  __int64 v7; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  signed __int64 v30[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 4224);
  LOBYTE(v4) = 0;
  v5 = 0;
  memset(v30, 0, 24);
  v6 = !_BitScanForward((unsigned int *)&v7, v3);
  v31 = 0LL;
  while ( !v6 )
  {
    v3 &= v3 - 1;
    v4 = 32LL * (unsigned int)v7;
    v11 = v4 + a1 + 4260;
    if ( !v11 )
      goto LABEL_14;
    LODWORD(v4) = *(_DWORD *)(v11 + 4);
    if ( (v4 & 4) == 0 )
      goto LABEL_14;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 2 * v7 + 4208);
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
    {
      v12 = 1LL;
    }
    else
    {
      _mm_lfence();
      v4 = *(_QWORD *)(a1 + 456);
      v12 = *(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(a1 + 2 * v7 + 4208));
    }
    if ( (v12 & 1) != 0 )
      goto LABEL_14;
    if ( (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
    {
      v13 = 1 << *(_DWORD *)(v12 + 216);
      LOBYTE(v4) = ~(_BYTE)v5;
      if ( (~v5 & v13) != 0 )
      {
        v14 = (*(__int64 (**)(void))(v12 + 40))();
        v15 = *(unsigned int *)(v12 + 216);
        v31 = v14;
        LOBYTE(v4) = EtwpCCSwapTrace(a2, a3, v15, &v31);
        v5 |= v13;
      }
LABEL_10:
      if ( a3 )
      {
        v16 = *(_DWORD *)(v12 + 832);
        if ( (v16 & 0x80u) != 0 )
        {
          LOBYTE(v4) = _bittest((const signed __int32 *)(*(_QWORD *)(v12 + 984) + 164LL), 4u);
          if ( (_BYTE)v4 )
          {
            LOBYTE(v4) = EtwpStackTraceDispatcher(v12, &v31, a3, 4217348LL);
            v16 = *(_DWORD *)(v12 + 832);
          }
        }
        if ( (v16 & 0x8000) != 0 )
        {
          v4 = *(_QWORD *)(v12 + 1008);
          v25 = 0LL;
          if ( *(_DWORD *)(v4 + 8) )
          {
            while ( 1 )
            {
              v26 = *(_QWORD *)(v12 + 1008);
              if ( *(_WORD *)(v26 + 2 * v25 + 12) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v26 + 8);
              v25 = (unsigned int)(v25 + 1);
              if ( (unsigned int)v25 >= (unsigned int)v4 )
                goto LABEL_13;
            }
            LOBYTE(v4) = EtwpTraceLastBranchRecord(v12, &v31, a3, 4217348LL);
          }
        }
LABEL_13:
        if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 )
        {
          v4 = *(_QWORD *)(v12 + 1016);
          v27 = 0LL;
          if ( *(_DWORD *)(v4 + 24) )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v12 + 1016);
              if ( *(_WORD *)(v28 + 2 * v27 + 28) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v28 + 24);
              v27 = (unsigned int)(v27 + 1);
              if ( (unsigned int)v27 >= (unsigned int)v4 )
                goto LABEL_14;
            }
            LOBYTE(v4) = EtwpTraceProcessorTrace(v12, &v31, a3, 4217348LL);
          }
        }
      }
      goto LABEL_14;
    }
    v17 = *(_DWORD *)(v12 + 832);
    if ( (v17 & 0xC00) == 0 )
      goto LABEL_24;
    if ( (v17 & 0x400) != 0 )
    {
      v4 = EtwpReserveWithPebsIndex(v12, 1316, 24, (unsigned int)v30, (__int64)&v31, 4217348);
      v18 = v4;
      goto LABEL_26;
    }
    if ( (v17 & 0x800) != 0 && (v19 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 1000) + 8LL)) )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v12 + 1000);
        if ( *(_WORD *)(v20 + 2 * v19 + 12) == 1316 )
          break;
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= *(_DWORD *)(v20 + 8) )
          goto LABEL_24;
      }
      v4 = EtwpReserveWithPmcCounters(v12, 1316, 24, (unsigned int)v30, (__int64)&v31, 4217348);
      v18 = v4;
    }
    else
    {
LABEL_24:
      v4 = EtwpReserveTraceBuffer((unsigned int *)v12, 0x28u, (__int64)v30, &v31, 23044);
      if ( !v4 )
        goto LABEL_14;
      v18 = v4 + 16;
      *(_QWORD *)(v4 + 8) = v31;
      *(_DWORD *)v4 = -1072627708;
      *(_DWORD *)(v4 + 4) = 86245416;
    }
LABEL_26:
    if ( v18 )
    {
      *(_QWORD *)v18 = 0LL;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      if ( a2 )
      {
        *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 1616);
        *(_BYTE *)(v18 + 9) = *(_BYTE *)(a2 + 195);
        *(_BYTE *)(v18 + 12) = *(_BYTE *)(a2 + 643);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ *(_BYTE *)(a2 + 391)) & 1;
        *(_BYTE *)(v18 + 14) = *(_BYTE *)(a2 + 388);
        *(_BYTE *)(v18 + 15) = *(_BYTE *)(a2 + 588);
        *(_BYTE *)(v18 + 13) = *(_BYTE *)(v18 + 13) & 0xF1 | (2 * (*(_BYTE *)(a2 + 120) & 3));
        *(_DWORD *)(v18 + 20) = (*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_KTHREAD *)a2 == CurrentPrcb->IdleThread )
        {
          IdleStates = CurrentPrcb->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v18 + 10) = IdleStates->ActualState;
        }
        else
        {
          v23 = *(_QWORD *)(a2 + 104);
          if ( v23 )
          {
            v24 = v23 + CurrentPrcb->ScbOffset;
            while ( 1 )
            {
              LODWORD(v23) = *(_DWORD *)(v24 + 116);
              if ( (unsigned int)v23 > 0xFF )
                break;
              if ( !(_BYTE)v23 )
              {
                v24 = *(_QWORD *)(v24 + 408);
                if ( v24 )
                  continue;
              }
              goto LABEL_39;
            }
            LOBYTE(v23) = -1;
          }
LABEL_39:
          *(_BYTE *)(v18 + 10) = v23;
        }
      }
      if ( a3 )
      {
        *(_DWORD *)v18 = *(_DWORD *)(a3 + 1616);
        *(_BYTE *)(v18 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(a3 + 564);
        *(_BYTE *)(v18 + 13) = *(_BYTE *)(v18 + 13) & 0x8F | (16 * (*(_BYTE *)(a3 + 120) & 3));
        *(_DWORD *)(v18 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
      }
      LOBYTE(v4) = EtwpReleaseTraceBuffer(v30);
      goto LABEL_10;
    }
LABEL_14:
    v6 = !_BitScanForward((unsigned int *)&v7, v3);
  }
  return v4;
}
