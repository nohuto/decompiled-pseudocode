/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C011FB1C
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C011F9F4 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
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
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F5BA0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C011FE00 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
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
  __int64 v14; // rdx
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v16; // rdi
  struct ADAPTER_RENDER *v17; // rsi
  __int64 v18; // rdx
  struct DXGGLOBAL *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  char *v30; // rbx
  __int64 result; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  _BYTE v39[8]; // [rsp+68h] [rbp-29h] BYREF
  char v40; // [rsp+70h] [rbp-21h]
  __int64 v41[10]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v42; // [rsp+100h] [rbp+6Fh] BYREF

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
      v37 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v37 + 24) = *((_QWORD *)this + 2);
LABEL_21:
      *(_QWORD *)(v37 + 32) = v12;
      WdLogEvent5_WdWarning(v37);
      return (unsigned int)v12;
    }
  }
  memset(v41, 0, sizeof(v41));
  v13 = *((_QWORD *)this + 2);
  HIDWORD(v41[0]) |= 0x10u;
  LODWORD(v41[0]) = 5;
  v41[1] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 2524LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v41[1], v14);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v39);
  v16 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v17 = (struct ADAPTER_RENDER *)*((_QWORD *)v16 + 2);
  v19 = DXGGLOBAL::GetGlobal(a2, v18);
  v20 = DXGGLOBAL::CreateSyncObject(
          (__int64)v19,
          v17,
          v16,
          1 << a2,
          (__int64)v41,
          2u,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          &v42,
          0LL);
  v24 = v20;
  if ( v20 < 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v38 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v38 + 32) = v24;
    WdLogEvent5_WdWarning(v38);
    if ( v40 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v39);
    return (unsigned int)v24;
  }
  if ( v40 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v39);
  v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v25 + 184));
  v26 = (v42 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v26 < *(_DWORD *)(v25 + 224) )
  {
    v27 = *(_QWORD *)(v25 + 208);
    if ( ((v42 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
      && (*(_DWORD *)(v27 + 16 * v26 + 8) & 0x1F) != 0 )
    {
      v28 = 2 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v27 + 16 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion((v42 >> 25) & 0x60, v27);
        *(_QWORD *)(v29 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v29);
        v27 = *(_QWORD *)(v25 + 208);
      }
      *(_DWORD *)(v27 + 8 * v28 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v25 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(v25 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
  {
    v30 = (char *)this + 40;
    result = DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
               *((DXGDEVICESYNCOBJECT **)this + 5),
               a2,
               (unsigned __int64 *)this + 7);
    LODWORD(v24) = result;
    if ( (int)result < 0 )
      return result;
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v39,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v30 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v30 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v30 + 16LL) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 880LL))(
      *((_QWORD *)this + 4),
      VidSchSyncObject,
      v41[1]);
    if ( v40 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39);
  }
  v33 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
  *((_DWORD *)this + 6) = v33;
  if ( !v33 )
  {
    v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    v12 = -1073741801LL;
    *(_QWORD *)(v37 + 24) = this;
    goto LABEL_21;
  }
  return (unsigned int)v24;
}
