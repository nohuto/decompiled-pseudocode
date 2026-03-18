/*
 * XREFs of PsGetJobSilo @ 0x140307C10
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140841E7C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408421E8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140842460 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140842924 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140842E64 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x140306C3C (PspGetJobSilo.c)
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
