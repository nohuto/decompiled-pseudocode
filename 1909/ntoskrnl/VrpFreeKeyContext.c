/*
 * XREFs of VrpFreeKeyContext @ 0x1408413B0
 * Callers:
 *     VrpRegistryCallback @ 0x140840F00 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x140843E6C (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VrpDecommissionKeyContext @ 0x140841318 (VrpDecommissionKeyContext.c)
 */

void __fastcall VrpFreeKeyContext(UNICODE_STRING *P)
{
  VrpDecommissionKeyContext(P);
  ObDereferenceObjectDeferDeleteWithTag(P[2].Buffer, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
