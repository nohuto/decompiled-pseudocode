/*
 * XREFs of StorpGetCurrentProcessorIndex @ 0x1C0040694
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetCurrentProcessorIndex(__int64 a1, _DWORD *a2)
{
  int LockArray_high; // eax

  if ( !a2 )
    return 3238002694LL;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  *a2 = LockArray_high;
  if ( LockArray_high == -1 )
    return 3238002694LL;
  else
    return 0LL;
}
