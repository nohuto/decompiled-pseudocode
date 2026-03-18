/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F9C74 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C011CE60 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01228D4 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C0145BB4 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01522BC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C024837C (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00FA124 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00FA7F8 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00FAAEC (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z @ 0x1C00FAB10 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJE.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00FABDC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00FAF80 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        bool a7,
        struct DXGPAGINGQUEUE *a8,
        _QWORD *a9,
        struct DXGDEVICESYNCOBJECT **a10,
        unsigned int *a11,
        struct DXGADAPTERSYNCOBJECT **a12)
{
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // esi
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rax
  unsigned __int64 *ThreadProperty; // rax
  unsigned __int64 *v37; // r12
  _QWORD *v38; // rax
  __int64 v39; // rax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v40; // [rsp+50h] [rbp-48h]

  if ( !a5 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v32 + 24) = 2391LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( a9 )
  {
    *a9 = 0LL;
    if ( !a10 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( a10 )
  {
LABEL_5:
    *a10 = 0LL;
    goto LABEL_6;
  }
  v33 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v33 + 24) = 2392LL;
  WdLogEvent5_WdAssertion(v33);
LABEL_6:
  if ( a11 )
    *a11 = 0;
  if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
  {
    v34 = (char *)operator new[](0x138uLL, 0x4B677844u, (POOL_TYPE)512);
    v19 = v34;
    if ( v34 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v34, a1, a5, a6);
      *((_QWORD *)v19 + 38) = 0LL;
      *((_QWORD *)v19 + 37) = v19 + 288;
      *((_QWORD *)v19 + 36) = v19 + 288;
      goto LABEL_11;
    }
  }
  else
  {
    v14 = (char *)operator new[](0x148uLL, 0x4B677844u, (POOL_TYPE)512);
    v19 = v14;
    if ( v14 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v14, a1, a5, a6);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v19 + 288), a2);
      goto LABEL_11;
    }
  }
  v19 = 0LL;
LABEL_11:
  if ( v19 )
  {
    LOBYTE(v16) = *(_BYTE *)(*((_QWORD *)a2 + 2) + 185LL);
    v19[277] = v16;
    CurrentProcess = PsGetCurrentProcess(v16, v15);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v22 = ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
    {
      ThreadProperty = (unsigned __int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v37 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v22 = *v37;
      }
    }
    DXGSYNCOBJECT::SetVmSyncObject((DXGSYNCOBJECT *)v19, v22);
    v24 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v19, a8);
    if ( v24 < 0 )
      goto LABEL_40;
    if ( a11 || (unsigned int)(*((_DWORD *)v19 + 48) - 5) <= 1 )
    {
      v40.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
      v25 = *((_DWORD *)v19 + 48) == 6
          ? DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v19,
              a2,
              a3,
              a10,
              a11,
              (void **)(a5 + 24),
              (unsigned __int64 *)(a5 + 32),
              a4,
              a12,
              a7,
              v40)
          : DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v19,
              a2,
              a3,
              a10,
              a11,
              (void **)(a5 + 16),
              (unsigned __int64 *)(a5 + 24),
              a4,
              a12,
              a7,
              v40);
      v24 = v25;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v19 + 6);
    }
    if ( v24 < 0 )
    {
LABEL_40:
      DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v19, v23);
    }
    else
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 288));
      v27 = (_QWORD *)(a1 + 328);
      v28 = *(_QWORD *)(a1 + 328);
      if ( *(_QWORD *)(v28 + 8) != a1 + 328 )
        __fastfail(3u);
      *(_QWORD *)v19 = v28;
      *((_QWORD *)v19 + 1) = v27;
      *(_QWORD *)(v28 + 8) = v19;
      *v27 = v19;
      if ( *(struct _KTHREAD **)(a1 + 304) != KeGetCurrentThread() )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v26);
        v38[3] = 275LL;
        v38[4] = 4LL;
        v38[5] = a1 + 288;
        v38[6] = 0LL;
        v38[7] = 0LL;
        WdLogEvent5_WdCriticalError(v38);
      }
      v29 = *(_DWORD *)(a1 + 312);
      if ( v29 <= 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v28, v26);
        *(_QWORD *)(v39 + 24) = 603LL;
        WdLogEvent5_WdAssertion(v39);
        v29 = *(_DWORD *)(a1 + 312);
      }
      v30 = v29 - 1;
      *(_DWORD *)(a1 + 312) = v30;
      if ( !v30 )
      {
        *(_QWORD *)(a1 + 304) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 288, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( a9 )
        *a9 = v19;
    }
    return (unsigned int)v24;
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    return 3221225495LL;
  }
}
