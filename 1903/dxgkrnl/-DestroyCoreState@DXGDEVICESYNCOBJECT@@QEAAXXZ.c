/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F1BF8
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00F1F04 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120E0C (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120EC8 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121538 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0247258 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C026CE0C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007124 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  DXGADAPTER *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  char v22; // [rsp+38h] [rbp-10h]

  v2 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*((_BYTE *)v2 + 185) )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v4, v3);
      *(_QWORD *)(v18 + 24) = 118LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      v5 = *((_QWORD *)this + 4);
      v22 = 0;
      v21 = v5 + 32;
      if ( v5 == -32 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v4, v3);
        *(_QWORD *)(v19 + 24) = 659LL;
        WdLogEvent5_WdAssertion(v19);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v21 + 16) == CurrentThread )
      {
        v20 = WdLogNewEntry5_WdAssertion(CurrentThread, v3);
        *(_QWORD *)(v20 + 24) = 666LL;
        WdLogEvent5_WdAssertion(v20);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      v10 = *((_DWORD *)this + 18) >> 5;
      LOBYTE(v10) = (*((_DWORD *)this + 18) & 0x20) == 0;
      (*(void (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v8 + 520)
                                                                                                + 8LL)
                                                                                    + 672LL))(
        VidSchSyncObject,
        *(_QWORD *)(v9 + 656),
        v10,
        *((_QWORD *)this + 3));
      operator delete(*((void **)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 92) &= ~1u;
      if ( v22 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v21);
    }
    if ( *((_QWORD *)this + 6) )
    {
      v11 = *((_QWORD *)this + 2);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 72LL);
      if ( v12 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      v14 = *(_QWORD *)(v11 + 16);
      v15 = *(_QWORD *)(v14 + 552);
      v16 = *(_QWORD *)(v14 + 544);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      (*(void (__fastcall **)(__int64, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v16 + 8) + 960LL))(
        v15,
        v13,
        MonitoredFenceStorage);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
