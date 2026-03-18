/*
 * XREFs of VrpDereferenceJobContext @ 0x14084134C
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x140281040 (VrpOriginalKeyNameParameterCleanup.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
