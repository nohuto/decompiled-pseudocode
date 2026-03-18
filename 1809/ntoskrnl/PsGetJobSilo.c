/*
 * XREFs of PsGetJobSilo @ 0x1402EA020
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080856C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408088C4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140808B2C (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808CA0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140809090 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408095B4 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1408098D0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E955C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v3; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo(a1);
  if ( !JobSilo )
    return 3221226761LL;
  *v3 = JobSilo;
  return 0LL;
}
