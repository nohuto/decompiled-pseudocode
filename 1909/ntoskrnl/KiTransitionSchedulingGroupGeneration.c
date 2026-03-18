/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140015770
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x140015500 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140015A20 (KiChargeSchedulingGroupCycleTime.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E9D14 (KiAddThreadToPrcbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x140115B5C (KiInsertNonMaxOverQuotaScb.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(struct _KPRCB *a1, unsigned __int64 a2, char a3)
{
  char v4; // r15
  unsigned __int64 GenerationTarget; // rcx
  unsigned int v6; // r12d
  unsigned __int64 result; // rax
  _QWORD *v8; // r14
  _LIST_ENTRY *Flink; // rdi
  _QWORD *p_Blink; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  volatile signed __int32 *v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // esi
  bool IsThreadRankNonZero; // al
  char v20; // dl
  void *SchedulerAssist; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  _QWORD *v28; // r15
  __int64 v29; // r10
  __int64 v30; // r10
  __int64 Number; // rax
  char v32; // cl
  __int64 v33; // [rsp+30h] [rbp-68h]
  _QWORD *v34; // [rsp+38h] [rbp-60h]
  char v35; // [rsp+A0h] [rbp+8h]
  char v36; // [rsp+A8h] [rbp+10h] BYREF
  char v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v37 = a3;
  v4 = a3;
  GenerationTarget = a1->GenerationTarget;
  v6 = 1;
  if ( a2 > GenerationTarget )
    v6 = (a2 - 1 + (unsigned int)KiGenerationTicks - GenerationTarget) / (unsigned int)KiGenerationTicks + 1;
  a1->GenerationTarget = KiGenerationEndTick;
  a1->ScbQueue.Root = 0LL;
  a1->ScbQueue.Min = 0LL;
  result = (unsigned __int64)a1->NextThread;
  v35 = 0;
  v33 = result;
  if ( !result )
  {
    result = (unsigned __int64)a1->CurrentThread;
    v33 = result;
  }
  v8 = *(_QWORD **)(result + 104);
  v34 = v8;
  if ( v8 )
  {
    result = a1->ScbOffset;
    v8 = (_QWORD *)((char *)v8 + result);
    v34 = v8;
  }
  Flink = a1->ScbList.Flink;
  if ( Flink == &a1->ScbList )
  {
LABEL_26:
    if ( a1->GroupSchedulingOverQuota )
    {
      Number = a1->Number;
      a1->GroupSchedulingOverQuota = 0;
      v32 = KiProcessorIndexToNumberMappingTable[Number];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_14042A1B8[result], ~(1LL << (v32 & 0x3F)));
    }
    return result;
  }
  LOBYTE(result) = v6;
  do
  {
    p_Blink = &Flink[-5].Blink;
    if ( v6 >= 0x40 )
      v11 = 0LL;
    else
      v11 = p_Blink[6] << result;
    v12 = v11 | 1;
    if ( (p_Blink[14] & 4) == 0 )
      v12 = v11;
    p_Blink[6] = v12;
    v13 = (__int64)p_Blink - a1->ScbOffset;
    KiChargeSchedulingGroupCycleTime(v13, &Flink[-5].Blink);
    if ( !v4 )
    {
      if ( a1->ClockOwner )
      {
        if ( (p_Blink[14] & 0x10) == 0 )
        {
          v22 = *(_QWORD *)(v13 + 40);
          v23 = v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 48), v22);
          v24 = *(_QWORD *)(v13 + 40);
          if ( v23 > v24 )
            _InterlockedExchange64((volatile __int64 *)(v13 + 48), v24);
        }
      }
    }
    if ( p_Blink[1] != p_Blink[2] )
    {
      v14 = (unsigned int)KiGroupSchedulingNumerator * (*p_Blink >> 10)
          + ((p_Blink[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
      p_Blink[4] = v14;
    }
    v15 = (volatile signed __int32 *)p_Blink[15];
    *p_Blink = 0LL;
    p_Blink[5] = 0LL;
    if ( v15 )
    {
      v16 = ((*((unsigned __int8 *)p_Blink + 112) >> 3) & 1) - *((_DWORD *)p_Blink + 29);
      if ( (int)(v16 + _InterlockedExchangeAdd(v15, v16)) < 0 )
        *(_DWORD *)p_Blink[15] = 0;
    }
    v17 = *((unsigned __int8 *)p_Blink + 112);
    p_Blink[3] = 0LL;
    *((_BYTE *)p_Blink + 112) = v17 & 0xFC;
    *((_DWORD *)p_Blink + 29) = (v17 >> 3) & 1;
    p_Blink[11] = 0LL;
    p_Blink[12] = 0LL;
    p_Blink[13] = 0LL;
    p_Blink[49] = 0LL;
    p_Blink[50] = 0LL;
    if ( !*((_DWORD *)p_Blink + 29) )
    {
      *((_BYTE *)p_Blink + 112) &= ~4u;
      if ( p_Blink == v8 )
      {
        if ( (*(_BYTE *)(v33 + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(v33, a1), v20 = 1, !IsThreadRankNonZero) )
        {
          v20 = *(_BYTE *)(v33 + 195);
        }
        *a1->PriorityState = v20;
        SchedulerAssist = a1->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( (_KTHREAD *)v33 == a1->IdleThread )
            v25 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v25 = (unsigned int)v20;
          KiSetSchedulerAssistPriority(SchedulerAssist, v25, 0LL);
        }
      }
LABEL_22:
      v18 = *((unsigned __int16 *)p_Blink + 57);
      if ( *((_WORD *)p_Blink + 57) )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v26, v18);
          v18 ^= 1 << v26;
          v38 = v26;
          v27 = (__int64)&p_Blink[2 * v26 + 17];
          v28 = *(_QWORD **)v27;
          do
          {
            *((_DWORD *)v28 - 25) &= ~0x2000u;
            v29 = (__int64)(v28 - 27);
            v28[160] = 0LL;
            v28 = (_QWORD *)*v28;
            KiGetThreadEffectiveRankNonZero(v29, (__int64)&Flink[-5].Blink, v14, 0, (bool *)&v36);
            KiAddThreadToPrcbQueue((_DWORD)a1, v30, *(char *)(v30 + 195), 0, v36);
          }
          while ( v28 != (_QWORD *)v27 );
          *(_QWORD *)(v27 + 8) = v27;
          *(_QWORD *)v27 = v27;
        }
        while ( v18 );
        v8 = v34;
        v4 = v37;
      }
      *((_WORD *)p_Blink + 57) = 0;
      goto LABEL_24;
    }
    if ( v4 )
      goto LABEL_22;
    if ( *((_WORD *)p_Blink + 57) )
    {
      KiInsertNonMaxOverQuotaScb(&Flink[-5].Blink, a1, 0LL);
      v35 = 1;
    }
LABEL_24:
    Flink = Flink->Flink;
    result = v6;
  }
  while ( Flink != &a1->ScbList );
  if ( !v35 )
    goto LABEL_26;
  return result;
}
