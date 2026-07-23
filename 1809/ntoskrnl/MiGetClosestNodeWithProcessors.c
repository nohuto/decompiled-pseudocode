/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x1402BB9D4
 * Callers:
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 *     MiCreateColorAnchors @ 0x14085E1C4 (MiCreateColorAnchors.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(unsigned int a1)
{
  USHORT *v3; // rbx
  USHORT *v4; // rsi
  USHORT v5; // di
  USHORT Count; // [rsp+38h] [rbp+10h] BYREF

  KeQueryNodeActiveAffinity(a1, 0LL, &Count);
  if ( Count )
    return a1;
  v3 = (USHORT *)((char *)qword_14043B110 + 2 * a1 * (unsigned __int16)KeNumberNodes);
  v4 = &v3[(unsigned __int16)KeNumberNodes];
  do
  {
    if ( ++v3 >= v4 )
      return 0xFFFFFFFFLL;
    v5 = *v3;
    KeQueryNodeActiveAffinity(*v3, 0LL, &Count);
  }
  while ( !Count );
  return v5;
}
