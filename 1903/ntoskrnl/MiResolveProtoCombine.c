/*
 * XREFs of MiResolveProtoCombine @ 0x140141F74
 * Callers:
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiMakeTransitionPteValid @ 0x140120AD0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x1401587DC (MiIsPteInStore.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  ULONG_PTR v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v17; // r9
  ULONG_PTR v18; // rbx
  int v19; // eax
  char v20; // cl
  unsigned __int64 ValidPte; // rax
  char v23; // al
  unsigned __int64 TransitionPteValid; // rax
  int v25; // ecx
  unsigned __int64 v26; // rdx
  int v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+A8h] [rbp+48h] BYREF

  v28 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v7 = MiLockLeafPage(a3, 0);
  if ( !v7 )
    goto LABEL_30;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v11 = 1;
  v29 = v8;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x400) == 0 && (v8 & 0x800) != 0 )
    {
      v12 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v7, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
          v23 = *(_BYTE *)(v7 + 34);
          ++*(_WORD *)(v7 + 32);
          *(_BYTE *)(v7 + 34) = v23 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v25 = *(_DWORD *)(v7 + 16);
          v29 = TransitionPteValid;
          if ( (v25 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v12, *(_QWORD *)(v7 + 16)) )
            v28 = MiCaptureDirtyBitToPfn(v7);
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
          {
            v11 = v9 + 1;
            goto LABEL_26;
          }
          v11 = 1;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v9 = 1LL;
            if ( !HIBYTE(word_140465BEC) )
              goto LABEL_34;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
LABEL_34:
            if ( (v10 & 1) != 0 )
              v26 |= 0x8000000000000000uLL;
          }
LABEL_26:
          *a3 = v26;
          if ( (_DWORD)v9 )
            MiWritePteShadow((__int64)a3);
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v7, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  v12 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
LABEL_5:
  v13 = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v13 ^ ((v13 + 1) ^ v13) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  *(_BYTE *)(v6 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v6, v13, v9, v10);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 )
    MiReleasePageFileInfo(v12, v28, v11);
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * v14 - 0x58000000000LL;
  v28 = *(_QWORD *)(v15 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v18 = v17 + 48 * ContainingPageTable;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 5;
  v20 = *(_BYTE *)(v15 + 34) >> 6;
  if ( v20 != 1 )
  {
    if ( v20 )
    {
      if ( v20 == 2 )
        v19 |= 0x18u;
    }
    else
    {
      v19 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, v14, v19);
  if ( (unsigned int)MiAllocateWsle(a2, a1, (_QWORD *)(48 * v14 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v14 - 0x58000000000LL, 0);
  MiLockAndDecrementShareCount(v18, 0);
  return 0LL;
}
