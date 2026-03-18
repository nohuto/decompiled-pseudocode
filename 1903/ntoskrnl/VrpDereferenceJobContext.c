/*
 * XREFs of VrpDereferenceJobContext @ 0x140841CEC
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x1402812E0 (VrpOriginalKeyNameParameterCleanup.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
