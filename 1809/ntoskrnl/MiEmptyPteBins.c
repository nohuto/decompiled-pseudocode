/*
 * XREFs of MiEmptyPteBins @ 0x1400EFC90
 * Callers:
 *     MiInsertCachedPte @ 0x1400344D0 (MiInsertCachedPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x14005CFB0 (MiCheckProcessorPteCache.c)
 *     MiAdjustPteBins @ 0x1400EFB88 (MiAdjustPteBins.c)
 * Callees:
 *     MiReplenishBitMap @ 0x1400EFE70 (MiReplenishBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  int v2; // r8d
  unsigned int v3; // esi
  int v5; // r13d
  __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int i; // ebx
  volatile signed __int64 *v10; // rdx
  signed __int64 v11; // rax
  BOOL v13; // eax
  unsigned __int8 CurrentIrql; // bp
  bool v15; // zf
  signed __int64 v16; // rtt
  _BOOL8 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  signed __int32 v22[22]; // [rsp+0h] [rbp-58h] BYREF
  signed __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+10h]

  v24 = a2;
  v2 = a2;
  v3 = 0;
  _InterlockedOr(v22, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0;
  v8 = 2 * (unsigned __int16)KeNumberNodes;
  if ( (__int64 *)a1 != &qword_14043C060 )
    v8 = (unsigned __int16)KeNumberNodes;
  if ( !v8 )
    return v3;
  while ( 2 )
  {
    for ( i = 0; i < 8; ++i )
    {
      v10 = (volatile signed __int64 *)(v6 + 8LL * i);
      v11 = *v10;
      v23 = v11;
      if ( !(_DWORD)v11 )
        continue;
      v13 = (unsigned int)(v5 - v11) <= 2 && ((v11 & 1) != 0 || (unsigned int)(v5 - v11) < 2);
      if ( v13 && !v2 )
        continue;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_13;
      v15 = CurrentIrql == 2;
      if ( CurrentIrql < 2u )
      {
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
LABEL_13:
        v15 = CurrentIrql == 2;
      }
      if ( v15 && (__int64 *)a1 == &qword_14043C060 && v7 >= v8 >> 1 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
          KeGetCurrentIrql();
        __writecr8(2uLL);
        return v3;
      }
      v16 = v23;
      if ( v16 == _InterlockedCompareExchange64(v10, 0LL, v23) )
      {
        _InterlockedOr(v22, 0);
        v17 = (unsigned int)(KiTbFlushTimeStamp - v23) <= 2
           && ((v23 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v23) < 2);
        if ( (__int64 *)a1 == &qword_14043C060 && v7 >= v8 >> 1 )
        {
          v19 = MiReleaseLargePteMappings(a1, &v23, v17);
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
          v18 = MiReplenishBitMap(a1, HIDWORD(v23), v17);
          v19 = v18;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v18);
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), -v19);
        v2 = v24;
        v3 = 1;
      }
      else
      {
        --i;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
        v2 = v24;
      }
      __writecr8(CurrentIrql);
    }
    v6 += 72LL;
    if ( ++v7 < v8 )
      continue;
    return v3;
  }
}
