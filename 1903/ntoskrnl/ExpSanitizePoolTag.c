/*
 * XREFs of ExpSanitizePoolTag @ 0x14033994C
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSanitizePoolTag(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0x7FFFFFFF;
  if ( !v1 )
    return 811884866;
  return v1;
}
