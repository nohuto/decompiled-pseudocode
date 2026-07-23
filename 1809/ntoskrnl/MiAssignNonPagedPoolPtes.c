/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x140099220
 * Callers:
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiFlushTbAsNeeded @ 0x140097F10 (MiFlushTbAsNeeded.c)
 *     MiIsPoolPteInUse @ 0x14009A018 (MiIsPoolPteInUse.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  unsigned int v5; // r12d
  unsigned __int64 v6; // r14
  int v7; // r9d
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 ValidPte; // rbx
  __int64 v11; // rdx
  BOOL v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rdx
  __int64 *v19; // r12
  unsigned __int8 CurrentIrql; // bp
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 ContainingPageTable; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+98h] [rbp+20h] BYREF

  v33 = a3;
  v3 = (__int64 *)*a3;
  v5 = 0;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MiSwizzleInvalidPte(128LL);
  v9 = v6 + 8 * (a2 - 1);
  ValidPte = MiMakeValidPte(v6, 0LL, v7 | 0xA0000000);
  MiFlushTbAsNeeded(v6, a2, 0LL, 1LL);
  ContainingPageTable = MiGetContainingPageTable(v6);
  if ( v6 > v9 )
    goto LABEL_20;
  do
  {
    v12 = MiPteInShadowRange(v6);
    if ( v12
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 8 * ((v6 >> 3) & 0x1FF));
        v28 = v11 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = v11;
        v11 = v28;
        if ( (v27 & 0x42) != 0 )
          v11 = v28 | 0x42;
      }
    }
    if ( !(unsigned int)MiIsPoolPteInUse(v11) )
    {
      v31 = v5 + 1;
      v18 = (ValidPte ^ (((__int64)(v3 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
      ValidPte ^= v18;
      if ( (*((_BYTE *)v3 + 35) & 0x10) == 0 )
      {
        v3[5] &= v15;
        v3[2] = v8;
      }
      v19 = (__int64 *)*v3;
      v3[5] ^= v16 & (v14 ^ v3[5]);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v17);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v34 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 6, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v34, v18, v14);
          while ( v3[3] < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 6, 0x3FuLL) );
        v15 = 0xFDFFFFFFFFFFFFFFuLL;
      }
      v3[5] &= v15;
      *v3 = 0LL;
      if ( (unsigned int)MiFreeZeroPageSizeIndex(v3) != -1 )
        v3[5] &= 0xFFFFFFF000000000uLL;
      v21 = *((_BYTE *)v3 + 34);
      if ( (v21 & 0xC0) != 0x40 )
      {
        MiChangePageAttribute(v3, 1LL, 1LL);
        v21 = *((_BYTE *)v3 + 34);
      }
      v22 = v3[3];
      v3[1] = v6;
      v3[3] = v22 & 0xC000000000000000uLL | 1;
      v23 = 1LL;
      *((_WORD *)v3 + 16) = 1;
      *((_BYTE *)v3 + 34) = v21 & 0xF8 | 6;
      _InterlockedAnd64(v3 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      v13 = ValidPte;
      if ( v12 )
      {
        if ( (unsigned int)MiPteHasShadow(v23, ValidPte) )
        {
          if ( !HIBYTE(word_14043B26C) && (ValidPte & 1) != 0 )
            v13 |= 0x8000000000000000uLL;
          *(_QWORD *)v6 = v13;
          MiWritePteShadow(v6);
          goto LABEL_15;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (ValidPte & 1) != 0 )
        {
          v13 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v13;
LABEL_15:
      v14 = ContainingPageTable;
      v3 = v19;
      v5 = v31;
    }
    v6 += 8LL;
  }
  while ( v6 <= v9 );
  if ( v5 )
  {
    v24 = 48 * v14 - 0x58000000000LL;
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32, v13, v14);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + v5)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_20:
  *v33 = v3;
  return v5;
}
