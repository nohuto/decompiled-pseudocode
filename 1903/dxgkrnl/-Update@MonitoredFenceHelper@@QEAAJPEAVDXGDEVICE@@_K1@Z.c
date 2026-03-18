/*
 * XREFs of ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C02978DC
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0297A00 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C0296EDC (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C0296FDC (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

__int64 __fastcall MonitoredFenceHelper::Update(
        MonitoredFenceHelper *this,
        struct ADAPTER_RENDER **a2,
        UINT64 a3,
        __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD **v8; // rbx
  struct _KTHREAD **v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  char *v15; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = a4;
  if ( a3 != *(_QWORD *)this )
  {
    MonitoredFenceHelper::DestroySynchObject(this);
    result = MonitoredFenceHelper::CreateSynchObject(this, (struct DXGDEVICE *)a2, a3);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)this = a3;
  }
  v8 = *(struct _KTHREAD ***)(*((_QWORD *)this + 4) + 32LL);
  v9 = v8 + 4;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 4));
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v8, a2[2]);
  if ( VidSchSyncObject )
  {
    v15 = (char *)this + 8;
    ObfReferenceObject(v15);
    v13 = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT **, __int64 *, char *, char, char, struct ADAPTER_RENDER *, _QWORD))(*(_QWORD *)(*((_QWORD *)a2[2] + 65) + 8LL) + 664LL))(
            1LL,
            &VidSchSyncObject,
            &v17,
            v15,
            1,
            1,
            a2[82],
            0LL);
    if ( v13 < 0 )
      ObfDereferenceObject(v15);
  }
  else
  {
    v13 = -1073741811;
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = 1353LL;
    WdLogEvent5_WdWarning(v14);
  }
  DXGFASTMUTEX::Release(v9);
  return (unsigned int)v13;
}
