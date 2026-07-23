/*
 * XREFs of MiInsertLargeUserMapping @ 0x1402C59E0
 * Callers:
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B5940 (MiLockWorkingSetForLargeMapping.c)
 */

void __fastcall MiInsertLargeUserMapping(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  int v9; // r12d
  unsigned __int16 *v10; // rsi
  int v11; // r9d
  unsigned __int8 v12; // al
  __int64 v13; // r9
  unsigned __int8 v14; // bp
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  unsigned __int64 v27; // [rsp+80h] [rbp+8h]
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h] BYREF

  v29 = a3;
  v28 = a2;
  v5 = a4;
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v27 = v6 + 48 * MiLargePageSizes[v5];
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  if ( v11 )
  {
    v12 = MiLockWorkingSetShared((__int64)v10);
  }
  else
  {
    v9 = 1;
    v12 = MiLockWorkingSetForLargeMapping((__int64)v10);
  }
  v14 = v12;
  if ( (_DWORD)v5 != 1 )
  {
    v15 = (unsigned int)(1 - v5);
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v15;
    }
    while ( v15 );
  }
  v16 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOBYTE(v13) = v12;
  MiMakeSystemAddressValid(v8, 0LL, v29, v13, v9);
  v17 = MI_READ_PTE_LOCK_FREE(v16);
  MiIncreaseUsedPtesCount(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL, v18);
  v21 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v16) >> 12) & 0xFFFFFFFFFLL;
  do
  {
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30, v19, v20);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
    v22 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(v6 + 24) = v22 | 1;
    *(_WORD *)(v6 + 32) = 2;
    *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
    *(_QWORD *)(v6 + 16) = ZeroPte;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
    *(_QWORD *)(v6 + 40) = v21 | *(_QWORD *)(v6 + 40) & 0xFE7FFFF000000000uLL | 0x40000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 += 8LL;
    v6 += 48LL;
  }
  while ( v6 < v27 );
  if ( MiPteInShadowRange(v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1LL;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_20;
      v26 = (v23 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_20;
      v26 = (v23 & 1) == 0;
    }
    if ( !v26 )
      v23 |= 0x8000000000000000uLL;
  }
LABEL_20:
  *(_QWORD *)v8 = v23;
  if ( (_DWORD)v24 )
    MiWritePteShadow(v8, v23);
  if ( v9 )
  {
    MiUnlockWorkingSetExclusive((__int64)v10, v14, v24, v25);
  }
  else
  {
    MiUnlockPageTableInternal((__int64)v10, v16);
    MiUnlockWorkingSetShared((__int64)v10, v14);
  }
}
