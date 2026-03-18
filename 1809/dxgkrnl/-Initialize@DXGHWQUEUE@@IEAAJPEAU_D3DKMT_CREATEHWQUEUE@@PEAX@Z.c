/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02141B0
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0213168 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000E448 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000FFBC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C01C9AC0 (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02145E4 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

int __fastcall DXGHWQUEUE::Initialize(struct DXGDEVICESYNCOBJECT **this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v7; // rcx
  PERESOURCE *Global; // rax
  struct DXGDEVICESYNCOBJECT *v9; // rax
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct ADAPTER_RENDER *v13; // rsi
  struct DXGGLOBAL *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  D3DKMT_HANDLE v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  UINT PrivateDriverDataSize; // eax
  char *v28; // rsi
  struct DXGDEVICESYNCOBJECT *v29; // rax
  void *v30; // rcx
  struct DXGDEVICESYNCOBJECT *v31; // rax
  int HwQueue; // eax
  HANDLE hHwQueue; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  unsigned int v41; // eax
  __int64 v42; // rdx
  const GUID *v43; // r8
  _BYTE v44[8]; // [rsp+68h] [rbp-59h] BYREF
  char v45; // [rsp+70h] [rbp-51h]
  _DXGKARG_CREATEHWQUEUE v46; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v47[10]; // [rsp+A8h] [rbp-19h] BYREF
  D3DKMT_HANDLE v48; // [rsp+128h] [rbp+67h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 16LL) + 185LL) )
    return DXGHWQUEUE::InitializeOnHost((DXGHWQUEUE *)this, a2, a3);
  memset(v47, 0, sizeof(v47));
  LODWORD(v47[0]) = 5;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44);
  v9 = this[2];
  v10 = (struct DXGDEVICE *)*((_QWORD *)v9 + 2);
  v11 = *((unsigned int *)v9 + 98);
  v12 = 1 << v11;
  v13 = (struct ADAPTER_RENDER *)*((_QWORD *)v10 + 2);
  v14 = DXGGLOBAL::GetGlobal(v11);
  v15 = DXGGLOBAL::CreateSyncObject((__int64)v14, v13, v10, v12, (__int64)v47, 3u, 0, 0LL, 0LL, this + 6, &v48, 0LL);
  v19 = v15;
  if ( v15 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = *((_QWORD *)this[2] + 2);
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdWarning(v20);
    if ( v45 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
    return v19;
  }
  if ( v45 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
  v21 = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 208));
  v22 = v48;
  v23 = (v48 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 < *(_DWORD *)(v21 + 248) )
  {
    v24 = *(_QWORD *)(v21 + 232);
    if ( ((v48 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
      && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
    {
      v25 = 2 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v24 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion((v48 >> 25) & 0x60);
        *(_QWORD *)(v26 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v26);
        v24 = *(_QWORD *)(v21 + 232);
      }
      *(_DWORD *)(v24 + 8 * v25 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v21 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v21 + 208, 0LL);
  KeLeaveCriticalRegion();
  memset(&v46, 0, sizeof(v46));
  v46.Flags.Value = a2->Flags.Value;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v46.hHwQueueProgressFence = v22;
  v28 = (char *)(this + 6);
  v46.PrivateDriverDataSize = PrivateDriverDataSize;
  v29 = this[6];
  v46.hHwQueue = this;
  v46.pPrivateDriverData = a3;
  v30 = (void *)*((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)v29 + 4)) + 1);
  v46.HwQueueProgressFenceGPUVirtualAddress = v47[3];
  this[8] = (struct DXGDEVICESYNCOBJECT *)v47[3];
  v31 = this[2];
  v46.HwQueueProgressFenceCPUVirtualAddress = v30;
  this[7] = (struct DXGDEVICESYNCOBJECT *)v30;
  HwQueue = ADAPTER_RENDER::DdiCreateHwQueue(
              *(ADAPTER_RENDER **)(*((_QWORD *)v31 + 2) + 16LL),
              *((void **)v31 + 23),
              (const GUID *)&v46);
  v19 = HwQueue;
  if ( HwQueue >= 0 )
  {
    hHwQueue = v46.hHwQueue;
    this[4] = (struct DXGDEVICESYNCOBJECT *)v46.hHwQueue;
  }
  if ( HwQueue == -1073741822 )
  {
    this[4] = (struct DXGDEVICESYNCOBJECT *)153;
  }
  else if ( HwQueue < 0 )
  {
    v39 = WdLogNewEntry5_WdError(hHwQueue);
    *(_QWORD *)(v39 + 24) = v19;
    WdLogEvent5_WdError(v39);
    return v19;
  }
  v34 = (*(__int64 (__fastcall **)(struct DXGDEVICESYNCOBJECT **, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 520LL) + 8LL) + 232LL))(
          this,
          *((_QWORD *)this[2] + 35),
          a2,
          (char *)this + 40);
  v19 = v34;
  if ( v34 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v44,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v28 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v28 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v28 + 16LL) + 16LL));
    (*(void (__fastcall **)(struct DXGDEVICESYNCOBJECT *, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 520LL) + 8LL)
                                                                                                + 272LL))(
      this[5],
      VidSchSyncObject,
      1LL);
    if ( v45 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
    v41 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 40LL), (__int64)this, 0xFu);
    *((_DWORD *)this + 6) = v41;
    if ( v41 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp(v41, &EventCreateHwQueue, v43, this[2], v41, this);
      return v19;
    }
    v38 = WdLogNewEntry5_WdWarning(0LL, v42, v43);
    v19 = -1073741801LL;
    *(_QWORD *)(v38 + 24) = this;
  }
  else
  {
    v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v38 + 24) = *((_QWORD *)this[2] + 2);
  }
  *(_QWORD *)(v38 + 32) = v19;
  WdLogEvent5_WdWarning(v38);
  return v19;
}
