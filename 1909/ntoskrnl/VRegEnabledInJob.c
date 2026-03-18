/*
 * XREFs of VRegEnabledInJob @ 0x14084121C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140840BD0 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x14084115C (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408414DC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140841848 (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x1408C43A0 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 HostSilo; // rdi

  CurrentSilo = PsGetCurrentSilo();
  HostSilo = PsGetHostSilo();
  if ( CurrentSilo == (struct _LIST_ENTRY *)HostSilo )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == (struct _LIST_ENTRY *)HostSilo )
      return 0LL;
  }
  return 1LL;
}
