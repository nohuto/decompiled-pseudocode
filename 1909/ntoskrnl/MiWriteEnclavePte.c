/*
 * XREFs of MiWriteEnclavePte @ 0x1402D5188
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiUpdateAwePageTable @ 0x1402D7A38 (MiUpdateAwePageTable.c)
 */

struct _KTHREAD *__fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int16 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r15
  struct _KTHREAD *result; // rax
  int v13; // edx
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 v16; // r8

  v9 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v10 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)v9);
    MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x3F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( a4 )
  {
    result = MiWriteValidPteNewProtection(BugCheckParameter4);
    goto LABEL_21;
  }
  MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
  v15 = 1LL;
  if ( MiPteInShadowRange(BugCheckParameter4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
LABEL_11:
        if ( (a2 & 1) != 0 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_11;
    }
  }
  *(_QWORD *)BugCheckParameter4 = a2;
  if ( v13 )
    MiWritePteShadow(BugCheckParameter4);
  v16 = 0LL;
  if ( v14 )
  {
    if ( (v14 & 0xC00) == 0x800 )
      v15 = 0LL;
  }
  else
  {
    v16 = 1LL;
  }
  result = (struct _KTHREAD *)(v15 | (unsigned int)v16);
  if ( result )
    result = (struct _KTHREAD *)MiUpdateAwePageTable(v10, v15, v16);
LABEL_21:
  if ( a5 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return (struct _KTHREAD *)MiUnlockWorkingSetShared((__int64)v9, v11);
  }
  return result;
}
