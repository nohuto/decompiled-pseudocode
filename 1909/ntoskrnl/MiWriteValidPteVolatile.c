/*
 * XREFs of MiWriteValidPteVolatile @ 0x1400FA460
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400956A8 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiLockOwnedProtoPage @ 0x1400CF120 (MiLockOwnedProtoPage.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiWriteWsle @ 0x1400FA424 (MiWriteWsle.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v7 = a2 & 2;
  do
  {
    v8 = v3;
    if ( v4 )
      v8 = v3 ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    v10 = v9 | 0x42;
    if ( !v7 )
      v10 = v9;
    result = _InterlockedCompareExchange64(a1, v10, v3);
    v11 = v3 == result;
    v3 = result;
  }
  while ( !v11 );
  return result;
}
