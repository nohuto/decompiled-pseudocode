/*
 * XREFs of ExpAssignPasid @ 0x1408D83AC
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x14031E008 (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 436, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
