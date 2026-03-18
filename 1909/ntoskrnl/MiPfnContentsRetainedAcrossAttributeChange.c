/*
 * XREFs of MiPfnContentsRetainedAcrossAttributeChange @ 0x1402DAFD8
 * Callers:
 *     MiFreeLargePageMemory @ 0x140146DD8 (MiFreeLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnContentsRetainedAcrossAttributeChange(__int64 a1, int a2)
{
  int v2; // ecx

  v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
  return v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140465898) == 0;
}
