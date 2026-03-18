/*
 * XREFs of PsGetPermanentSiloContext @ 0x1400FF140
 * Callers:
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     CmLockKeyForWrite @ 0x14073A04C (CmLockKeyForWrite.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077C368 (CmpGetOrCreateContextForSiloNoRef.c)
 *     ObInitServerSilo @ 0x140780C34 (ObInitServerSilo.c)
 *     CmGetRootKeyObjectForSilo @ 0x14082F920 (CmGetRootKeyObjectForSilo.c)
 *     VRegEnabledInJob @ 0x140841BBC (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140841E7C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408421E8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140842924 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140842E64 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C5494 (PspDeleteExternalServerSiloState.c)
 *     ObGetSiloRootDirectoryPath @ 0x14094485C (ObGetSiloRootDirectoryPath.c)
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
    v3 = qword_14058C978;
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
