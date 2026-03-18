/*
 * XREFs of ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C01F39B8
 * Callers:
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BDB0 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BFA4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0234C88 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        struct DXGSYNCOBJECT *a4,
        struct DXGDEVICESYNCOBJECT *a5,
        struct DXGRESOURCE *a6)
{
  __int64 v10; // rax
  unsigned __int8 v11; // r8
  unsigned int HostHandle; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v16; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-48h]
  unsigned int v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+44h] [rbp-2Ch]
  int v22; // [rsp+48h] [rbp-28h]
  unsigned int v23; // [rsp+50h] [rbp-20h]
  unsigned int v24; // [rsp+58h] [rbp-18h] BYREF

  if ( !a4 && !a5 && !a6 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 8942LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v19 = 0LL;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v21 = 1;
  v22 = 1004;
  if ( a6 )
  {
    HostHandle = *((_DWORD *)a6 + 5);
  }
  else if ( a5 )
  {
    HostHandle = *((_DWORD *)a5 + 11);
  }
  else
  {
    HostHandle = DXGSYNCOBJECT::GetHostHandle(a4, a3, v11);
  }
  v23 = HostHandle;
  v18 = 8;
  v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x20u, &v24, &v18, v17);
  if ( v14 >= 0 )
  {
    v14 = -1073741823;
    if ( v18 >= 4 )
      return v24;
  }
  v16 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v16 + 24) = v14;
  WdLogEvent5_WdError(v16);
  return 0LL;
}
