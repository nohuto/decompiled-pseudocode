/*
 * XREFs of MiWriteEnclavePte @ 0x1402BEC18
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiUpdateAwePageTable @ 0x1402B2338 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiWriteEnclavePte(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int16 *v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // r9
  unsigned __int8 v12; // r15
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // r11
  __int64 v16; // rdi
  unsigned int v17; // r8d

  v9 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    LOBYTE(v11) = MiLockWorkingSetShared((__int64)v9);
    v12 = v11;
    MiMakeSystemAddressValid(a1, 0LL, (*(_DWORD *)(a3 + 48) >> 8) & 0x3F, v11, 0);
  }
  else
  {
    v12 = 17;
  }
  if ( a4 )
  {
    result = (__int64)MiWriteValidPteNewProtection(a1, a2);
    goto LABEL_21;
  }
  MI_READ_PTE_LOCK_FREE(a1);
  v16 = 1LL;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_11:
        if ( (a2 & 1) != 0 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_11;
    }
  }
  *(_QWORD *)a1 = a2;
  if ( v14 )
    MiWritePteShadow(a1, a2);
  v17 = 0;
  if ( v15 )
  {
    if ( (v15 & 0xC00) == 0x800 )
      v16 = 0LL;
  }
  else
  {
    v17 = 1;
  }
  result = v16 | v17;
  if ( result )
    result = MiUpdateAwePageTable(v10, v16, v17);
LABEL_21:
  if ( a5 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return MiUnlockWorkingSetShared((__int64)v9, v12);
  }
  return result;
}
