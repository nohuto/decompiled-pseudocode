/*
 * XREFs of ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C022EED8
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C022F970 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rax

  v2 = (unsigned int)a2;
  v3 = (int *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 64LL))(
                *((_QWORD *)this + 1),
                a2,
                13LL);
  if ( v3 && *v3 == 16 )
  {
    DXGSHAREDVMOBJECT::ReleaseReference(v3);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v2;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
