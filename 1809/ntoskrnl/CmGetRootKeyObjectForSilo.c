/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x1407F6BF0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808CA0 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     PsGetPermanentSiloContext @ 0x14010A080 (PsGetPermanentSiloContext.c)
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 */

__int64 CmGetRootKeyObjectForSilo()
{
  __int64 v0; // r9
  void *v1; // rcx
  __int64 v2; // r8
  PVOID v4[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  CmpInitializeThreadInfo(v4);
  v5 = 0LL;
  PsGetPermanentSiloContext(v0, CmpSiloContextSlot, &v5);
  if ( v5 && (v1 = *(void **)(v5 + 32)) != 0LL )
    ObfReferenceObject(v1);
  else
    ObfReferenceObject(CmpRegistryRootObject);
  CmCleanupThreadInfo(v4);
  return v2;
}
