/*
 * XREFs of EtwpLogContextSwapEvent @ 0x14017CB50
 * Callers:
 *     EtwTraceContextSwap @ 0x14017CA40 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140113908 (EtwpReleaseTraceBuffer.c)
 *     EtwpCCSwapTrace @ 0x14017CCA0 (EtwpCCSwapTrace.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwpStackTraceDispatcher @ 0x14030F70C (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x1403117C8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14031185C (EtwpReserveWithPmcCounters.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x14031822C (EtwpTraceProcessorTrace.c)
 */

__int64 __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // esi
  int v5; // r14d
  __int64 v6; // rdi
  bool i; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
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
  signed __int64 v29[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v31; // [rsp+80h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_DWORD *)(a1 + 4224);
  v5 = 0;
  v6 = a1;
  for ( i = !_BitScanForward((unsigned int *)&a1, v4); !i; i = !_BitScanForward((unsigned int *)&a1, v4) )
  {
    v10 = (unsigned int)a1;
    v4 &= v4 - 1;
    result = 32LL * (unsigned int)a1;
    v11 = result + v6 + 4260;
    if ( !v11 )
      continue;
    result = *(unsigned int *)(v11 + 4);
    if ( (result & 4) == 0 )
      continue;
    result = *(unsigned __int8 *)(v6 + 2 * v10 + 4208);
    if ( (unsigned int)result >= *(_DWORD *)(v6 + 16) )
    {
      v12 = 1LL;
    }
    else
    {
      _mm_lfence();
      v12 = *(_QWORD *)(*(_QWORD *)(v6 + 456) + 8 * result);
    }
    if ( (v12 & 1) != 0 )
      continue;
    if ( (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
    {
      v13 = 1 << *(_DWORD *)(v12 + 216);
      result = (unsigned int)~v5;
      if ( ((unsigned int)result & v13) != 0 )
      {
        v14 = (*(__int64 (**)(void))(v12 + 40))();
        v15 = *(unsigned int *)(v12 + 216);
        v31 = v14;
        result = EtwpCCSwapTrace(a2, a3, v15, &v31);
        v5 |= v13;
      }
LABEL_10:
      if ( a3 )
      {
        v16 = *(_DWORD *)(v12 + 832);
        if ( (v16 & 0x80u) != 0 )
        {
          result = *(_QWORD *)(v12 + 984);
          if ( _bittest((const signed __int32 *)(result + 164), 4u) )
          {
            result = EtwpStackTraceDispatcher(v12, &v31, a3, 4217348LL);
            v16 = *(_DWORD *)(v12 + 832);
          }
        }
        if ( (v16 & 0x8000) != 0 )
        {
          result = *(_QWORD *)(v12 + 1008);
          v25 = 0LL;
          if ( *(_DWORD *)(result + 8) )
          {
            while ( 1 )
            {
              v26 = *(_QWORD *)(v12 + 1008);
              if ( *(_WORD *)(v26 + 2 * v25 + 12) == 1316 )
                break;
              result = *(unsigned int *)(v26 + 8);
              v25 = (unsigned int)(v25 + 1);
              if ( (unsigned int)v25 >= (unsigned int)result )
                goto LABEL_13;
            }
            result = EtwpTraceLastBranchRecord(v12, &v31, a3, 4217348LL);
          }
        }
LABEL_13:
        if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 )
        {
          result = *(_QWORD *)(v12 + 1016);
          v27 = 0LL;
          if ( *(_DWORD *)(result + 24) )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v12 + 1016);
              if ( *(_WORD *)(v28 + 2 * v27 + 28) == 1316 )
                break;
              result = *(unsigned int *)(v28 + 24);
              v27 = (unsigned int)(v27 + 1);
              if ( (unsigned int)v27 >= (unsigned int)result )
                goto LABEL_14;
            }
            result = EtwpTraceProcessorTrace(v12, &v31, a3, 4217348LL);
          }
        }
      }
      continue;
    }
    v17 = *(_DWORD *)(v12 + 832);
    if ( (v17 & 0xC00) == 0 )
      goto LABEL_24;
    if ( (v17 & 0x400) != 0 )
    {
      result = EtwpReserveWithPebsIndex(v12, 1316, 24, (unsigned int)v29, (__int64)&v31, 4217348);
      v18 = result;
      goto LABEL_26;
    }
    if ( (v17 & 0x800) != 0 && (v19 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 1000) + 32LL)) )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v12 + 1000);
        if ( *(_WORD *)(v20 + 2 * v19 + 36) == 1316 )
          break;
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= *(_DWORD *)(v20 + 32) )
          goto LABEL_24;
      }
      result = EtwpReserveWithPmcCounters(v12, 1316, 24, (unsigned int)v29, (__int64)&v31, 4217348);
      v18 = result;
    }
    else
    {
LABEL_24:
      result = EtwpReserveTraceBuffer((unsigned int *)v12, 0x28u, (__int64)v29, &v31, 23044);
      if ( !result )
        continue;
      v18 = result + 16;
      *(_QWORD *)(result + 8) = v31;
      *(_DWORD *)result = -1072627708;
      *(_DWORD *)(result + 4) = 86245416;
    }
LABEL_26:
    if ( v18 )
    {
      *(_QWORD *)v18 = 0LL;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      if ( a2 )
      {
        *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 1600);
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
        *(_DWORD *)v18 = *(_DWORD *)(a3 + 1600);
        *(_BYTE *)(v18 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(a3 + 564);
        *(_BYTE *)(v18 + 13) = *(_BYTE *)(v18 + 13) & 0x8F | (16 * (*(_BYTE *)(a3 + 120) & 3));
        *(_DWORD *)(v18 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
      }
      result = EtwpReleaseTraceBuffer(v29);
      goto LABEL_10;
    }
LABEL_14:
    ;
  }
  return result;
}
