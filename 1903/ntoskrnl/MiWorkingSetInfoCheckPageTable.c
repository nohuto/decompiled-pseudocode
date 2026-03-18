/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1402D8CA4
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v13[0] = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v13[0] & 0x800;
  if ( (v13[0] & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset((unsigned __int64)v13) )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( v10 )
        v11 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0x600000;
      else
        v11 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0xA00000;
      *(_QWORD *)(v9 + 8) = v11;
    }
    else if ( (a4 & 2) != 0 )
    {
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0LL, 0, a5, 0);
      MiUnlockPageTableInternal(a1, a2);
      return 1;
    }
  }
  return v8;
}
