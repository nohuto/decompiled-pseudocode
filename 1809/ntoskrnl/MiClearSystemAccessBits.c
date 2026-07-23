/*
 * XREFs of MiClearSystemAccessBits @ 0x140184B5C
 * Callers:
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiClearSystemAccessBits(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  signed __int64 v7; // rax
  volatile signed __int64 *v8; // r9
  __int64 v9; // r11
  unsigned __int64 i; // rdi
  int v11; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v12; // [rsp+24h] [rbp-D4h]
  int v13; // [rsp+28h] [rbp-D0h]
  int v14; // [rsp+2Ch] [rbp-CCh]
  __int64 v15; // [rsp+30h] [rbp-C8h]
  __int64 v16; // [rsp+38h] [rbp-C0h]

  v14 = 0;
  v11 = 0;
  v3 = a3;
  v12 = 0;
  v4 = a2;
  v15 = 0LL;
  v5 = a1;
  v16 = 0LL;
  v13 = 20;
  v6 = (__int64)(a1 << 25) >> 16;
  if ( a2 )
  {
    do
    {
      v7 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v7 & 0x20) != 0 )
        _InterlockedCompareExchange64(v8, v7 & 0xFFFFFFFFFFFFFFDFuLL, v7);
      v5 = (unsigned __int64)(v8 + 1);
    }
    while ( v9 != 1 );
  }
  if ( v3 )
  {
    for ( i = v5 - 8 * v4; v4; --v4 )
    {
      MiInsertLargeTbFlushEntry((__int64)&v11, v3, i);
      i += 8LL;
    }
  }
  else
  {
    MiInsertTbFlushEntry((__int64)&v11, v6, v4, 0);
  }
  MiFlushTbList(&v11, a2, a3, v5);
}
