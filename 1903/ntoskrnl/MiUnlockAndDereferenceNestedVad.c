/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1402E563C
 * Callers:
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x1402E55B0 (MiDereferenceVad.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUnlockNestedVad @ 0x14089B8BC (MiUnlockNestedVad.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx
  __int64 v3; // rcx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(v3);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
