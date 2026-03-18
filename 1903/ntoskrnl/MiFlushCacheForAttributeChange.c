/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14015B120
 * Callers:
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiFlushCacheRange @ 0x1402DE178 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400B8B20 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushHyperSpace @ 0x14017E198 (MiFlushHyperSpace.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a2 )
  {
    v7 = -805306366;
    if ( (_DWORD)a3 != 2 )
      v7 = -1073741824;
    do
    {
      v8 = MiMapPageInHyperSpaceWorker(v6, 0LL, v7);
      KeInvalidateRangeAllCachesNoIpi(v8, 0x1000u);
      LOBYTE(v9) = 17;
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000LL);
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  if ( v4 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace(a1, a2, a3);
  return result;
}
