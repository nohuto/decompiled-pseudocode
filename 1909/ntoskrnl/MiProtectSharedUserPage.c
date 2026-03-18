/*
 * XREFs of MiProtectSharedUserPage @ 0x140A229A0
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  unsigned __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_1404658EC )
  {
    v5[3] = 0LL;
    LODWORD(v5[1]) = 20;
    MiWriteValidPteNewProtection(v1);
    MiInsertTbFlushEntry((__int64)v5, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((int *)v5, v2, v3, v4);
  }
}
