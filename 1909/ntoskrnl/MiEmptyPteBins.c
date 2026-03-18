/*
 * XREFs of MiEmptyPteBins @ 0x1400DAD10
 * Callers:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x140030D20 (MiCheckProcessorPteCache.c)
 *     MiInsertCachedPte @ 0x14006B510 (MiInsertCachedPte.c)
 *     MiAdjustPteBins @ 0x1400DAC14 (MiAdjustPteBins.c)
 * Callees:
 *     MiReplenishBitMap @ 0x1400DAEE0 (MiReplenishBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1402DD99C (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  int v2; // r8d
  unsigned int v3; // esi
  int v5; // r12d
  __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int i; // ebx
  volatile signed __int64 *v10; // rdx
  signed __int64 v11; // rax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned __int8 CurrentIrql; // bp
  bool v16; // zf
  signed __int64 v17; // rtt
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  int v20; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 v23[22]; // [rsp+0h] [rbp-58h] BYREF
  signed __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h]

  v25 = a2;
  v2 = a2;
  v24 = 0LL;
  v3 = 0;
  _InterlockedOr(v23, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0;
  v8 = 2 * (unsigned __int16)KeNumberNodes;
  if ( (__int64 *)a1 != &qword_1404666C0 )
    v8 = (unsigned __int16)KeNumberNodes;
  if ( !v8 )
    return v3;
  while ( 2 )
  {
    for ( i = 0; i < 8; ++i )
    {
      v10 = (volatile signed __int64 *)(v6 + 8LL * i);
      v11 = *v10;
      v24 = v11;
      if ( !(_DWORD)v11 )
        continue;
      v13 = v5 - v11;
      if ( (unsigned int)(v5 - v11) <= 2 )
      {
        if ( (v11 & 1) != 0 || (v14 = 0, v13 < 2) )
          v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      if ( v14 == 1 && !v2 )
        continue;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_13;
      v16 = CurrentIrql == 2;
      if ( CurrentIrql < 2u )
      {
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
LABEL_13:
        v16 = CurrentIrql == 2;
      }
      if ( v16 && (__int64 *)a1 == &qword_1404666C0 && v7 >= v8 >> 1 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
          KeGetCurrentIrql();
        __writecr8(2uLL);
        return v3;
      }
      v17 = v24;
      if ( v17 == _InterlockedCompareExchange64(v10, 0LL, v24) )
      {
        _InterlockedOr(v23, 0);
        if ( (unsigned int)(KiTbFlushTimeStamp - v24) <= 2 )
        {
          if ( (v24 & 1) != 0 || (v18 = 0LL, (unsigned int)(KiTbFlushTimeStamp - v24) < 2) )
            v18 = 1LL;
        }
        else
        {
          v18 = 0LL;
        }
        if ( (__int64 *)a1 == &qword_1404666C0 && v7 >= v8 >> 1 )
        {
          v20 = MiReleaseLargePteMappings(a1, &v24, v18);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(CurrentIrql);
        }
        else
        {
          v19 = MiReplenishBitMap(a1, HIDWORD(v24), v18);
          v20 = v19;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v19);
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), -v20);
        v2 = v25;
        v3 = 1;
      }
      else
      {
        --i;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v22 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v22);
        v2 = v25;
      }
      __writecr8(CurrentIrql);
    }
    v6 += 72LL;
    if ( ++v7 < v8 )
      continue;
    return v3;
  }
}
