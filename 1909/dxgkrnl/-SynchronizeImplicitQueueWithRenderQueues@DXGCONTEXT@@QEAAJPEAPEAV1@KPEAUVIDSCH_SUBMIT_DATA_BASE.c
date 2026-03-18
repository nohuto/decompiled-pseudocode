/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C021A0A8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C025B6CC (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0281DFC (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0248350 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4,
        bool a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  PERESOURCE *Global; // rax
  __int64 v12; // rdx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // ebx
  struct ADAPTER_RENDER *v16; // rsi
  struct DXGGLOBAL *v17; // rax
  int SyncObject; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int RenderHwQueueCount; // esi
  DXGCONTEXT **v26; // r9
  __int64 v27; // r9
  __int64 v28; // r10
  _BYTE *PoolWithTag; // rbx
  int v30; // edi
  __int64 v31; // rdx
  DXGCONTEXT *i; // r8
  DXGCONTEXT *v33; // rax
  struct DXGCONTEXT **v34; // r10
  __int64 v35; // r11
  _QWORD **v36; // r8
  _QWORD *j; // r9
  _QWORD *v38; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v40[8]; // [rsp+70h] [rbp-98h] BYREF
  char v41; // [rsp+78h] [rbp-90h]
  _BYTE v42[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE *v43; // [rsp+98h] [rbp-70h]
  _BYTE v44[64]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+E0h] [rbp-28h]
  _QWORD v46[10]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v47; // [rsp+168h] [rbp+60h] BYREF

  if ( !*((_QWORD *)this + 32) )
  {
    memset(v46, 0, sizeof(v46));
    LODWORD(v46[0]) = 5;
    *((_QWORD *)this + 33) = 0LL;
    v46[1] = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10, v9);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global);
    if ( !a5 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40);
    v13 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v14 = *((unsigned int *)this + 102);
    v15 = 1 << v14;
    v16 = (struct ADAPTER_RENDER *)*((_QWORD *)v13 + 2);
    v17 = DXGGLOBAL::GetGlobal(v14, v12);
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v17,
                   v16,
                   v13,
                   v15,
                   (__int64)v46,
                   0x11u,
                   0,
                   0LL,
                   0LL,
                   (struct DXGDEVICESYNCOBJECT **)this + 32,
                   0LL,
                   0LL);
    v22 = SyncObject;
    if ( SyncObject < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = this;
      *(_QWORD *)(v23 + 32) = v22;
      WdLogEvent5_WdWarning(v23);
      if ( v41 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
      return (unsigned int)v22;
    }
    if ( v41 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
  }
  v47 = ++*((_QWORD *)this + 33);
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( a3 > 1 )
  {
    v26 = a2 + 1;
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v26);
      v26 = (DXGCONTEXT **)(v27 + 8);
    }
    while ( v28 != 1 );
  }
  PoolWithTag = 0LL;
  v45 = 0;
  v43 = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    PoolWithTag = v44;
    v43 = v44;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount < 8 )
      goto LABEL_19;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * RenderHwQueueCount, 0x4B677844u);
    v43 = PoolWithTag;
  }
  v45 = RenderHwQueueCount;
  if ( !PoolWithTag )
    goto LABEL_20;
  memset(PoolWithTag, 0, 8LL * RenderHwQueueCount);
  PoolWithTag = v43;
LABEL_19:
  if ( PoolWithTag )
  {
    v31 = 0LL;
    for ( i = (DXGCONTEXT *)*((_QWORD *)this + 52); ; i = *(DXGCONTEXT **)i )
    {
      v33 = 0LL;
      if ( i != (DXGCONTEXT *)((char *)this + 416) )
        v33 = i;
      if ( !v33 )
        break;
      *(_QWORD *)&PoolWithTag[8 * v31] = *((_QWORD *)v33 + 5);
      v31 = (unsigned int)(v31 + 1);
    }
    if ( a3 > 1 )
    {
      v34 = a2 + 1;
      v35 = a3 - 1;
      do
      {
        v36 = (_QWORD **)((char *)*v34 + 416);
        for ( j = *v36; ; j = (_QWORD *)*j )
        {
          v38 = 0LL;
          if ( j != v36 )
            v38 = j;
          if ( !v38 )
            break;
          *(_QWORD *)&PoolWithTag[8 * v31] = v38[5];
          v31 = (unsigned int)(v31 + 1);
        }
        ++v34;
        --v35;
      }
      while ( v35 );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v42,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 32) + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*((_QWORD *)this + 32) + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 32) + 16LL) + 16LL));
    v30 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 648LL))(
            RenderHwQueueCount,
            PoolWithTag,
            1LL,
            &VidSchSyncObject,
            0,
            &v47);
    if ( v30 >= 0 )
    {
      if ( a4 )
      {
        *((_QWORD *)a4 + 65) = VidSchSyncObject;
        *((_QWORD *)a4 + 66) = v47;
      }
      else
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL)
                                                                                       + 632LL))(
                *((_QWORD *)this + 38),
                VidSchSyncObject,
                v47);
      }
    }
    if ( v42[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42);
    PoolWithTag = v43;
    goto LABEL_41;
  }
LABEL_20:
  v30 = -1073741801;
LABEL_41:
  if ( PoolWithTag != v44 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v30;
}
