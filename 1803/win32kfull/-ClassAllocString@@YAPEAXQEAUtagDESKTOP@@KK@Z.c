/*
 * XREFs of ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C001C07C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C001B870 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C00F03B0 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ClassAllocString(PVOID *a1, unsigned int a2)
{
  if ( a1 )
    return RtlAllocateHeap(a1[16], 0, a2);
  else
    return (PVOID)Win32AllocPoolZInit(a2, 1818456917LL);
}
