/*
 * XREFs of KiIpiSendRequest @ 0x1400ED3F0
 * Callers:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KiIpiSendRequestEx @ 0x1400ED1E0 (KiIpiSendRequestEx.c)
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KiIpiSendRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned int *v8; // rsi
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // ax
  __int64 v11; // r14
  _OWORD *v12; // rax
  int v13; // edi
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  unsigned int v16; // edx
  int v17; // r12d
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rax
  unsigned __int16 v21; // r15
  unsigned __int64 v22; // r10
  _QWORD *v23; // rsi
  int v24; // r11d
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r9
  signed __int64 *v28; // r8
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // r8d
  __int64 *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // rcx
  int v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+24h] [rbp-DCh]
  unsigned int v42; // [rsp+28h] [rbp-D8h]
  unsigned int v43; // [rsp+2Ch] [rbp-D4h]
  unsigned int v44; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v47; // [rsp+50h] [rbp-B0h]
  _DWORD v48[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v49[21]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v50[44]; // [rsp+110h] [rbp+10h] BYREF

  v43 = a2;
  v48[1] = 0;
  v8 = (unsigned int *)a1;
  if ( a2 )
  {
    v48[0] = KeActiveProcessors[0];
    if ( LOWORD(KeActiveProcessors[0]) )
      memmove(v49, qword_1405426A8, 8LL * LOWORD(KeActiveProcessors[0]));
    if ( a2 == 1 )
    {
      v37 = (unsigned int)KiProcessorIndexToNumberMappingTable[v8[9]] >> 6;
      if ( LOWORD(v48[0]) > (unsigned int)v37 )
      {
        v38 = &v49[v37];
        v39 = *v38;
        _bittestandreset64(&v39, KiProcessorIndexToNumberMappingTable[v8[9]] & 0x3F);
        *v38 = v39;
      }
    }
    v11 = a6;
    if ( (a6 & 0x80000000) != 0 )
    {
      LODWORD(v11) = a6 & 0x7FFFFFFF;
      if ( !(unsigned int)KeIsEmptyAffinityEx(&KeSleepingProcessors) )
      {
        v43 = 0;
        KeSubtractAffinityEx(v48, &KeSleepingProcessors, v48);
      }
    }
  }
  else
  {
    v9 = *a3;
    v10 = a3[1];
    LOWORD(v48[0]) = v9;
    HIWORD(v48[0]) = v10;
    if ( v9 )
      memmove(v49, a3 + 4, 8LL * v9);
    v11 = a6;
  }
  v12 = a4;
  v13 = (unsigned __int16)KeNumberNodes;
  v8[2913] = (unsigned __int16)KeNumberNodes;
  v50[0] = 1310721;
  v14 = v11 & 0xF | ((_QWORD)v12 << 16) | ((unsigned __int64)a5 << 8);
  v44 = v8[9];
  v8[2912] = 1;
  memset(&v50[1], 0, 0xA4uLL);
  result = 0LL;
  v40 = 0;
  v41 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v42 = 0;
  v19 = 0;
  if ( v13 )
  {
    do
    {
      v20 = KeNodeBlock[v16];
      v21 = *(_WORD *)(v20 + 144);
      if ( LOWORD(v48[0]) > v21 && (v22 = *(_QWORD *)(v20 + 136) & v49[v21], (v47 = v22) != 0) )
      {
        v23 = 0LL;
        v24 = v21;
        while ( v22 )
        {
LABEL_10:
          _BitScanForward64(&v25, v22);
          v24 = v21;
          v22 &= ~(1LL << v25);
          v26 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v21 + (unsigned __int8)v25];
          v27 = KiProcessorBlock[v26];
          _m_prefetchw((const void *)(v27 + 26944));
          v28 = (signed __int64 *)(v27 + ((v44 + 506LL) << 6));
          _m_prefetchw(v28);
          if ( !v23 )
          {
            v23 = v28 + 7;
            *((_DWORD *)v28 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v47 - ((v47 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v47 - ((v47 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v47 - ((v47 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v47 - ((v47 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v28[6] = (signed __int64)v23;
          if ( v11 == 5 )
          {
            *((_OWORD *)v28 + 1) = *a4;
            *((_OWORD *)v28 + 2) = a4[1];
          }
          v28[1] = v14;
          v29 = *(_QWORD *)(v27 + 26944);
          do
          {
            v30 = v29;
            *v28 = v29;
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 26944), (signed __int64)v28, v29);
          }
          while ( v29 != v30 );
          if ( v29 )
          {
            v18 = 1;
            v40 = 1;
          }
          else
          {
            v17 = 1;
            v31 = (unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6;
            v32 = KiProcessorIndexToNumberMappingTable[v26] & 0x3F;
            if ( LOWORD(v50[0]) <= (unsigned int)v31 )
              LOWORD(v50[0]) = v31 + 1;
            v18 = v40;
            v33 = (__int64 *)&v50[2 * v31 + 2];
            v34 = *v33;
            _bittestandset64(&v34, v32);
            *v33 = v34;
          }
        }
        while ( ++v21 < (unsigned int)(v24 + 1) )
        {
          v22 = *(_QWORD *)(8LL * v21 + 8);
          if ( v22 )
            goto LABEL_10;
        }
        v16 = v42;
        v19 = v41;
      }
      else
      {
        v41 = ++v19;
      }
      result = (unsigned __int16)KeNumberNodes;
      v42 = ++v16;
    }
    while ( v16 < (unsigned __int16)KeNumberNodes );
    v8 = (unsigned int *)a1;
    if ( v19 )
    {
      result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11652), -v19) - v19);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a1 + 11648) = 0;
        return result;
      }
    }
  }
  if ( v11 == 5 || !v18 )
  {
    v35 = v43;
    if ( v43 - 1 <= 1 )
      ++v8[6259];
    else
      ++v8[6260];
    v36 = v48;
    return HalRequestIpi(v35, v36);
  }
  if ( v17 )
  {
    ++v8[6260];
    v36 = v50;
    v35 = 0LL;
    return HalRequestIpi(v35, v36);
  }
  return result;
}
