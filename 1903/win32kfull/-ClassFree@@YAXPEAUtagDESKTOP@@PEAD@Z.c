/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C0094478
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0097760 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     ReferenceClass @ 0x1C0111A50 (ReferenceClass.c)
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
