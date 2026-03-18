/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0010400 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C00363B8 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C012FD90 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C020FFD8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C022F970 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02320B0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(DXGPROCESS *this)
{
  __int64 v2; // rax

  if ( *((__int64 *)this + 4) <= 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 977LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !--*((_QWORD *)this + 4) )
    (**(void (__fastcall ***)(DXGPROCESS *, __int64))this)(this, 1LL);
}
