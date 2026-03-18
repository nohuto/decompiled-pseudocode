/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1402CB014
 * Callers:
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x1402CAFC4 (MiDereferenceVad.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiUnlockNestedVad @ 0x14085EA1C (MiUnlockNestedVad.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(v3);
  if ( v2 == 1 )
    ExFreePoolWithTag(P, 0);
}
