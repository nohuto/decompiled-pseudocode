/*
 * XREFs of MiInsertCachedPte @ 0x1400344D0
 * Callers:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x1400EFC90 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x1400EFE70 (MiReplenishBitMap.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  int v7; // r13d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // r12d
  volatile signed __int64 *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r11
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  signed __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v25; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r11
  unsigned __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v38; // rcx
  int v39; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v42; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-60h]
  volatile signed __int64 *v44; // [rsp+30h] [rbp-58h]
  signed __int64 v45; // [rsp+38h] [rbp-50h] BYREF
  __int64 v46; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+A0h] [rbp+18h]
  volatile signed __int64 v49; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  if ( a3 > 0x40 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v48 = 0;
  v7 = 0;
  v43 = v6;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v48 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = v6;
    if ( (unsigned int)v3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v6 )
    return 0LL;
  v9 = 0xFFFFF6FB7DBED000uLL;
  if ( (_DWORD)v3 == 1 )
  {
    v46 = 4096LL;
    goto LABEL_7;
  }
  v6 = a2 + 8;
  v25 = v3 << 32;
  if ( qword_14043B180 )
  {
    if ( (v25 & qword_14043B180) != 0 )
      v25 |= 0x10uLL;
    else
      v25 |= qword_14043B180;
  }
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(qword_14043B180, v25) )
    {
      if ( !HIBYTE(word_14043B26C) && (v25 & 1) != 0 )
        v25 |= 0x8000000000000000uLL;
      *(_QWORD *)v6 = v25;
      MiWritePteShadow(v6);
      goto LABEL_36;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v25 & 1) != 0 )
    {
      v25 |= 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)v6 = v25;
LABEL_36:
  v46 = 0LL;
LABEL_7:
  v10 = *(_QWORD *)(v5 + 80);
  if ( v7 )
    v10 += 72LL * (unsigned __int16)KeNumberNodes;
  v11 = v10 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  while ( 1 )
  {
    _InterlockedOr(v41, 0);
    v12 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0LL, 1LL, v6, v9);
  }
  v13 = (volatile signed __int64 *)(v11 + 8LL * (KiTbFlushTimeStamp & 7));
  v44 = v13;
  if ( v7 )
  {
    v38 = v3 + *(int *)(v11 + 64);
    if ( v38 < 0x80 )
    {
      if ( v38 >= 0x40 )
      {
        MiEmptyPteBins(a1, 0LL, v6, v9);
        v13 = v44;
      }
      goto LABEL_12;
    }
    MiEmptyPteBins(a1, 1LL, v6, v9);
    return 0LL;
  }
LABEL_12:
  v14 = 0LL;
  if ( qword_14043B180 )
    v14 = qword_14043B180;
  v15 = a1;
  v16 = v46 | v14 & 0xFFFFFFFFFFFF0FFFuLL;
  v17 = v43;
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_15:
  v20 = *v13;
  v49 = *v13;
  while ( 1 )
  {
    while ( 1 )
    {
      v45 = v20;
      if ( (_DWORD)v20 != v12 )
      {
        if ( HIDWORD(v20) )
          break;
      }
      if ( v16 )
      {
        v21 = v16;
        if ( qword_14043B180 )
        {
          if ( (v16 & 0x10) != 0 )
            v21 = v16 & 0xFFFFFFEF;
          else
            v21 = v16 & ~(_DWORD)qword_14043B180;
        }
      }
      else
      {
        v21 = 0;
      }
      v16 = v21 | ((unsigned __int64)HIDWORD(v49) << 32);
      if ( qword_14043B180 )
      {
        if ( (qword_14043B180 & v16) != 0 )
          v16 |= 0x10uLL;
        else
          v16 |= qword_14043B180;
      }
      v22 = v16;
      if ( a2 >= v18 && a2 <= v19 )
      {
        if ( (unsigned int)MiPteHasShadow(v21, v16) )
        {
          if ( !HIBYTE(word_14043B26C) && (v16 & 1) != 0 )
            v22 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v22;
          MiWritePteShadow(a2);
          v17 = v43;
          v18 = 0xFFFFF6FB7DBED000uLL;
          v19 = 0xFFFFF6FB7DBED7F8uLL;
          goto LABEL_27;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v16 & 1) != 0 )
        {
          v22 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v22;
LABEL_27:
      v13 = v44;
      LODWORD(v42) = v12;
      HIDWORD(v42) = (__int64)(a2 - v17) >> 3;
      v20 = _InterlockedCompareExchange64(v44, v42, v20);
      HIDWORD(v49) = HIDWORD(v20);
      if ( v20 == v45 )
      {
        v23 = v3;
        goto LABEL_29;
      }
    }
    if ( !(_DWORD)v20 )
      goto LABEL_15;
    _InterlockedOr(v41, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v20) <= 2
      && ((v20 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v20) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v20 = _InterlockedCompareExchange64(v13, 0LL, v20);
    HIDWORD(v49) = HIDWORD(v20);
    if ( v20 == v45 )
    {
      if ( v48 )
      {
        v39 = MiReleaseLargePteMappings(v15, &v45, 0LL);
        v15 = a1;
        v29 = v39;
      }
      else
      {
        v28 = MiReplenishBitMap(v15, HIDWORD(v45), 0LL);
        v15 = a1;
        v29 = v28;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v28);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), -v29);
      v13 = v44;
      v20 = 0LL;
      HIDWORD(v49) = 0;
      v18 = 0xFFFFF6FB7DBED000uLL;
      v19 = 0xFFFFF6FB7DBED7F8uLL;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v15 = a1;
      v13 = v44;
      v18 = 0xFFFFF6FB7DBED000uLL;
      v19 = 0xFFFFF6FB7DBED7F8uLL;
    }
    __writecr8(CurrentIrql);
    v17 = v43;
  }
  HIDWORD(v42) = (__int64)(a2 - v17) >> 3;
  v30 = MiSwizzleInvalidPte(0LL);
  if ( !(unsigned int)MiPteInShadowRange(a2, v46 | v30 & 0xFFFFFFFFFFFF0FFFuLL, v31) )
    goto LABEL_59;
  if ( (unsigned int)MiPteHasShadow(v33, v32) )
  {
    if ( !HIBYTE(word_14043B26C) && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
    *(_QWORD *)a2 = v32;
    MiWritePteShadow(a2);
  }
  else
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v32 & 1) != 0 )
    {
      v32 |= 0x8000000000000000uLL;
    }
LABEL_59:
    *(_QWORD *)a2 = v32;
  }
  if ( v48 )
  {
    v36 = MiReleaseLargePteMappings(v34, &v42, 0LL);
  }
  else
  {
    v35 = MiReplenishBitMap(v34, HIDWORD(v42), 0LL);
    v36 = v35;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v35);
  }
  v23 = -v36;
LABEL_29:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), v23);
  return 1LL;
}
