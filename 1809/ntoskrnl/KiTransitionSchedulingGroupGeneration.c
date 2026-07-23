/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x1400D3300
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400D36AC (KiChargeSchedulingGroupCycleTime.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1401170AC (KiInsertNonMaxOverQuotaScb.c)
 *     KiAddThreadToPrcbQueue @ 0x1401175DC (KiAddThreadToPrcbQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(struct _KPRCB *a1, unsigned __int64 a2, char a3)
{
  char v3; // bp
  unsigned __int64 GenerationTarget; // rcx
  unsigned int v6; // r13d
  __int64 NextThread; // r15
  _QWORD *v8; // rsi
  unsigned __int64 result; // rax
  _LIST_ENTRY *Flink; // r12
  _QWORD *p_Blink; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  volatile signed __int32 *v20; // rdx
  __int64 v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // cl
  bool IsThreadRankNonZero; // al
  char v26; // cl
  __int64 v27; // rdx
  unsigned int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // rsi
  __int64 v32; // r10
  __int64 v33; // r10
  __int64 Number; // rax
  char v35; // cl
  int v36; // [rsp+30h] [rbp-68h]
  _QWORD *v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+A0h] [rbp+8h]
  char v40; // [rsp+A8h] [rbp+10h] BYREF
  char v41; // [rsp+B0h] [rbp+18h]
  int v42; // [rsp+B8h] [rbp+20h]

  v41 = a3;
  v3 = a3;
  GenerationTarget = a1->GenerationTarget;
  v6 = 1;
  v36 = 1;
  if ( a2 > GenerationTarget )
  {
    v6 = (a2 - 1 + (unsigned int)KiGenerationTicks - GenerationTarget) / (unsigned int)KiGenerationTicks + 1;
    v36 = v6;
  }
  a1->GenerationTarget = KiGenerationEndTick;
  a1->ScbQueue.Root = 0LL;
  a1->ScbQueue.Min = 0LL;
  NextThread = (__int64)a1->NextThread;
  v39 = 0;
  if ( !NextThread )
    NextThread = (__int64)a1->CurrentThread;
  v8 = *(_QWORD **)(NextThread + 104);
  v37 = v8;
  if ( v8 )
  {
    v8 = (_QWORD *)((char *)v8 + a1->ScbOffset);
    v37 = v8;
  }
  result = (unsigned __int64)&a1->ScbList;
  Flink = a1->ScbList.Flink;
  if ( Flink == &a1->ScbList )
  {
LABEL_46:
    if ( a1->GroupSchedulingOverQuota )
    {
      Number = a1->Number;
      a1->GroupSchedulingOverQuota = 0;
      v35 = KiProcessorIndexToNumberMappingTable[Number];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_140404D58[result], ~(1LL << (v35 & 0x3F)));
    }
    return result;
  }
  LOBYTE(result) = v6;
  v38 = v6;
  do
  {
    p_Blink = &Flink[-5].Blink;
    if ( v6 >= 0x40 )
      v12 = 0LL;
    else
      v12 = p_Blink[6] << result;
    v13 = v12 | 1;
    if ( (p_Blink[14] & 4) == 0 )
      v13 = v12;
    p_Blink[6] = v13;
    v14 = (char *)p_Blink - a1->ScbOffset;
    KiChargeSchedulingGroupCycleTime(v14, &Flink[-5].Blink);
    if ( !v3 )
    {
      if ( a1->ClockOwner )
      {
        if ( (p_Blink[14] & 0x10) == 0 )
        {
          v16 = *((_QWORD *)v14 + 5);
          v17 = v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 6, v16);
          v18 = *((_QWORD *)v14 + 5);
          if ( v17 > v18 )
            _InterlockedExchange64((volatile __int64 *)v14 + 6, v18);
        }
      }
    }
    if ( p_Blink[1] != p_Blink[2] )
    {
      v19 = KiGroupSchedulingNumerator;
      *p_Blink >>= 10;
      p_Blink[4] = *p_Blink * v19 + ((p_Blink[4] * (unsigned __int64)(1024 - v19)) >> 10);
    }
    v20 = (volatile signed __int32 *)p_Blink[15];
    v21 = 0LL;
    *p_Blink = 0LL;
    p_Blink[5] = 0LL;
    if ( v20 )
    {
      v22 = ((*((unsigned __int8 *)p_Blink + 112) >> 3) & 1) - *((_DWORD *)p_Blink + 29);
      if ( (int)(v22 + _InterlockedExchangeAdd(v20, v22)) < 0 )
        *(_DWORD *)p_Blink[15] = 0;
    }
    v23 = *((unsigned __int8 *)p_Blink + 112);
    p_Blink[3] = 0LL;
    *((_BYTE *)p_Blink + 112) = v23 & 0xFC;
    *((_DWORD *)p_Blink + 29) = (v23 >> 3) & 1;
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
        if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, a1), v26 = 1, !IsThreadRankNonZero) )
        {
          v26 = *(_BYTE *)(NextThread + 195);
        }
        *a1->PriorityState = v26;
        if ( a1->SchedulerAssist )
        {
          v27 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( (_KTHREAD *)NextThread != a1->IdleThread )
            v27 = (unsigned int)v26;
          KiSetSchedulerAssistPriority(a1->SchedulerAssist, v27, 0LL, v21);
        }
      }
LABEL_37:
      v28 = *((unsigned __int16 *)p_Blink + 57);
      if ( *((_WORD *)p_Blink + 57) )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v29, v28);
          v28 ^= 1 << v29;
          v42 = v29;
          v30 = (__int64)&p_Blink[2 * v29 + 17];
          v31 = *(_QWORD **)v30;
          do
          {
            *((_DWORD *)v31 - 25) &= ~0x2000u;
            v32 = (__int64)(v31 - 27);
            v31[160] = 0LL;
            v31 = (_QWORD *)*v31;
            KiGetThreadEffectiveRankNonZero(v32, (__int64)&Flink[-5].Blink, v15, 0, (bool *)&v40);
            KiAddThreadToPrcbQueue((_DWORD)a1, v33, *(char *)(v33 + 195), 0, v40);
          }
          while ( v31 != (_QWORD *)v30 );
          *(_QWORD *)(v30 + 8) = v30;
          *(_QWORD *)v30 = v30;
        }
        while ( v28 );
        v6 = v36;
        v8 = v37;
      }
      v3 = v41;
      *((_WORD *)p_Blink + 57) = 0;
      goto LABEL_43;
    }
    if ( v3 )
      goto LABEL_37;
    if ( *((_WORD *)p_Blink + 57) )
    {
      KiInsertNonMaxOverQuotaScb(&Flink[-5].Blink, a1, 0LL);
      v24 = 1;
      v39 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v24 = v39;
LABEL_44:
    Flink = Flink->Flink;
    result = v38;
  }
  while ( Flink != &a1->ScbList );
  if ( !v24 )
    goto LABEL_46;
  return result;
}
