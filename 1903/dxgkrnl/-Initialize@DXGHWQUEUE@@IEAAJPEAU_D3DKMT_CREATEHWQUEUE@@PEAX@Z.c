/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0247CFC
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0246C8C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007124 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000C88C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0ppp @ 0x1C0042D08 (McTemplateK0ppp.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F5BA0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C01F82EC (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0248130 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

int __fastcall DXGHWQUEUE::Initialize(struct DXGDEVICESYNCOBJECT **this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  PERESOURCE *Global; // rax
  struct DXGDEVICESYNCOBJECT *v10; // rax
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct ADAPTER_RENDER *v14; // rsi
  __int64 v15; // rdx
  struct DXGGLOBAL *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdi
  D3DKMT_HANDLE v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  UINT PrivateDriverDataSize; // eax
  char *v30; // rsi
  struct DXGDEVICESYNCOBJECT *v31; // rax
  void *v32; // rcx
  struct DXGDEVICESYNCOBJECT *v33; // rax
  int HwQueue; // eax
  __int64 v35; // rdx
  HANDLE hHwQueue; // rcx
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  const GUID *v47; // r8
  _BYTE v48[8]; // [rsp+68h] [rbp-59h] BYREF
  char v49; // [rsp+70h] [rbp-51h]
  _DXGKARG_CREATEHWQUEUE v50; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v51[10]; // [rsp+A8h] [rbp-19h] BYREF
  D3DKMT_HANDLE v52; // [rsp+128h] [rbp+67h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 16LL) + 185LL) )
    return DXGHWQUEUE::InitializeOnHost((DXGHWQUEUE *)this, a2, a3);
  memset(v51, 0, sizeof(v51));
  LODWORD(v51[0]) = 5;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
  v10 = this[2];
  v11 = (struct DXGDEVICE *)*((_QWORD *)v10 + 2);
  v12 = *((unsigned int *)v10 + 102);
  v13 = 1 << v12;
  v14 = (struct ADAPTER_RENDER *)*((_QWORD *)v11 + 2);
  v16 = DXGGLOBAL::GetGlobal(v12, v15);
  v17 = DXGGLOBAL::CreateSyncObject((__int64)v16, v14, v11, v13, (__int64)v51, 3u, 0, 0LL, 0LL, this + 6, &v52, 0LL);
  v21 = v17;
  if ( v17 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = *((_QWORD *)this[2] + 2);
    *(_QWORD *)(v22 + 32) = v21;
    WdLogEvent5_WdWarning(v22);
    if ( v49 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
    return v21;
  }
  if ( v49 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
  v23 = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v23 + 184));
  v24 = v52;
  v25 = (v52 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v25 < *(_DWORD *)(v23 + 224) )
  {
    v26 = *(_QWORD *)(v23 + 208);
    if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60)
      && (*(_DWORD *)(v26 + 16 * v25 + 8) & 0x1F) != 0 )
    {
      v27 = 2 * (((unsigned __int64)v52 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v26 + 16 * (((unsigned __int64)v52 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion((v52 >> 25) & 0x60, v26);
        *(_QWORD *)(v28 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v28);
        v26 = *(_QWORD *)(v23 + 208);
      }
      *(_DWORD *)(v26 + 8 * v27 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v23 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(v23 + 184, 0LL);
  KeLeaveCriticalRegion();
  v50.Flags.Value = a2->Flags.Value;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v50.hHwQueueProgressFence = v24;
  v30 = (char *)(this + 6);
  v50.PrivateDriverDataSize = PrivateDriverDataSize;
  v31 = this[6];
  memset(&v50.hHwQueueProgressFence + 1, 0, 20);
  v50.hHwQueue = this;
  v50.pPrivateDriverData = a3;
  v32 = (void *)*((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)v31 + 4)) + 1);
  v50.HwQueueProgressFenceGPUVirtualAddress = v51[3];
  this[8] = (struct DXGDEVICESYNCOBJECT *)v51[3];
  v33 = this[2];
  v50.HwQueueProgressFenceCPUVirtualAddress = v32;
  this[7] = (struct DXGDEVICESYNCOBJECT *)v32;
  HwQueue = ADAPTER_RENDER::DdiCreateHwQueue(
              *(ADAPTER_RENDER **)(*((_QWORD *)v33 + 2) + 16LL),
              *((void **)v33 + 23),
              (const GUID *)&v50);
  v21 = HwQueue;
  if ( HwQueue >= 0 )
  {
    hHwQueue = v50.hHwQueue;
    this[4] = (struct DXGDEVICESYNCOBJECT *)v50.hHwQueue;
  }
  if ( HwQueue == -1073741822 )
  {
    this[4] = (struct DXGDEVICESYNCOBJECT *)153;
  }
  else if ( HwQueue < 0 )
  {
    v43 = WdLogNewEntry5_WdError(hHwQueue, v35, v37);
    *(_QWORD *)(v43 + 24) = v21;
    WdLogEvent5_WdError(v43);
    return v21;
  }
  v38 = (*(__int64 (__fastcall **)(struct DXGDEVICESYNCOBJECT **, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 520LL) + 8LL) + 232LL))(
          this,
          *((_QWORD *)this[2] + 37),
          a2,
          (char *)this + 40);
  v21 = v38;
  if ( v38 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v48,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v30 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v30 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v30 + 16LL) + 16LL));
    (*(void (__fastcall **)(struct DXGDEVICESYNCOBJECT *, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 520LL) + 8LL)
                                                                                                + 272LL))(
      this[5],
      VidSchSyncObject,
      1LL);
    if ( v49 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v48);
    v45 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 40LL), (__int64)this, 0xFu);
    *((_DWORD *)this + 6) = v45;
    if ( v45 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp(v45, &EventCreateHwQueue, v47, this[2], v45, this);
      return v21;
    }
    v42 = WdLogNewEntry5_WdWarning(0LL, v46, v47);
    v21 = -1073741801LL;
    *(_QWORD *)(v42 + 24) = this;
  }
  else
  {
    v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
    *(_QWORD *)(v42 + 24) = *((_QWORD *)this[2] + 2);
  }
  *(_QWORD *)(v42 + 32) = v21;
  WdLogEvent5_WdWarning(v42);
  return v21;
}
