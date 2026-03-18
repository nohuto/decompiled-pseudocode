/*
 * XREFs of MiRevokeExecutePte @ 0x14008D910
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiGetPfnProtection @ 0x14008DC70 (MiGetPfnProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
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
      v5 = MI_READ_PTE_LOCK_FREE(&v7);
      if ( (MiGetPfnProtection(0xFFFFFFFFFLL, v4, 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 2) == 0 )
      {
        MiWriteValidPteNewProtection(a2);
        MiInsertTbFlushEntry(*(_QWORD *)(a1 + 160), v4, 1LL, 0);
      }
    }
  }
  return 0LL;
}
