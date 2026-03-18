/*
 * XREFs of ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C0263B78
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0264610 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0219E3C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax

  v2 = (unsigned int)a2;
  v3 = (int *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 64LL))(
                *((_QWORD *)this + 1),
                a2,
                13LL);
  if ( v3 && *v3 == 16 )
  {
    DXGSHAREDVMOBJECT::ReleaseReference(v3, v4, v6);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v2;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
