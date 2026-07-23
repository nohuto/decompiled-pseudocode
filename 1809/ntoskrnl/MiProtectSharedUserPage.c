/*
 * XREFs of MiProtectSharedUserPage @ 0x1409E0218
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  unsigned __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+24h] [rbp-D4h]
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8; // [rsp+30h] [rbp-C8h]
  __int64 v9; // [rsp+38h] [rbp-C0h]

  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_14043B26C )
  {
    v7 = 20LL;
    v5 = 0;
    v6 = 0;
    v8 = 0LL;
    v9 = 0LL;
    MiWriteValidPteNewProtection(v1, v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_14043B26C & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)&v5, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList(&v5, v2, v3, v4);
  }
}
