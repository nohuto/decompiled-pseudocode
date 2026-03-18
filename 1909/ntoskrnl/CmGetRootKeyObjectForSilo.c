/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x14082F790
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 */

PVOID __fastcall CmGetRootKeyObjectForSilo(__int64 a1)
{
  unsigned __int64 v1; // rbx
  void *v2; // rcx
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v4);
  v1 = v4;
  if ( v4 && (v2 = *(void **)(v4 + 32)) != 0LL )
  {
    ObfReferenceObject(v2);
    return *(PVOID *)(v1 + 32);
  }
  else
  {
    ObfReferenceObject(CmpRegistryRootObject);
    return CmpRegistryRootObject;
  }
}
