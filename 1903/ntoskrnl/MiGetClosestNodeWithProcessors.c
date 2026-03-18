/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x1402D1D78
 * Callers:
 *     MiZeroInParallel @ 0x140123178 (MiZeroInParallel.c)
 *     MiCreateColorAnchors @ 0x1402DF124 (MiCreateColorAnchors.c)
 *     MiComputeIdealDpcGang @ 0x1402E83AC (MiComputeIdealDpcGang.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1401089A0 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int *v3; // rdi
  unsigned int *v4; // rsi
  USHORT Count; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  KeQueryNodeActiveAffinity(a1, 0LL, &Count);
  if ( Count )
    return v1;
  v3 = (unsigned int *)(qword_140465A50 + 4LL * v1 * (unsigned __int16)KeNumberNodes);
  v4 = &v3[(unsigned __int16)KeNumberNodes];
  while ( ++v3 < v4 )
  {
    v1 = *v3;
    KeQueryNodeActiveAffinity(*v3, 0LL, &Count);
    if ( Count )
      return v1;
  }
  return 0xFFFFFFFFLL;
}
