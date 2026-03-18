/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00E7AD0 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C011D290 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02141B0 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00DDC2C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00DE324 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z @ 0x1C00DE348 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJE.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00DE40C (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
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
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v27; // rsi
  char v28; // al
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // al
  int v33; // esi
  int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v41; // [rsp+50h] [rbp-48h]

  if ( !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2404LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a9 )
  {
    *a9 = 0LL;
    if ( !a10 )
      goto LABEL_8;
  }
  else if ( !a10 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v15);
    goto LABEL_8;
  }
  *a10 = 0LL;
LABEL_8:
  if ( a11 )
    *a11 = 0;
  if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
  {
    v16 = operator new(0x120uLL, 0x4B677844u, (POOL_TYPE)512);
    v18 = v16;
    if ( v16 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v16, a1, a5, a6);
      v18[35] = 0LL;
      v18[34] = v18 + 33;
      v18[33] = v18 + 33;
      goto LABEL_16;
    }
  }
  else
  {
    v19 = operator new(0x130uLL, 0x4B677844u, (POOL_TYPE)512);
    v18 = v19;
    if ( v19 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v19, a1, a5, a6);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v18 + 33), a2);
      goto LABEL_16;
    }
  }
  v18 = 0LL;
LABEL_16:
  if ( v18 )
  {
    *((_BYTE *)v18 + 253) = *(_BYTE *)(*((_QWORD *)a2 + 2) + 185LL);
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v25 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v27 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v25 = *v27;
        }
      }
    }
    if ( !v25 || (v28 = 1, (*(_BYTE *)(v25 + 323) & 0xC) == 0) )
      v28 = 0;
    *((_BYTE *)v18 + 254) = v28;
    if ( v28 )
    {
      v29 = *(_BYTE *)(v25 + 323);
      if ( (v29 & 8) != 0 )
        v30 = *(_QWORD *)(v25 + 456);
      else
        v30 = v25 & -(__int64)((v29 & 4) != 0);
      v18[32] = v30;
      if ( !v30 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v31 + 24) = 5421LL;
        WdLogEvent5_WdAssertion(v31);
      }
    }
    else
    {
      v18[32] = 0LL;
    }
    v32 = v25
       && (*(_BYTE *)(v25 + 323) & 8) != 0
       && (*(_BYTE *)(v25 + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled);
    *((_BYTE *)v18 + 255) = v32;
    v33 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v18, a8);
    if ( v33 < 0 )
      goto LABEL_40;
    if ( a11 || (unsigned int)(*((_DWORD *)v18 + 42) - 5) <= 1 )
    {
      v41.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
      v34 = *((_DWORD *)v18 + 42) == 6
          ? DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v18,
              a2,
              a3,
              a10,
              a11,
              (void **)(a5 + 24),
              (unsigned __int64 *)(a5 + 32),
              a4,
              a12,
              a7,
              v41)
          : DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v18,
              a2,
              a3,
              a10,
              a11,
              (void **)(a5 + 16),
              (unsigned __int64 *)(a5 + 24),
              a4,
              a12,
              a7,
              v41);
      v33 = v34;
    }
    else
    {
      DXGSYNCOBJECT::AddReference((DXGSYNCOBJECT *)v18);
    }
    if ( v33 < 0 )
    {
LABEL_40:
      DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v18);
    }
    else
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 288));
      v35 = (_QWORD *)(a1 + 328);
      v36 = *(_QWORD *)(a1 + 328);
      if ( *(_QWORD *)(v36 + 8) != a1 + 328 )
        __fastfail(3u);
      *v18 = v36;
      v18[1] = v35;
      *(_QWORD *)(v36 + 8) = v18;
      *v35 = v18;
      if ( *(struct _KTHREAD **)(a1 + 296) != KeGetCurrentThread() )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36);
        v37[3] = 275LL;
        v37[4] = 4LL;
        v37[5] = a1 + 288;
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
      v38 = *(_DWORD *)(a1 + 312);
      if ( v38 <= 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v39 + 24) = 453LL;
        WdLogEvent5_WdAssertion(v39);
        v38 = *(_DWORD *)(a1 + 312);
      }
      v40 = v38 - 1;
      *(_DWORD *)(a1 + 312) = v40;
      if ( !v40 )
      {
        *(_QWORD *)(a1 + 296) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 304, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( a9 )
        *a9 = v18;
    }
    return (unsigned int)v33;
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v20 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
