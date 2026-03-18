/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1402E539C
 * Callers:
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x1402E5310 (MiDereferenceVad.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUnlockNestedVad @ 0x14089B0DC (MiUnlockNestedVad.c)
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
