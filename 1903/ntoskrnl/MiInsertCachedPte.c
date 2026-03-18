/*
 * XREFs of MiInsertCachedPte @ 0x14006B2A0
 * Callers:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x1400F27D0 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x1400F29A0 (MiReplenishBitMap.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // r12d
  int v13; // r11d
  volatile signed __int64 *v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r8
  signed __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 CurrentIrql; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r11d
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // r10
  unsigned __int64 v36; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v38; // r10
  __int64 v39; // r10
  signed __int32 v40[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+20h] [rbp-68h]
  volatile signed __int64 v42; // [rsp+28h] [rbp-60h]
  volatile signed __int64 *v43; // [rsp+30h] [rbp-58h]
  signed __int64 v44; // [rsp+38h] [rbp-50h] BYREF
  __int64 v45; // [rsp+40h] [rbp-48h]
  __int64 v46; // [rsp+48h] [rbp-40h]
  int v47; // [rsp+A0h] [rbp+18h]
  signed __int64 v48; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v48 = 0LL;
  if ( a3 > 0x40 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v41 = v6;
  v7 = 0;
  v47 = 0;
  v8 = 0LL;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v47 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v41 = v6;
    if ( (unsigned int)v3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v6 )
    return 0LL;
  if ( (_DWORD)v3 == 1 )
  {
    v45 = 4096LL;
    goto LABEL_6;
  }
  if ( MiPteInShadowRange(a2 + 8) )
  {
    if ( (unsigned int)MiPteHasShadow(v26) )
    {
      if ( !HIBYTE(word_140465BEC) && (v25 & 1) != 0 )
        v25 |= v35;
      *(_QWORD *)(a2 + 8) = v25;
      MiWritePteShadow(a2 + 8, v25);
      goto LABEL_33;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v25 & 1) != 0 )
    {
      v25 |= v35;
    }
  }
  *(_QWORD *)(a2 + 8) = v25;
LABEL_33:
  v45 = 0LL;
LABEL_6:
  v10 = *(_QWORD *)(a1 + 80);
  if ( v7 )
    v10 += 72LL * (unsigned __int16)KeNumberNodes;
  v11 = v10 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  while ( 1 )
  {
    _InterlockedOr(v40, 0);
    v12 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0LL, 1LL);
  }
  v13 = v47;
  v14 = (volatile signed __int64 *)(v11 + 8LL * (KiTbFlushTimeStamp & 7));
  v43 = v14;
  if ( v47 )
  {
    v36 = v3 + *(int *)(v11 + 64);
    if ( v36 < 0x80 )
    {
      if ( v36 >= 0x40 )
      {
        MiEmptyPteBins(a1, 0LL, v8, v6);
        v13 = v47;
        v14 = v43;
      }
      goto LABEL_11;
    }
    MiEmptyPteBins(a1, 1LL, v8, v6);
    return 0LL;
  }
LABEL_11:
  v15 = 0LL;
  if ( qword_140465B00 )
    v15 = qword_140465B00;
  v16 = v41;
  v17 = v45 | v15 & 0xFFFFFFFFFFFF0FFFuLL;
  v18 = 2LL;
LABEL_14:
  v19 = *v14;
  v42 = *v14;
  while ( 1 )
  {
    while ( 1 )
    {
      v44 = v19;
      if ( (_DWORD)v19 != v12 )
      {
        if ( HIDWORD(v19) )
          break;
      }
      if ( v17 )
      {
        v20 = v17;
        if ( qword_140465B00 )
        {
          if ( (v17 & 0x10) != 0 )
            v20 = v17 & 0xFFFFFFEF;
          else
            v20 = v17 & ~(_DWORD)qword_140465B00;
        }
      }
      else
      {
        v20 = 0;
      }
      v17 = v20 | ((unsigned __int64)HIDWORD(v42) << 32);
      if ( qword_140465B00 )
      {
        if ( (qword_140465B00 & v17) != 0 )
          v17 |= 0x10uLL;
        else
          v17 |= qword_140465B00;
      }
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v22) )
        {
          if ( !HIBYTE(word_140465BEC) && (v17 & 1) != 0 )
            v21 |= v38;
          *(_QWORD *)a2 = v21;
          MiWritePteShadow(a2, v21);
          v16 = v41;
          v18 = 2LL;
          goto LABEL_25;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v17 & 1) != 0 )
        {
          v21 |= v38;
        }
      }
      *(_QWORD *)a2 = v21;
LABEL_25:
      v14 = v43;
      LODWORD(v48) = v12;
      HIDWORD(v48) = (__int64)(a2 - v16) >> 3;
      v19 = _InterlockedCompareExchange64(v43, v48, v19);
      v42 = v19;
      if ( v19 == v44 )
      {
        v23 = v3;
        goto LABEL_27;
      }
    }
    if ( !(_DWORD)v19 )
      goto LABEL_14;
    _InterlockedOr(v40, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v19) <= 2 )
    {
      if ( (v19 & 1) != 0 || (v27 = 0, (unsigned int)(KiTbFlushTimeStamp - v19) < 2) )
        v27 = 1;
    }
    else
    {
      v27 = 0;
    }
    if ( v27 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    v46 = CurrentIrql;
    __writecr8(v18);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LOBYTE(CurrentIrql) = v46;
    }
    v19 = _InterlockedCompareExchange64(v14, 0LL, v19);
    v42 = v19;
    if ( v19 == v44 )
    {
      if ( v13 )
      {
        LODWORD(CurrentIrql) = MiReleaseLargePteMappings(a1, &v44, 0LL);
      }
      else
      {
        v29 = MiReplenishBitMap(a1, HIDWORD(v44), 0LL);
        LODWORD(CurrentIrql) = v29;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v29);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), -(int)CurrentIrql);
      LOBYTE(CurrentIrql) = v46;
      v19 = 0LL;
      v13 = v47;
      v18 = 2LL;
      v14 = v43;
      v16 = v41;
      v42 = 0LL;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      LOBYTE(CurrentIrql) = v46;
      v18 = 2LL;
      v13 = v47;
      v14 = v43;
      v16 = v41;
    }
    __writecr8((unsigned __int8)CurrentIrql);
  }
  HIDWORD(v48) = (__int64)(a2 - v16) >> 3;
  MiSwizzleInvalidPte(0LL, v14, v18, v16);
  if ( !MiPteInShadowRange(a2) )
    goto LABEL_52;
  if ( (unsigned int)MiPteHasShadow(v31) )
  {
    if ( !HIBYTE(word_140465BEC) && (v30 & 1) != 0 )
      v30 |= v39;
    *(_QWORD *)a2 = v30;
    MiWritePteShadow(a2, v30);
  }
  else
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v30 & 1) != 0 )
    {
      v30 |= v39;
    }
LABEL_52:
    *(_QWORD *)a2 = v30;
  }
  if ( v32 )
  {
    v34 = MiReleaseLargePteMappings(a1, &v48, 0LL);
  }
  else
  {
    v33 = MiReplenishBitMap(a1, HIDWORD(v48), 0LL);
    v34 = v33;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v33);
  }
  v23 = -v34;
LABEL_27:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), v23);
  return 1LL;
}
