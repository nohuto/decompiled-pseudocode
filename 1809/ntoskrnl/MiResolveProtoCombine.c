/*
 * XREFs of MiResolveProtoCombine @ 0x14007BF64
 * Callers:
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiMakeTransitionPteValid @ 0x14002CF4C (MiMakeTransitionPteValid.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  char v10; // r14
  struct _KEVENT *v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 v14; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rbx
  int v20; // eax
  char v21; // cl
  unsigned __int64 ValidPte; // rax
  char v24; // al
  __int64 TransitionPteValid; // rax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // r9
  int v30; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-18h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h] BYREF
  int v33; // [rsp+A8h] [rbp+48h] BYREF

  v31 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v7 = MiLockLeafPage(a3, 0LL);
  if ( !v7 )
    goto LABEL_30;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v10 = 1;
  v32 = v8;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x400) == 0 && (v8 & 0x800) != 0 )
    {
      v11 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiUnlinkPageFromList(v7, 0) )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
          v24 = *(_BYTE *)(v7 + 34);
          ++*(_WORD *)(v7 + 32);
          *(_BYTE *)(v7 + 34) = v24 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((__int64)a3);
          v26 = *(_DWORD *)(v7 + 16);
          v32 = TransitionPteValid;
          if ( (v26 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v11, *(_QWORD *)(v7 + 16)) )
            v31 = MiCaptureDirtyBitToPfn(v7);
          if ( !MiPteInShadowRange((unsigned __int64)a3) )
          {
            v10 = v9 + 1;
            goto LABEL_26;
          }
          v10 = 1;
          if ( (unsigned int)MiPteHasShadow(v28, v27) )
          {
            v9 = 1LL;
            if ( !HIBYTE(word_14043B26C) )
              goto LABEL_34;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
LABEL_34:
            if ( (v29 & 1) != 0 )
              v27 |= 0x8000000000000000uLL;
          }
LABEL_26:
          *a3 = v27;
          if ( (_DWORD)v9 )
            MiWritePteShadow(a3);
          goto LABEL_5;
        }
        MiDiscardTransitionPte(v7);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  v11 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
LABEL_5:
  v12 = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v12 ^ ((v12 + 1) ^ v12) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33, v12, v9);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  *(_BYTE *)(v6 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v31 )
    MiReleasePageFileInfo(v11, v31, v10);
  v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v13 - 0x58000000000LL;
  v31 = *(_QWORD *)(v14 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v19 = v18 + 48 * ContainingPageTable;
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30, v16, v17);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = (unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 5;
  v21 = *(_BYTE *)(v14 + 34) >> 6;
  if ( v21 != 1 )
  {
    if ( v21 )
    {
      if ( v21 == 2 )
        v20 |= 0x18u;
    }
    else
    {
      v20 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, v13, v20);
  if ( (unsigned int)MiAllocateWsle(a2, a1, (_QWORD *)(48 * v13 - 0x58000000000LL), 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v13 - 0x58000000000LL, 0LL);
  MiLockAndDecrementShareCount(v19, 0LL);
  return 0LL;
}
