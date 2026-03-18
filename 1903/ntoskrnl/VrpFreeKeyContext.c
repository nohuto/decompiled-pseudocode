/*
 * XREFs of VrpFreeKeyContext @ 0x140841D50
 * Callers:
 *     VrpRegistryCallback @ 0x1408418A0 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1408447F8 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VrpDecommissionKeyContext @ 0x140841CB8 (VrpDecommissionKeyContext.c)
 */

void __fastcall VrpFreeKeyContext(UNICODE_STRING *P)
{
  VrpDecommissionKeyContext(P);
  ObDereferenceObjectDeferDeleteWithTag(P[2].Buffer, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
