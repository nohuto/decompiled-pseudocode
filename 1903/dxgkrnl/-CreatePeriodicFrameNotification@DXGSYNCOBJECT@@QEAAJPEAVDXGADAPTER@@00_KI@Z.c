/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1C0268A70
 * Callers:
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C0268BBC (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C027B26C (-CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU.c)
 */

__int64 __fastcall DXGSYNCOBJECT::CreatePeriodicFrameNotification(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER **a2,
        struct ADAPTER_RENDER **a3,
        struct DXGADAPTER *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  unsigned __int64 v14; // r9
  int PeriodicFrameNotification; // eax
  struct _VIDSCH_SYNC_OBJECT *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r11
  unsigned int v19; // esi
  unsigned int v21; // [rsp+20h] [rbp-28h]

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  if ( (*((_DWORD *)a4 + 77) & 0x100) != 0 )
  {
    if ( !a2 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v12 + 24) = 1737LL;
      WdLogEvent5_WdAssertion(v12);
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, a2[320]);
    PeriodicFrameNotification = BLTQUEUE::CreatePeriodicFrameNotification(
                                  (BLTQUEUE *)(*(_QWORD *)(v14 + 8) + 2760LL * a6),
                                  (struct DXGADAPTER *)a2,
                                  VidSchSyncObject,
                                  v14,
                                  v21,
                                  (struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *)((char *)this + 192),
                                  (unsigned __int64 *)this + 22);
    *((_DWORD *)this + 46) = a6;
    *((_QWORD *)this + 21) = a4;
  }
  else
  {
    v16 = DXGSYNCOBJECT::GetVidSchSyncObject(this, a3[320]);
    PeriodicFrameNotification = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)(v17 + 8) + 936LL))(
                                  v18,
                                  v16,
                                  a5,
                                  a6,
                                  (char *)this + 192,
                                  (char *)this + 160);
  }
  v19 = PeriodicFrameNotification;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  return v19;
}
