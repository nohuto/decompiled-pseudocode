/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00E7AD0
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00E7998 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000E448 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C000FE80 (-VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C00E7F04 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  char v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v17; // rdi
  struct ADAPTER_RENDER *v18; // rsi
  struct DXGGLOBAL *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  char *v31; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE v37[8]; // [rsp+68h] [rbp-29h] BYREF
  char v38; // [rsp+70h] [rbp-21h]
  unsigned __int64 v39[10]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v40; // [rsp+100h] [rbp+6Fh] BYREF

  *((_DWORD *)this + 12) = a2;
  v4 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 185LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 544) + 8LL) + 888LL))(
           *(_QWORD *)(v4 + 648),
           a2,
           a3,
           (char *)this + 32);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 2);
LABEL_4:
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      return (unsigned int)v12;
    }
  }
  memset(v39, 0, sizeof(v39));
  v15 = *((_QWORD *)this + 2);
  HIDWORD(v39[0]) |= 0x10u;
  LODWORD(v39[0]) = 5;
  v39[1] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 2488LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v39[1]);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  v17 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v18 = (struct ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
  v19 = DXGGLOBAL::GetGlobal(a2);
  v20 = DXGGLOBAL::CreateSyncObject(
          (__int64)v19,
          v18,
          v17,
          1 << a2,
          (__int64)v39,
          2u,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          &v40,
          0LL);
  v24 = v20;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v25 + 32) = v24;
    WdLogEvent5_WdWarning(v25);
    if ( v38 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
    return (unsigned int)v24;
  }
  if ( v38 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
  v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v26 + 208));
  v27 = (v40 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 < *(_DWORD *)(v26 + 248) )
  {
    v28 = *(_QWORD *)(v26 + 232);
    if ( ((v40 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
      && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
    {
      v29 = 2 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v28 + 16 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion((v40 >> 25) & 0x60);
        *(_QWORD *)(v30 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v30);
        v28 = *(_QWORD *)(v26 + 232);
      }
      *(_DWORD *)(v28 + 8 * v29 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v26 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v26 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
LABEL_22:
    v33 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
    *((_DWORD *)this + 6) = v33;
    if ( !v33 )
    {
      v13 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      v12 = -1073741801LL;
      *(_QWORD *)(v13 + 24) = this;
      goto LABEL_4;
    }
    return (unsigned int)v24;
  }
  v31 = (char *)this + 40;
  result = DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
             *((DXGDEVICESYNCOBJECT **)this + 5),
             a2,
             (unsigned __int64 *)this + 7);
  LODWORD(v24) = result;
  if ( (int)result >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v37,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v31 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v31 + 16LL) + 16LL));
    VIDMM_EXPORT::VidMmSetPagingFenceObject(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
      *((struct VIDMM_PAGING_QUEUE **)this + 4),
      VidSchSyncObject,
      v39[1]);
    if ( v38 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
    goto LABEL_22;
  }
  return result;
}
