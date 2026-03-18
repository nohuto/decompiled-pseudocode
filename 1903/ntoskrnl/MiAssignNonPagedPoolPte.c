/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x140023480
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x140023250 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DA70 (MiFreeZeroPageSizeIndex.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // r14
  __int64 v6; // rdi
  __int64 ValidPte; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // cl
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v5 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MiSwizzleInvalidPte(128LL, a2, a3, a4);
  ValidPte = MiMakeValidPte(v5, 0LL, *(_DWORD *)(a1 + 20) | 0xA0000000);
  ContainingPageTable = MiGetContainingPageTable(v5);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = ContainingPageTable;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v9;
  v11 = *(_QWORD *)(v9 + 40);
  v12 = (ValidPte ^ (((v9 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
  if ( (*(_BYTE *)(v9 + 35) & 0x10) != 0 )
  {
    v13 = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 16) = v6;
    v11 &= ~0x200000000000000uLL;
    v13 = 1;
  }
  v14 = 0xFFFFFFFFFLL;
  *(_QWORD *)(v9 + 40) = v11 ^ (ContainingPageTable ^ v11) & 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  v16 = *(_QWORD *)(v9 + 40) & 0xFDFFFFFFFFFFFFFFuLL;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 40) = v16;
  if ( (unsigned int)MiFreeZeroPageSizeIndex(v9, v14, v16, 1LL) != -1 )
  {
    v17 &= 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v9 + 40) = v17;
  }
  v19 = *(_BYTE *)(v9 + 34);
  if ( (v19 & 0xC0) != 0x40 )
  {
    MiChangePageAttribute(v9, (unsigned int)v18, (unsigned int)v18);
    v19 = *(_BYTE *)(v9 + 34);
    v18 = 1LL;
  }
  v20 = 0xC000000000000001uLL;
  v21 = *(_QWORD *)(v9 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v9 + 32) = v18;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 24) = v21 | 1;
  *(_BYTE *)(v9 + 34) = v19 & 0xF8 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( !(unsigned int)MiPteInShadowRange(v5, v20, v17, v18) )
    goto LABEL_11;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v12 & 1) != 0 )
    {
      v12 |= 0x8000000000000000uLL;
    }
LABEL_11:
    *v5 = v12;
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140465BEC) && (v12 & 1) != 0 )
    v12 |= 0x8000000000000000uLL;
  *v5 = v12;
  MiWritePteShadow(v5, v12);
LABEL_12:
  v23 = v22 + 48 * v10;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
