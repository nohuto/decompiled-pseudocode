/*
 * XREFs of MiPerformSafePdeWrite @ 0x14015D2F4
 * Callers:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019C2A4 (MiGetWsAndMakePageTablesNx.c)
 *     MiValidVirtualizationFault @ 0x1402D2E04 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

struct _KTHREAD *__fastcall MiPerformSafePdeWrite(__int64 a1, unsigned __int64 a2, signed __int64 a3, char a4)
{
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  signed __int64 v14; // rdx
  struct _KTHREAD *result; // rax
  _BYTE v16[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v16, 0, sizeof(v16));
  v7 = (__int64)(a2 << 25) >> 16;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    return MiWriteValidPteNewProtection(a2);
  v8 = a4 & 1;
  v9 = a4 & 2;
  v10 = a4 & 4;
  do
  {
    v11 = (struct _KTHREAD *)a3;
    v12 = a3 | 0x20;
    if ( !v8 )
      v12 = a3;
    v13 = v12 | 0x8000000000000000uLL;
    if ( !v9 )
      v13 = v12;
    v14 = v13 | 4;
    if ( !v10 )
      v14 = v13;
    result = (struct _KTHREAD *)_InterlockedCompareExchange64((volatile signed __int64 *)a2, v14, a3);
    a3 = (signed __int64)result;
  }
  while ( result != v11 );
  return result;
}
