/*
 * XREFs of KiFlushCacheLines @ 0x1401C85E0
 * Callers:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140098990 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KiFlushCacheLines @ 0x1401C85E0 (KiFlushCacheLines.c)
 * Callees:
 *     <none>
 */

void __fastcall KiFlushCacheLines(__int64 _RCX, __int64 a2, __int64 a3)
{
  do
  {
    __asm { clflushopt byte ptr [rcx] }
    _RCX += a3;
    a2 -= a3;
  }
  while ( a2 );
  _mm_sfence();
}
