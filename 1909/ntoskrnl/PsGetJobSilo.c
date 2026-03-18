/*
 * XREFs of PsGetJobSilo @ 0x1403076C0
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408414DC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140841848 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140841AC0 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140841F84 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408424D8 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14084280C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x1403066EC (PspGetJobSilo.c)
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
