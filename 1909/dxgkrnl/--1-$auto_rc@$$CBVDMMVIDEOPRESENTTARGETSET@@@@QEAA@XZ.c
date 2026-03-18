/*
 * XREFs of ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0045440
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0100EEC (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C014EE20 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v4 + 64), a2, a3);
  *a1 = 0LL;
  return result;
}
