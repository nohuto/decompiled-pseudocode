/*
 * XREFs of MiRevokeExecutePte @ 0x1400CA8C0
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnProtection @ 0x1400CAE80 (MiGetPfnProtection.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (__int64)(a2 << 25) >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v7 = MI_READ_PTE_LOCK_FREE(a2);
    if ( v7 >= 0 )
    {
      v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
      if ( (MiGetPfnProtection(0xFFFFFFFFFLL, v4, 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 2) == 0 )
      {
        MiWriteValidPteNewProtection(a2);
        MiInsertTbFlushEntry(*(_QWORD *)(a1 + 160), v4, 1LL, 0);
      }
    }
  }
  return 0LL;
}
