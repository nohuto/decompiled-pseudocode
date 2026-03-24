/*
 * XREFs of VRegEnabledInJob @ 0x1408082FC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140807CC0 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x14080823C (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080854C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408088A4 (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     PsGetHostSilo @ 0x140091C70 (PsGetHostSilo.c)
 *     PsGetPermanentSiloContext @ 0x14010A0A0 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x140886710 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 HostSilo; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentSilo = PsGetCurrentSilo();
  HostSilo = PsGetHostSilo();
  if ( CurrentSilo == (struct _LIST_ENTRY *)HostSilo )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo, v4, v5, v6);
    if ( CurrentSilo == (struct _LIST_ENTRY *)HostSilo )
      return 0LL;
  }
  return 1LL;
}
