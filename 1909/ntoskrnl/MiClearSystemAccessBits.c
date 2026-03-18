/*
 * XREFs of MiClearSystemAccessBits @ 0x140186E14
 * Callers:
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiClearSystemAccessBits(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  signed __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 i; // rdi
  _QWORD v13[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v13, 0, 0xB8uLL);
  v13[3] = 0LL;
  LODWORD(v13[1]) = 20;
  v9 = (__int64)(a1 << 25) >> 16;
  if ( a2 )
  {
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(a1);
      if ( (v10 & 0x20) != 0 )
        _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10 & 0xFFFFFFFFFFFFFFDFuLL, v10);
      a1 += 8LL;
      v8 = v11 - 1;
    }
    while ( v8 );
  }
  if ( a3 )
  {
    for ( i = a1 - 8 * a2; a2; --a2 )
    {
      MiInsertLargeTbFlushEntry((__int64)v13, a3, i);
      i += 8LL;
    }
  }
  else
  {
    MiInsertTbFlushEntry((__int64)v13, v9, a2, 0);
  }
  MiFlushTbList((int *)v13, v6, v7, v8);
}
