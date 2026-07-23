/*
 * XREFs of MiMapPagesToZero @ 0x1400F9160
 * Callers:
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiRemoveFaultNode @ 0x1400F9744 (MiRemoveFaultNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiMapPagesToZero(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r11
  __int64 v8; // r12
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // ecx
  char v16; // al
  signed int v17; // r14d
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  unsigned __int64 LeafVa; // rbp
  int v21; // eax
  __int64 v22; // r11
  unsigned __int64 v23; // r11
  unsigned __int64 i; // rsi
  __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  unsigned __int8 v37; // [rsp+60h] [rbp+8h]
  unsigned int v38; // [rsp+78h] [rbp+20h]

  v38 = a4;
  v4 = 0x140000000uLL;
  if ( a4 < 3 )
    v8 = MiLargePageSizes[a4];
  else
    v8 = 1LL;
  SchedulerAssist = (volatile signed __int32 *)(a3 + 0x58000000000LL);
  v10 = (unsigned __int128)((a3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v11 = (a3 + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    _InterlockedOr(SchedulerAssist, 0x10000u);
  }
  v13 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SchedulerAssist, v10, a3) )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a3 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
    a4 = v38;
    v4 = 0x140000000uLL;
  }
  if ( *(_BYTE *)(a1 + 69) == 1 )
  {
    MiRemoveFaultNode(a1);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( v8 == 1 )
  {
    v14 = *(unsigned __int8 *)(a3 + 34) >> 6;
    if ( !v14 || v14 == 2 )
    {
      if ( dword_14043B1DC[4 * v14] != 1 )
        goto LABEL_10;
      MiChangePageAttribute(a3, 1u, 1);
    }
    else
    {
      if ( (*(_BYTE *)(a3 + 34) & 0xC0) != 0xC0 )
        goto LABEL_10;
      MiFinalizePageAttribute(a3, 1LL, 1u);
    }
    a4 = v38;
    v4 = 0x140000000uLL;
LABEL_10:
    v15 = 4;
    v16 = *(_BYTE *)(a3 + 34) >> 6;
    if ( v16 )
    {
      if ( v16 == 2 )
        v15 = 28;
    }
    else
    {
      v15 = 12;
    }
    goto LABEL_13;
  }
  v15 = 4;
LABEL_13:
  v17 = v15 | 0xA0000000;
  if ( a4 <= 1 )
    v17 = v15 | 0xA4000000;
  v18 = ((v11 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
  v19 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_86;
  LeafVa = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v18 |= 0x8000000000000000uLL;
    }
    else if ( (v17 & 0x4000000) == 0 )
    {
      v18 &= ~0x8000000000000000uLL;
    }
    v30 = MiUserPdeOrAbove(a2);
    a4 = v38;
    v4 = 0x140000000uLL;
    v19 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v30 )
      v18 |= 4uLL;
  }
  if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
    v18 |= 4uLL;
  if ( (v17 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa(LeafVa);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v21 = HIBYTE(word_14043B26C);
  }
  else
  {
    if ( *(_BYTE *)(((LeafVa >> 39) & 0x1FF) - 256 + v4 + 4442640) == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= v19 )
    {
      goto LABEL_28;
    }
    v21 = LeafVa < qword_14043CB80 || LeafVa > qword_14043B5F0
        ? (unsigned __int8)word_14043B26C
        : HIBYTE(word_14043B26C);
  }
  if ( v21 )
LABEL_86:
    v18 |= 0x100uLL;
LABEL_28:
  if ( (v17 & 5) == 4 && v17 < 0 )
    v18 |= 0x42uLL;
  v22 = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100 | 0x80;
  if ( (v17 & 0x4000000) == 0 )
    v22 = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100;
  v23 = v22 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  for ( i = (__int64)(a2 << 25) >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > v19 )
      break;
  }
  if ( a4 <= 1 )
  {
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow(v32, v31) )
      {
        if ( !HIBYTE(word_14043B26C) )
          v33 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v33;
        MiWritePteShadow(a2);
        a4 = v38;
        goto LABEL_41;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        v33 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)a2 = v33;
    goto LABEL_41;
  }
  v25 = 8 * v8;
  v26 = 8 * v8 + a2;
  if ( a2 >= v26 )
    goto LABEL_40;
  v27 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v28 = v23;
    if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > v27 )
      goto LABEL_37;
    if ( !(unsigned int)MiPteHasShadow(0xFFFFFFFFF000LL, v23) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v23 & 1) != 0 )
      {
        v28 |= 0x8000000000000000uLL;
      }
LABEL_37:
      *(_QWORD *)a2 = v28;
      goto LABEL_38;
    }
    if ( !HIBYTE(word_14043B26C) && (v23 & 1) != 0 )
      v28 |= 0x8000000000000000uLL;
    *(_QWORD *)a2 = v28;
    MiWritePteShadow(a2);
    v27 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_38:
    a2 += 8LL;
    v23 ^= (v23 ^ (v23 + 4096)) & 0xFFFFFFFFF000LL;
  }
  while ( a2 < v26 );
  a4 = v38;
  v25 = 8 * v8;
LABEL_40:
  a2 -= v25;
LABEL_41:
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 48) = (v8 << 12) + i - 1;
  *(_QWORD *)(a1 + 40) = i;
  *(_DWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = a3;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
  {
    v36 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v36);
  }
  __writecr8(v37);
  return 1LL;
}
