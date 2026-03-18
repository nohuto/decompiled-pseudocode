/*
 * XREFs of KiIpiSendRequest @ 0x140099C40
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KiIpiSendPacket @ 0x140098DB4 (KiIpiSendPacket.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x14009EC70 (KeSubtractAffinityEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PerfInfoLogIpiSend @ 0x14032FF00 (PerfInfoLogIpiSend.c)
 */

__int64 __fastcall KiIpiSendRequest(__int64 a1, unsigned int a2, unsigned __int16 *a3, _OWORD *a4, __int64 a5)
{
  unsigned int v6; // r15d
  unsigned int *v7; // r14
  unsigned int v9; // r12d
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  __int64 v12; // rsi
  _OWORD *v13; // rbx
  int v14; // edi
  __int64 v15; // rbx
  __int64 result; // rax
  int v17; // r8d
  int v18; // r13d
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // rax
  _QWORD *v22; // r11
  int v23; // r9d
  unsigned __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r8
  signed __int64 *v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  unsigned int v30; // ecx
  char v31; // r8
  __int64 v32; // rcx
  char v33; // al
  __int64 *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  char v38; // [rsp+30h] [rbp-D0h]
  unsigned int v39; // [rsp+34h] [rbp-CCh]
  unsigned int v40; // [rsp+38h] [rbp-C8h]
  int v41; // [rsp+3Ch] [rbp-C4h]
  int v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+44h] [rbp-BCh]
  unsigned int v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v46; // [rsp+60h] [rbp-A0h]
  signed __int64 v47; // [rsp+70h] [rbp-90h]
  unsigned __int64 v49; // [rsp+88h] [rbp-78h]
  _BYTE v51[40]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v52[22]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v53[44]; // [rsp+180h] [rbp+80h] BYREF

  v40 = a2;
  v6 = a2;
  v7 = (unsigned int *)a1;
  memset(v52, 0, 0xA8uLL);
  memset(&v53[2], 0, 0xA0uLL);
  memset(v51, 0, 0x20uLL);
  v9 = 0;
  LODWORD(v47) = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v38 = 1;
    EtwGetKernelTraceTimestamp(v51, 1077936128LL);
  }
  else
  {
    v38 = 0;
  }
  if ( v6 )
  {
    KeCopyAffinityEx(v52, KeActiveProcessors);
    if ( v6 == 1 )
      KeRemoveProcessorAffinityEx(v52, v7[9]);
    v12 = a5;
    if ( (a5 & 0x80000000) != 0 )
    {
      LODWORD(v12) = a5 & 0x7FFFFFFF;
      if ( !(unsigned int)KeIsEmptyAffinityEx(&KeSleepingProcessors) )
      {
        v40 = 0;
        v6 = 0;
        KeSubtractAffinityEx(v52, &KeSleepingProcessors, v52);
      }
    }
  }
  else
  {
    v10 = *a3;
    v11 = a3[1];
    LOWORD(v52[0]) = v10;
    WORD1(v52[0]) = v11;
    HIDWORD(v52[0]) = 0;
    if ( v10 )
      memmove(&v52[1], a3 + 4, 8LL * v10);
    v12 = a5;
  }
  v53[0] = 1310721;
  v13 = a4;
  v14 = (unsigned __int16)KeNumberNodes;
  v15 = v12 & 0xF | ((_QWORD)v13 << 7);
  v7[2913] = (unsigned __int16)KeNumberNodes;
  v44 = v7[9];
  v7[2912] = 1;
  memset(&v53[1], 0, 0xA4uLL);
  v41 = 0;
  v42 = 0;
  result = 0LL;
  v39 = 0;
  v17 = 0;
  v18 = 0;
  v43 = 0;
  if ( v14 )
  {
    do
    {
      v19 = KeNodeBlock[v9];
      v20 = *(_WORD *)(v19 + 144);
      if ( LOWORD(v52[0]) > v20 && (v21 = *(_QWORD *)(v19 + 136) & v52[v20 + 1], (v49 = v21) != 0) )
      {
        v22 = 0LL;
        v46 = v20;
        v23 = v20;
        while ( v21 )
        {
LABEL_12:
          v23 = v46;
          _BitScanForward64(&v24, v21);
          v45 = v21 & ~(1LL << v24);
          v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v46 + (unsigned __int8)v24];
          v26 = KiProcessorBlock[v25];
          _m_prefetchw((const void *)(v26 + 26944));
          v27 = (signed __int64 *)(v26 + ((v44 + 571LL) << 6));
          _m_prefetchw(v27);
          if ( !v22 )
          {
            v22 = v27 + 7;
            *((_DWORD *)v27 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v27[6] = (signed __int64)v22;
          if ( v12 == 5 )
          {
            *((_OWORD *)v27 + 1) = *a4;
            *((_OWORD *)v27 + 2) = a4[1];
            v47 = v27[5];
          }
          v27[1] = v15;
          v28 = *(_QWORD *)(v26 + 26944);
          do
          {
            v29 = v28;
            *v27 = v28;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 26944), (signed __int64)v27, v28);
          }
          while ( v28 != v29 );
          if ( v28 )
          {
            v21 = v45;
            v17 = 1;
            v41 = 1;
          }
          else
          {
            v30 = KiProcessorIndexToNumberMappingTable[v25];
            v31 = v30 & 0x3F;
            v32 = v30 >> 6;
            v39 = 1;
            if ( LOWORD(v53[0]) <= (unsigned int)v32 )
              LOWORD(v53[0]) = v32 + 1;
            v33 = v31;
            v17 = v41;
            v34 = (__int64 *)&v53[2 * v32 + 2];
            v35 = *v34 | (1LL << v33);
            v21 = v45;
            *v34 = v35;
          }
        }
        while ( ++v46 < (unsigned int)(v23 + 1) )
        {
          v21 = *(_QWORD *)(8LL * v46 + 8);
          if ( v21 )
            goto LABEL_12;
        }
        v9 = v43;
        v18 = v42;
      }
      else
      {
        v42 = ++v18;
      }
      v43 = ++v9;
    }
    while ( v9 < (unsigned __int16)KeNumberNodes );
    v7 = (unsigned int *)a1;
    v6 = v40;
    if ( v18 )
    {
      result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11652), -v18) - v18);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a1 + 11648) = 0;
        return result;
      }
    }
    result = v39;
  }
  if ( v12 == 5 || !v17 )
  {
    if ( v6 - 1 <= 1 )
      ++v7[6259];
    else
      ++v7[6260];
    v36 = v52;
    v37 = v6;
    goto LABEL_32;
  }
  if ( (_DWORD)result )
  {
    ++v7[6260];
    v36 = v53;
    v37 = 0LL;
LABEL_32:
    result = HalRequestIpi(v37, v36);
  }
  if ( v38 )
    return PerfInfoLogIpiSend((unsigned int)v51, v12, v47, v6, (__int64)v52);
  return result;
}
