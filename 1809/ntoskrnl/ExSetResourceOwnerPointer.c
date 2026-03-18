/*
 * XREFs of ExSetResourceOwnerPointer @ 0x140166890
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x1407E8820 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x14010A2A0 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer, 0);
}
