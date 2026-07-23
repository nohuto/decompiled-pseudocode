/*
 * XREFs of RtlHpHeapManagerCleanup @ 0x140154AF4
 * Callers:
 *     ExCleanupSessionHeapManager @ 0x140154554 (ExCleanupSessionHeapManager.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x1401545C4 (RtlpHpHeapDestroy.c)
 *     RtlCSparseBitmapCleanup @ 0x1401591AC (RtlCSparseBitmapCleanup.c)
 */

__int64 __fastcall RtlHpHeapManagerCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rsi

  v5 = (__int64 *)(a1 + 12432);
  v6 = 3LL;
  do
  {
    if ( *v5 )
      RtlpHpHeapDestroy(*v5, a2, a3, a4);
    v5 += 2;
    --v6;
  }
  while ( v6 );
  RtlCSparseBitmapCleanup(a1 + 8);
  return RtlCSparseBitmapCleanup(a1 + 96);
}
