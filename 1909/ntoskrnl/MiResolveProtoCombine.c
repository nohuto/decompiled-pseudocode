/*
 * XREFs of MiResolveProtoCombine @ 0x1401424B4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiMakeTransitionPteValid @ 0x1400CBA2C (MiMakeTransitionPteValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiIsPteInStore @ 0x140158E7C (MiIsPteInStore.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  ULONG_PTR v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v14; // r9
  ULONG_PTR v15; // rbx
  int v16; // eax
  char v17; // cl
  unsigned __int64 ValidPte; // rax
  char v20; // al
  unsigned __int64 TransitionPteValid; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdx
  int v24; // r8d
  char v25; // r9
  int v26; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+48h] BYREF

  v27 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v7 = MiLockLeafPage(a3, 0);
  if ( !v7 )
    goto LABEL_30;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v9 = 1;
  v28 = v8;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x400) == 0 && (v8 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v7, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
          v20 = *(_BYTE *)(v7 + 34);
          ++*(_WORD *)(v7 + 32);
          *(_BYTE *)(v7 + 34) = v20 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          v22 = *(_DWORD *)(v7 + 16);
          v28 = TransitionPteValid;
          if ( (v22 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v10, *(_QWORD *)(v7 + 16)) )
            v27 = MiCaptureDirtyBitToPfn(v7);
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
          {
            v9 = v24 + 1;
            goto LABEL_26;
          }
          v9 = 1;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v24 = 1;
            if ( !HIBYTE(word_1404658EC) )
              goto LABEL_34;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
LABEL_34:
            if ( (v25 & 1) != 0 )
              v23 |= 0x8000000000000000uLL;
          }
LABEL_26:
          *a3 = v23;
          if ( v24 )
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
  v10 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v7 + 24) ^= ((*(_QWORD *)(v7 + 24) + 1LL) ^ *(_QWORD *)(v7 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v29);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  *(_BYTE *)(v6 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v27 )
    MiReleasePageFileInfo(v10, v27, v9);
  v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
  v12 = 48 * v11 - 0x58000000000LL;
  v27 = *(_QWORD *)(v12 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v15 = v14 + 48 * ContainingPageTable;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(v15 + 24) < 0 );
  }
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 5;
  v17 = *(_BYTE *)(v12 + 34) >> 6;
  if ( v17 != 1 )
  {
    if ( v17 )
    {
      if ( v17 == 2 )
        v16 |= 0x18u;
    }
    else
    {
      v16 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, v11, v16);
  if ( (unsigned int)MiAllocateWsle(a2, a1, (_QWORD *)(48 * v11 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v11 - 0x58000000000LL, 0);
  MiLockAndDecrementShareCount(v15, 0);
  return 0LL;
}
