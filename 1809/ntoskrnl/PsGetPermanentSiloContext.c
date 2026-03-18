/*
 * XREFs of PsGetPermanentSiloContext @ 0x14010A080
 * Callers:
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     CmLockKeyForWrite @ 0x14068E380 (CmLockKeyForWrite.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14068E570 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14073094C (CmpGetOrCreateContextForSiloNoRef.c)
 *     ObInitServerSilo @ 0x140759EC0 (ObInitServerSilo.c)
 *     CmGetRootKeyObjectForSilo @ 0x1407F6BF0 (CmGetRootKeyObjectForSilo.c)
 *     VRegEnabledInJob @ 0x14080831C (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080856C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408088C4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140809090 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408095B4 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1408098D0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870F4 (PspDeleteExternalServerSiloState.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906238 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_14055B988;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
