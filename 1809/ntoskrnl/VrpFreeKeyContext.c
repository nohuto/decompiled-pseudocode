/*
 * XREFs of VrpFreeKeyContext @ 0x1408084B0
 * Callers:
 *     VrpRegistryCallback @ 0x140808010 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808CA0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14080AE64 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF990 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VrpDecommissionKeyContext @ 0x140808418 (VrpDecommissionKeyContext.c)
 */

void __fastcall VrpFreeKeyContext(UNICODE_STRING *P)
{
  VrpDecommissionKeyContext(P);
  ObDereferenceObjectDeferDeleteWithTag(P[2].Buffer, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
