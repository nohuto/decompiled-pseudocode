/*
 * XREFs of MiCommitEnclavePages @ 0x1402D35E0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // r13
  unsigned int v10; // ebx
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int16 *v14; // rsi
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r15
  bool v17; // zf
  unsigned __int64 v18; // rax
  unsigned __int8 v20[8]; // [rsp+80h] [rbp+28h]

  if ( a5 != 4096 )
    return 3221225715LL;
  v7 = a6;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v11 = v8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v15 = MiLockWorkingSetShared((__int64)v14);
  v20[0] = v15;
  if ( v8 > v9 )
    goto LABEL_27;
  v16 = v15;
  do
  {
    if ( (v11 & 0x78) == 0 && v11 != v8 )
    {
      if ( MiWorkingSetIsContended((__int64)v14) || KeShouldYieldProcessor() )
        goto LABEL_14;
      if ( !v13 )
        goto LABEL_20;
      if ( (unsigned int)MiPageTableLockIsContended((__int64)v14, v13) )
      {
LABEL_14:
        if ( v13 )
        {
          MiUnlockPageTableInternal((__int64)v14, v13);
          v13 = 0LL;
        }
        MiUnlockWorkingSetShared((__int64)v14, v16);
        MiLockWorkingSetShared((__int64)v14);
      }
    }
    if ( v13 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_21;
      MiUnlockPageTableInternal((__int64)v14, v13);
    }
LABEL_20:
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v16, 0);
LABEL_21:
    v17 = (MI_READ_PTE_LOCK_FREE(v11) & 1) == 0;
    v18 = v12 + 1;
    if ( !v17 )
      v18 = v12;
    v11 += 8LL;
    v12 = v18;
  }
  while ( v11 <= v9 );
  v7 = a6;
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v14, v13);
  v15 = v20[0];
LABEL_27:
  MiUnlockWorkingSetShared((__int64)v14, v15);
  if ( v12 )
    return (unsigned int)MiAddPagesToEnclave(a2, v12, v8, v9, v7);
  return v10;
}
