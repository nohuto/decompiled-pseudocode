/*
 * XREFs of SdbpCloseLocalDatabaseEx @ 0x1408E9448
 * Callers:
 *     SdbpCleanupLocalDatabaseSupport @ 0x140681DE4 (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1408E94D8 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     SdbCloseDatabaseRead @ 0x140681C54 (SdbCloseDatabaseRead.c)
 */

__int64 __fastcall SdbpCloseLocalDatabaseEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rcx

  v3 = a3;
  if ( a3 >= 0x10 || ((1 << a3) & *(_DWORD *)(a1 + 28)) == 0 )
    return 0LL;
  v5 = a1 + 32 * (a3 + 1LL);
  if ( (*(_DWORD *)(v5 + 24) & 2) != 0 )
  {
    v6 = *(_QWORD **)(v5 + 16);
    if ( v6 )
      SdbCloseDatabaseRead(v6);
  }
  memset((void *)(a1 + 32 * (v3 + 1)), 0, 0x20uLL);
  *(_DWORD *)(a1 + 28) &= ~(1 << v3);
  if ( (_DWORD)v3 == 1 )
    *(_QWORD *)(a1 + 16) = 0LL;
  return 1LL;
}
