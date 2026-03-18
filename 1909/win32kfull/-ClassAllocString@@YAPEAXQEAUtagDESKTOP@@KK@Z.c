/*
 * XREFs of ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C0036D74
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0038490 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C00EC900 (ReferenceClass.c)
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
