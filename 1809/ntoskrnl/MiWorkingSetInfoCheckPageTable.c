/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1402BF4D4
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, char a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v15[0] = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v15[0] & 0x800;
  if ( (v15[0] & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset((unsigned __int64)v15) )
  {
    if ( (a4 & 1) != 0 )
    {
      v11 = *(_QWORD *)(v9 + 8) | 0x200000LL;
      *(_QWORD *)(v9 + 8) = v11;
      if ( v10 )
        v12 = v11 & 0xFFFFFFFFFF3FFFFFuLL | 0x400000;
      else
        v12 = v11 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      *(_QWORD *)(v9 + 8) = v12;
    }
    else if ( (a4 & 2) != 0 )
    {
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v13) = a5;
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0LL, 0, v13, 0);
      MiUnlockPageTableInternal(a1, a2);
      return 1;
    }
  }
  return v8;
}
