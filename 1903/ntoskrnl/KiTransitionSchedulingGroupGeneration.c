/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140014880
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x140014610 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x140014B30 (KiChargeSchedulingGroupCycleTime.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E4D74 (KiAddThreadToPrcbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400E8EEC (KiInsertNonMaxOverQuotaScb.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, char a3)
{
  char v4; // r15
  unsigned __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned __int64 result; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // r8
  volatile signed __int32 *v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // esi
  char IsThreadRankNonZero; // al
  char v20; // dl
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  _QWORD *v28; // r15
  int v29; // r10d
  __int64 v30; // r10
  __int64 v31; // rax
  char v32; // cl
  unsigned __int64 v33; // [rsp+30h] [rbp-68h]
  _QWORD *v34; // [rsp+38h] [rbp-60h]
  char v35; // [rsp+A0h] [rbp+8h]
  char v36; // [rsp+A8h] [rbp+10h] BYREF
  char v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v37 = a3;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 23520);
  v6 = 1;
  if ( a2 > v5 )
    v6 = (a2 - 1 + (unsigned int)KiGenerationTicks - v5) / (unsigned int)KiGenerationTicks + 1;
  *(_QWORD *)(a1 + 23520) = KiGenerationEndTick;
  *(_QWORD *)(a1 + 22896) = 0LL;
  *(_QWORD *)(a1 + 22904) = 0LL;
  result = *(_QWORD *)(a1 + 16);
  v35 = 0;
  v33 = result;
  if ( !result )
  {
    result = *(_QWORD *)(a1 + 8);
    v33 = result;
  }
  v8 = *(_QWORD **)(result + 104);
  v34 = v8;
  if ( v8 )
  {
    result = *(unsigned int *)(a1 + 216);
    v8 = (_QWORD *)((char *)v8 + result);
    v34 = v8;
  }
  v9 = *(_QWORD **)(a1 + 24328);
  if ( v9 == (_QWORD *)(a1 + 24328) )
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 23449) )
    {
      v31 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 23449) = 0;
      v32 = KiProcessorIndexToNumberMappingTable[v31];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v31] >> 6;
      _InterlockedAnd64(&qword_14042A1A8[result], ~(1LL << (v32 & 0x3F)));
    }
    return result;
  }
  LOBYTE(result) = v6;
  do
  {
    v10 = v9 - 9;
    if ( v6 >= 0x40 )
      v11 = 0LL;
    else
      v11 = v10[6] << result;
    v12 = v11 | 1;
    if ( (v10[14] & 4) == 0 )
      v12 = v11;
    v10[6] = v12;
    v13 = (__int64)v10 - *(unsigned int *)(a1 + 216);
    KiChargeSchedulingGroupCycleTime(v13, v9 - 9);
    if ( !v4 )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( (v10[14] & 0x10) == 0 )
        {
          v22 = *(_QWORD *)(v13 + 40);
          v23 = v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 48), v22);
          v24 = *(_QWORD *)(v13 + 40);
          if ( v23 > v24 )
            _InterlockedExchange64((volatile __int64 *)(v13 + 48), v24);
        }
      }
    }
    if ( v10[1] != v10[2] )
    {
      v14 = (unsigned int)KiGroupSchedulingNumerator * (*v10 >> 10)
          + ((v10[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
      v10[4] = v14;
    }
    v15 = (volatile signed __int32 *)v10[15];
    *v10 = 0LL;
    v10[5] = 0LL;
    if ( v15 )
    {
      v16 = ((*((unsigned __int8 *)v10 + 112) >> 3) & 1) - *((_DWORD *)v10 + 29);
      if ( (int)(v16 + _InterlockedExchangeAdd(v15, v16)) < 0 )
        *(_DWORD *)v10[15] = 0;
    }
    v17 = *((unsigned __int8 *)v10 + 112);
    v10[3] = 0LL;
    *((_BYTE *)v10 + 112) = v17 & 0xFC;
    *((_DWORD *)v10 + 29) = (v17 >> 3) & 1;
    v10[11] = 0LL;
    v10[12] = 0LL;
    v10[13] = 0LL;
    v10[49] = 0LL;
    v10[50] = 0LL;
    if ( !*((_DWORD *)v10 + 29) )
    {
      *((_BYTE *)v10 + 112) &= ~4u;
      if ( v10 == v8 )
      {
        if ( (*(_BYTE *)(v33 + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(v33, a1), v20 = 1, !IsThreadRankNonZero) )
        {
          v20 = *(_BYTE *)(v33 + 195);
        }
        **(_BYTE **)(a1 + 56) = v20;
        v21 = *(_QWORD *)(a1 + 25016);
        if ( v21 )
        {
          if ( v33 == *(_QWORD *)(a1 + 24) )
            v25 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v25 = (unsigned int)v20;
          KiSetSchedulerAssistPriority(v21, v25, 0LL);
        }
      }
LABEL_22:
      v18 = *((unsigned __int16 *)v10 + 57);
      if ( *((_WORD *)v10 + 57) )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v26, v18);
          v18 ^= 1 << v26;
          v38 = v26;
          v27 = (__int64)&v10[2 * v26 + 17];
          v28 = *(_QWORD **)v27;
          do
          {
            *((_DWORD *)v28 - 25) &= ~0x2000u;
            v29 = (_DWORD)v28 - 216;
            v28[160] = 0LL;
            v28 = (_QWORD *)*v28;
            KiGetThreadEffectiveRankNonZero(v29, (_DWORD)v9 - 72, v14, 0, (__int64)&v36);
            KiAddThreadToPrcbQueue(a1, v30, *(char *)(v30 + 195), 0, v36);
          }
          while ( v28 != (_QWORD *)v27 );
          *(_QWORD *)(v27 + 8) = v27;
          *(_QWORD *)v27 = v27;
        }
        while ( v18 );
        v8 = v34;
        v4 = v37;
      }
      *((_WORD *)v10 + 57) = 0;
      goto LABEL_24;
    }
    if ( v4 )
      goto LABEL_22;
    if ( *((_WORD *)v10 + 57) )
    {
      KiInsertNonMaxOverQuotaScb(v9 - 9, a1, 0LL);
      v35 = 1;
    }
LABEL_24:
    v9 = (_QWORD *)*v9;
    result = v6;
  }
  while ( v9 != (_QWORD *)(a1 + 24328) );
  if ( !v35 )
    goto LABEL_26;
  return result;
}
