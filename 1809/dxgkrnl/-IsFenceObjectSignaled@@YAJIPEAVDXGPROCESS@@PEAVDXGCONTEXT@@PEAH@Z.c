/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C0234EC4
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C023D730 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C01F4A98 (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int IsSyncObjectSignaled; // ebx
  int v21; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v23; // r9
  _BYTE v24[40]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 918LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 208));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 >= *((_DWORD *)a2 + 62) )
    goto LABEL_9;
  v11 = *((_QWORD *)a2 + 29);
  v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60)
    || (v12 & 0x2000) != 0
    || (v12 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( (v12 & 0x1F) != 8 )
  {
    v13 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60);
    *(_QWORD *)(v13 + 24) = 316LL;
    WdLogEvent5_WdError(v13);
LABEL_9:
    v14 = 0LL;
    goto LABEL_10;
  }
  v14 = *(_DWORD **)(v11 + 16LL * (unsigned int)v10);
LABEL_10:
  ExReleasePushLockSharedEx((char *)a2 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( v14[42] != 3 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = 935LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v14 + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v18 = *((_QWORD *)a3 + 2);
  if ( !*((_BYTE *)a3 + 433) )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v14, *(struct ADAPTER_RENDER **)(v18 + 16));
    v21 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v23 + 8) + 872LL))(VidSchSyncObject);
    goto LABEL_20;
  }
  v19 = *(_QWORD *)(v18 + 16);
  v25 = 0;
  IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v19 + 16) + 4152LL),
                           a2,
                           (struct DXGSYNCOBJECT *)v14,
                           v5,
                           &v25);
  if ( IsSyncObjectSignaled >= 0 )
  {
    v21 = v25 == 1;
LABEL_20:
    *a4 = v21;
    IsSyncObjectSignaled = 0;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return (unsigned int)IsSyncObjectSignaled;
}
