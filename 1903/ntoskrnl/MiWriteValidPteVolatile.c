/*
 * XREFs of MiWriteValidPteVolatile @ 0x1400F69C0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiCheckProtoPtePageState @ 0x140054900 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiLockOwnedProtoPage @ 0x140091DC0 (MiLockOwnedProtoPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400A8124 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiWriteWsle @ 0x1400F6984 (MiWriteWsle.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
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
