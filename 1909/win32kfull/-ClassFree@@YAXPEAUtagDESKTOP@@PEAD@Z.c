/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00351A8
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0038490 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 *     ReferenceClass @ 0x1C00EC900 (ReferenceClass.c)
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
