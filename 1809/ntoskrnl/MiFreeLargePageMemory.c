/*
 * XREFs of MiFreeLargePageMemory @ 0x140026200
 * Callers:
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x14015B3E0 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x1402C2518 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x1402C57BC (MiFreeLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiInsertLargePageInNodeList @ 0x140028C1C (MiInsertLargePageInNodeList.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR a1, unsigned int a2, int a3)
{
  ULONG_PTR v3; // r14
  char v4; // r15
  ULONG_PTR v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rbx
  bool v10; // cc
  int v11; // edx
  int v12; // r8d
  __int64 CurrentIrql; // rsi
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // al
  char v21; // cl
  __int64 v22; // rcx
  unsigned __int8 v24; // dl
  ULONG_PTR v25; // rsi
  unsigned __int64 v26; // rbp
  unsigned __int8 v27; // al
  bool v28; // cf
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v31; // dl
  struct _KPRCB *v32; // rcx
  struct _KPRCB *v33; // rcx
  int v34; // [rsp+30h] [rbp-78h] BYREF
  int v35; // [rsp+34h] [rbp-74h] BYREF
  __int64 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h]
  __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+50h] [rbp-58h]
  char v41; // [rsp+B8h] [rbp+10h]
  unsigned int v42; // [rsp+C0h] [rbp+18h]
  int v43; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  if ( a3 == 1 )
  {
    v42 = 0;
    v4 = 0;
  }
  else
  {
    v42 = 1;
    v4 = 1;
  }
  v41 = v4;
  v37 = 0LL;
  v5 = 0LL;
  v6 = MiLargePageSizes[a2];
  v7 = MiLargePageContainingFrames[a2];
  v8 = v6 + a1 - 1;
  v39 = v6;
  v38 = v7;
  v9 = 48 * v8 - 0x58000000000LL;
  v10 = a2 <= 1;
  v11 = a1;
  if ( v10 )
  {
    v12 = v6;
  }
  else
  {
    v11 = a1 & 0xFFFFFE00;
    v12 = 512;
  }
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)), v11, v12, 0, 0);
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v14 = 0xBFFFFFFFFFFFFFFFuLL;
  v15 = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    v16 = 0LL;
    v43 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v43);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      v16 = 0LL;
      v15 = 0x7FFFFFFFFFFFFFFFLL;
      v14 = 0xBFFFFFFFFFFFFFFFuLL;
    }
    *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
    v17 = *(_QWORD *)(v9 + 40);
    if ( (*(_BYTE *)(v9 + 34) & 7) == 5 )
      ++*(_WORD *)(v9 + 32);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
    if ( ((v17 >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v9);
      v16 = 0LL;
      v15 = 0x7FFFFFFFFFFFFFFFLL;
      v14 = 0xBFFFFFFFFFFFFFFFuLL;
    }
    v18 = *(_QWORD *)(v9 + 16);
    if ( v18 )
      v19 = v18 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      v19 = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(v9 + 16) = v19;
    if ( *(_WORD *)(v9 + 32) != 2
      || (v20 = *(_BYTE *)(v9 + 34), (v20 & 0xC0) != 0x40)
      || (v21 = *(_BYTE *)(v9 + 35), (v21 & 0x40) != 0) )
    {
      if ( v5 )
      {
LABEL_35:
        *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
        *(_QWORD *)(v9 + 40) &= 0xFFFFFFF000000000uLL;
        *(_WORD *)(v9 + 32) -= 2;
        if ( *(_WORD *)(v9 + 32) )
        {
          *(_BYTE *)(v9 + 34) |= 7u;
        }
        else
        {
          MiPfnReferenceCountIsZero(v9, v8, v16, v15);
          ++v37;
        }
        goto LABEL_24;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v15);
      v5 = v9;
      v8 = v3 + v6 - 1;
      v9 = 48 * v8 - 0x58000000000LL;
      if ( v9 <= v5 )
      {
LABEL_39:
        v35 = v16;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v35);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        goto LABEL_35;
      }
      v25 = v9 + 24;
      v26 = (v9 - v5 - 1) / 0x30 + 1;
      v37 += v26;
      v9 += -48LL * v26;
      while ( 1 )
      {
        v34 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( *(__int64 *)v25 < 0 );
        }
        *(_QWORD *)(v25 + 16) &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v8);
        _InterlockedAnd64((volatile signed __int64 *)v25, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v8 & 0xF) != 0 || !KeShouldYieldProcessor() )
          goto LABEL_65;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          v28 = v27 < 2u;
          v29 = v36;
          if ( v28 || (unsigned __int8)v36 >= 2u )
            goto LABEL_60;
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        v29 = v36;
LABEL_60:
        __writecr8(v29);
        v31 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LOBYTE(v36) = v31;
LABEL_65:
        --v8;
        v25 -= 48LL;
        if ( !--v26 )
        {
          v3 = a1;
          v16 = 0LL;
          v4 = v41;
          v7 = v38;
          LOBYTE(CurrentIrql) = v36;
          v6 = v39;
          goto LABEL_39;
        }
      }
    }
    if ( v5 )
      goto LABEL_35;
    *(_WORD *)(v9 + 32) = v16;
    *(_BYTE *)(v9 + 35) = v21 & 0xF8;
    v22 = *(_QWORD *)(v9 + 40);
    *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
    *(_QWORD *)(v9 + 40) ^= (v7 ^ v22) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v9 + 34) = v20 & 0xEF;
    if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 1 )
      *(_QWORD *)(v9 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    *(_BYTE *)(v9 + 34) = v4 | *(_BYTE *)(v9 + 34) & 0xF8;
    *(_QWORD *)(v9 + 24) &= v14;
    *(_QWORD *)(v9 + 8) = v16;
    if ( v8 == v3 )
    {
      MiInsertLargePageInNodeList(v8, v6, v42, v15);
      v37 = v6;
    }
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v8 & 0xF) == 0 && (unsigned __int8)CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v32);
      }
      __writecr8((unsigned __int8)CurrentIrql);
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LOBYTE(CurrentIrql) = v24;
      v36 = v24;
    }
    v9 -= 48LL;
    --v8;
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    v14 = 0xBFFFFFFFFFFFFFFFuLL;
  }
  while ( v8 >= v3 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v33 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v33);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v37;
}
