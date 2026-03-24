/*
 * XREFs of VrpDereferenceJobContext @ 0x14080842C
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x14026D810 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
