/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C0116A3C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0021AE8 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     ReferenceClass @ 0x1C0109980 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, char *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[16], 0, a2);
  else
    Win32FreePool(a2);
}
