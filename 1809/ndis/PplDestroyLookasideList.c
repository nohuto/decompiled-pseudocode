/*
 * XREFs of PplDestroyLookasideList @ 0x1C00826FC
 * Callers:
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00CF3A4 (ndisMInitializeScatterGatherDma.c)
 * Callees:
 *     PplpFreeOneLookasideList @ 0x1C0082958 (PplpFreeOneLookasideList.c)
 */

void __fastcall PplDestroyLookasideList(_QWORD *P)
{
  char *v1; // r14
  signed int MaximumProcessorCount; // eax
  int v4; // ebx
  PVOID *v5; // rdi

  if ( P )
  {
    v1 = (char *)P[4];
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v4 = MaximumProcessorCount;
    if ( MaximumProcessorCount >= 0 )
    {
      v5 = (PVOID *)&v1[8 * MaximumProcessorCount];
      do
      {
        if ( *v5 )
        {
          PplpFreeOneLookasideList(*v5, 0x6264444Eu);
          *v5 = 0LL;
        }
        --v5;
        --v4;
      }
      while ( v4 >= 0 );
    }
    ExFreePoolWithTag(v1, 0x6264444Eu);
    ExFreePoolWithTag(P, 0x6264444Eu);
  }
}
