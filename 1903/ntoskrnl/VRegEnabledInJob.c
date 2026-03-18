/*
 * XREFs of VRegEnabledInJob @ 0x140841BBC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140841570 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x140841AFC (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140841E7C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408421E8 (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     PsGetPermanentSiloContext @ 0x1400FF140 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x1408C4AD0 (PsGetParentSilo.c)
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
