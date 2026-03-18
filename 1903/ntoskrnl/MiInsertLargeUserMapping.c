/*
 * XREFs of MiInsertLargeUserMapping @ 0x1402DFE84
 * Callers:
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F4A0 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8E18 (MiLockWorkingSetForLargeMapping.c)
 */

void __fastcall MiInsertLargeUserMapping(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v10; // rsi
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  unsigned __int64 ValidPte; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  int v21; // r15d
  unsigned __int16 *v22; // rbp
  unsigned __int8 v23; // si
  unsigned __int8 v24; // al
  unsigned __int64 UsedPtesHandle; // rax
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx

  v10 = 48 * a3 - 0x58000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v11;
  if ( a4 != 2 )
  {
    v13 = 2 - a4;
    do
    {
      v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v13;
    }
    while ( v13 );
  }
  v14 = a5 | 0x80000000;
  if ( (*(_DWORD *)(a1 + 48) & 0x300000) == 0x300000 )
    v14 = a5;
  v15 = v14 | 0x4000000;
  if ( a4 > 1 )
    v15 = v14;
  ValidPte = MiMakeValidPte(v11, a3, v15);
  v20 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = 0;
  v22 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  if ( a7 )
  {
    v23 = 17;
  }
  else
  {
    if ( a4 )
    {
      v24 = MiLockWorkingSetShared((__int64)v22);
    }
    else
    {
      v21 = 1;
      v24 = MiLockWorkingSetForLargeMapping((__int64)v22, v16, *(_QWORD *)(v10 + 40) >> 58);
    }
    v23 = v24;
    if ( v24 != 17 )
      MiMakeSystemAddressValid(v12, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x3F, v24, v21);
  }
  if ( (v12 < 0xFFFFF6FB7DBED000uLL || v12 > 0xFFFFF6FB7DBEDFFFuLL) && !MI_READ_PTE_LOCK_FREE(v12) )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v12 << 25) >> 16);
    v26 = 16;
    if ( a4 != 2 )
      v26 = 1;
    MiIncreaseUsedPtesCount(UsedPtesHandle, v26);
  }
  if ( a4 == 2 )
  {
    v27 = v12 + 128;
    while ( v12 < v27 )
    {
      *(_QWORD *)v12 = ValidPte;
      v16 = 0xFFFFFFFFF000LL;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      v12 += 8LL;
    }
    goto LABEL_35;
  }
  if ( MiPteInShadowRange(v12) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1LL;
      if ( !HIBYTE(word_140465BEC) )
      {
LABEL_31:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_31;
    }
  }
  *(_QWORD *)v12 = ValidPte;
  if ( (_DWORD)v16 )
    MiWritePteShadow(v12);
LABEL_35:
  if ( v23 != 17 )
  {
    if ( v21 )
    {
      LOBYTE(v16) = v23;
      MiUnlockWorkingSetExclusive((__int64)v22, v16, v18, v19);
    }
    else
    {
      MiUnlockPageTableInternal((__int64)v22, v20);
      MiUnlockWorkingSetShared((__int64)v22, v23);
    }
  }
}
