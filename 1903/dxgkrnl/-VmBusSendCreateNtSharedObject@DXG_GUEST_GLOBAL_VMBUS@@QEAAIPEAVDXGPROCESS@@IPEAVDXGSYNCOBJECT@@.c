/*
 * XREFs of ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C02236E8
 * Callers:
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0139D20 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0139F64 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0269574 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v18; // rax
  struct _MDL *v19; // [rsp+28h] [rbp-48h]
  unsigned int v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+40h] [rbp-30h]
  int v23; // [rsp+44h] [rbp-2Ch]
  int v24; // [rsp+48h] [rbp-28h]
  unsigned int v25; // [rsp+50h] [rbp-20h]
  unsigned int v26; // [rsp+58h] [rbp-18h] BYREF

  if ( !a4 && !a5 && !a6 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 8908LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v21 = 0LL;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v23 = 1;
  v24 = 1004;
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
  v25 = HostHandle;
  v20 = 8;
  v15 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v21, 0x20u, &v26, &v20, v19);
  if ( v15 >= 0 )
  {
    v15 = -1073741823;
    if ( v20 >= 4 )
      return v26;
  }
  v18 = WdLogNewEntry5_WdError(v14, v13, v16);
  *(_QWORD *)(v18 + 24) = v15;
  WdLogEvent5_WdError(v18);
  return 0LL;
}
