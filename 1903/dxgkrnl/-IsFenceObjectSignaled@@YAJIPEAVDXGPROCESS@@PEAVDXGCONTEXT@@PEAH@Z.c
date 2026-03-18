/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C02697B0
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C02729A8 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C0224A54 (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  struct ADAPTER_RENDER *v22; // rdx
  DXG_GUEST_VIRTUALGPU_VMBUS *v23; // rcx
  int IsSyncObjectSignaled; // ebx
  int v25; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v27; // r9
  _BYTE v28[40]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v29; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 914LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 184));
  v11 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)a2 + 56) )
    goto LABEL_9;
  v12 = *((_QWORD *)a2 + 26);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v14 = v13 & 0x1F;
  if ( (_BYTE)v14 != 8 )
  {
    v15 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v14, v12);
    *(_QWORD *)(v15 + 24) = 267LL;
    WdLogEvent5_WdError(v15);
LABEL_9:
    v16 = 0LL;
    goto LABEL_10;
  }
  v16 = *(_DWORD **)(v12 + 16LL * (unsigned int)v11);
LABEL_10:
  ExReleasePushLockSharedEx((char *)a2 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  if ( v16[48] != 3 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = 931LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(v16 + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v22 = *(struct ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL);
  if ( !*((_BYTE *)a3 + 449) )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v16, v22);
    v25 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v27 + 8) + 872LL))(VidSchSyncObject);
    goto LABEL_20;
  }
  v23 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)v22 + 2) + 4144LL);
  v29 = 0;
  IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                           v23,
                           a2,
                           (struct DXGSYNCOBJECT *)v16,
                           v5,
                           &v29);
  if ( IsSyncObjectSignaled >= 0 )
  {
    v25 = v29 == 1;
LABEL_20:
    *a4 = v25;
    IsSyncObjectSignaled = 0;
  }
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  return (unsigned int)IsSyncObjectSignaled;
}
