/*
 * XREFs of MiRevokeExecutePte @ 0x14011FD50
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiGetPfnProtection @ 0x14011FE00 (MiGetPfnProtection.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (__int64)(a2 << 25) >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v8 = MI_READ_PTE_LOCK_FREE(a2);
    if ( v8 >= 0 )
    {
      v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8);
      if ( (MiGetPfnProtection(0xFFFFFFFFFLL, v4, 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 2) == 0 )
      {
        MiWriteValidPteNewProtection(a2, v6 | 0x8000000000000000uLL);
        MiInsertTbFlushEntry(*(_QWORD *)(a1 + 168), v4, 1LL, 0);
      }
    }
  }
  return 0LL;
}
