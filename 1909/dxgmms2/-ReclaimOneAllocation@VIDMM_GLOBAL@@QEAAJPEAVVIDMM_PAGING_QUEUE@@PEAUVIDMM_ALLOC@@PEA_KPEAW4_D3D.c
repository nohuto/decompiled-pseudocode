/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075560
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00754D4 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqqt @ 0x1C00262C0 (McTemplateK0pqqt.c)
 *     McTemplateK0puu @ 0x1C002657C (McTemplateK0puu.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006CFD8 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070774 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070B50 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0075E08 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0077280 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABED8 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABF88 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AEBB8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  enum _D3DDDI_RECLAIM_RESULT *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  BOOL v11; // r12d
  BOOL v12; // r14d
  char v13; // r13
  __int64 v14; // rcx
  const GUID *v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  const GUID *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // edi
  bool v24; // r15
  _QWORD *v26; // r12
  _QWORD *v27; // rsi
  _QWORD *v28; // r14
  struct VIDMM_PAGING_QUEUE *v29; // rbx
  _QWORD *v30; // r15
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // r12
  PRKPROCESS *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 i; // r15
  PRKPROCESS *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  PRKPROCESS *v44; // r15
  __int64 v45; // rdx
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  _BOOL8 v60; // [rsp+60h] [rbp-A0h]
  struct VIDMM_PAGING_QUEUE *v61; // [rsp+68h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v65; // [rsp+88h] [rbp-78h]
  unsigned __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v67; // [rsp+98h] [rbp-68h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+A4h] [rbp-5Ch]
  int v70; // [rsp+ACh] [rbp-54h]
  _QWORD *v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  __int128 v73; // [rsp+C0h] [rbp-40h]
  __int128 v74; // [rsp+D0h] [rbp-30h]
  __int128 v75; // [rsp+E0h] [rbp-20h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE v77; // [rsp+120h] [rbp+20h] BYREF
  struct _KAPC_STATE v78; // [rsp+150h] [rbp+50h] BYREF

  v61 = a2;
  v7 = a5;
  v65 = a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v32 = WdLogNewEntry5_WdTrace(this);
    v7 = a5;
    *(_QWORD *)(v32 + 24) = a3;
  }
  v8 = **a3;
  v64 = v8;
  v9 = *(_DWORD *)(v8 + 92) & 2;
  if ( (*(_DWORD *)(v8 + 92) & 2) != 0 && !v7 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9, 0LL);
    *(_QWORD *)(v33 + 24) = a3;
    WdLogEvent5_WdAssertion(v33);
    VidSchMarkDeviceAsError(a3[1][4]);
    return 3221225485LL;
  }
  v10 = *((_DWORD *)this + 1760);
  v11 = (_DWORD)v9 && (v10 & 0x10000) != 0;
  v12 = (v10 & 8) != 0;
  v60 = (v10 & 8) != 0;
  if ( v11 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( (v10 & 8) != 0 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v13 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39952, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)this + 9992);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, (const EVENT_DESCRIPTOR *)"g", v15, v31);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39952, 0LL);
  }
  *((_QWORD *)this + 4995) = KeGetCurrentThread();
  v16 = (_QWORD *)(v8 + 400);
  v17 = *(_QWORD *)(v8 + 400);
  if ( v17 )
  {
    if ( *(_QWORD **)(v17 + 8) != v16 || (v18 = *(_QWORD **)(v8 + 408), (_QWORD *)*v18 != v16) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *v16 = 0LL;
  }
  if ( *(_QWORD *)(v8 + 416) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
    v13 = 1;
  }
  *((_QWORD *)this + 4995) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  v21 = *((unsigned __int16 *)a3[12] + 2);
  *((_WORD *)a3[12] + 2) = 0;
  v22 = (__int16)v21;
  if ( (_WORD)v21 )
  {
    v23 = 0;
    v24 = (*(_DWORD *)(v8 + 92) & 1) != 0;
    if ( v13 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v21 + 32) + 328LL), -*(_QWORD *)(v8 + 8));
    }
    if ( v24 )
    {
LABEL_20:
      *(_DWORD *)(v8 + 92) &= ~2u;
      if ( !a5 )
      {
        *(_BYTE *)(v8 + 97) = 0;
        goto LABEL_27;
      }
      if ( (_DWORD)v22 == 1 )
      {
        *a5 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v22 == 3 )
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v24
          && !*(_QWORD *)(v8 + 136)
          && *(_BYTE *)(v8 + 97)
          && !*(_BYTE *)(v8 + 98)
          && (*(_DWORD *)(v8 + 84) & 8) != 0 )
        {
          if ( !v12 )
          {
            v43 = *(_QWORD *)(v8 + 104);
            if ( v43 )
            {
              v44 = *(PRKPROCESS **)(v43 + 8);
              if ( v44 )
              {
                memset(&v78, 0, sizeof(v78));
                KeStackAttachProcess(*v44, &v78);
                v45 = *(_QWORD *)(v8 + 104);
                if ( (**(_DWORD **)(v8 + 504) & 0x20000000) != 0 )
                {
                  BaseAddress = *(PVOID *)(v45 + 16);
                  RegionSize = *(_QWORD *)(v8 + 8);
                  v46 = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000000u,
                          4u);
                }
                else
                {
                  v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v45 + 8) + 24LL) + 128LL))(
                          *(_QWORD *)(*(_QWORD *)(v45 + 8) + 24LL),
                          *(_QWORD *)(v45 + 24));
                }
                v23 = v46;
                KeUnstackDetachProcess(&v78);
                if ( v23 < 0 )
                {
                  *(_BYTE *)(v8 + 97) = 0;
                  v50 = WdLogNewEntry5_WdEvent(v48, v47);
                  *(_QWORD *)(v50 + 24) = v23;
                  WdLogEvent5_WdEvent(v50);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt(0LL, &EventUnreset, v20, v8, *(_QWORD *)AllocationType, Protect, 0);
                  }
                  v23 = 0;
                }
                else
                {
                  *a5 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v8 + 440) = 0LL;
                  v49 = WdLogNewEntry5_WdEvent(v48, v47);
                  *(_QWORD *)(v49 + 24) = v8;
                  WdLogEvent5_WdEvent(v49);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt(v21, &EventUnreset, v20, v8, *(_QWORD *)AllocationType, Protect, 1);
                  }
                }
                *(_DWORD *)(v8 + 84) &= ~8u;
              }
            }
            goto LABEL_27;
          }
LABEL_100:
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
LABEL_27:
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LOBYTE(Protect) = v22;
            LOBYTE(AllocationType[0]) = *(_BYTE *)(**a3 + 432);
            McTemplateK0puu(**a3, &EventReclaimAllocation, v20, a3, *(_QWORD *)AllocationType, Protect);
          }
          if ( v12
            || (_DWORD)v22 == 3
            || (_DWORD)v22 == 2 && (*(_DWORD *)(v8 + 80) & 0x40) != 0
            || !*(_DWORD *)(v8 + 128) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
              v53[4] = v60;
              v53[3] = a3;
              v53[5] = v22;
              v54 = (*(_DWORD *)(v8 + 80) >> 6) & 1;
              v53[7] = 0LL;
              v53[6] = v54;
            }
            v26 = (_QWORD *)(v8 + 296);
            v27 = *(_QWORD **)(v8 + 296);
            if ( v27 != (_QWORD *)(v8 + 296) )
            {
              do
              {
                v28 = (_QWORD *)*(v27 - 2);
                if ( v28 != v27 - 2 )
                {
                  v29 = v61;
                  do
                  {
                    v30 = v28 - 5;
                    if ( (*(_DWORD *)(v28 - 1) & 1) == 0 )
                    {
                      if ( ((*((_BYTE *)v30 + 25) & 1) != 0) | *((_DWORD *)v30 + 38) )
                      {
                        v69 = 0LL;
                        v73 = 0LL;
                        v74 = 0LL;
                        v75 = 0LL;
                        v70 = 0;
                        v72 = 0LL;
                        v68 = 210;
                        v71 = v28 - 5;
                        v23 = VIDMM_GLOBAL::QueueDeferredCommand(
                                this,
                                v29,
                                (struct _VIDMM_DEFERRED_COMMAND *)&v68,
                                0,
                                &v59);
                        if ( (*((_DWORD *)v30 + 7) & 0x20) != 0 )
                        {
                          v30[35] = v59;
                          v30[32] = v29;
                        }
                      }
                    }
                    v28 = (_QWORD *)*v28;
                  }
                  while ( v28 != v27 - 2 );
                  v8 = v64;
                  v26 = (_QWORD *)(v64 + 296);
                }
                v27 = (_QWORD *)*v27;
              }
              while ( v27 != v26 );
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
            v51[3] = a3;
            v51[4] = 0LL;
            v51[5] = v22;
            v52 = (*(_DWORD *)(v8 + 80) >> 6) & 1;
            v51[7] = 1LL;
            v51[6] = v52;
          }
          goto LABEL_37;
        }
      }
      if ( !v12 )
        goto LABEL_27;
      goto LABEL_100;
    }
    if ( !v11 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 104LL) & 4) == 0 )
    {
      v23 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
      if ( v23 >= 0 )
      {
        v35 = *(_QWORD **)(v8 + 296);
        if ( v35 == (_QWORD *)(v8 + 296) )
        {
LABEL_80:
          *(_BYTE *)(v8 + 97) = 0;
          goto LABEL_20;
        }
        while ( 1 )
        {
          v36 = (PRKPROCESS *)*(v35 - 6);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v36, &ApcState);
          v23 = VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v35 - 7), 0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( v23 < 0 )
            break;
          v35 = (_QWORD *)*v35;
          if ( v35 == (_QWORD *)(v8 + 296) )
            goto LABEL_80;
        }
        v38 = WdLogNewEntry5_WdAssertion(v21, v37);
        *(_QWORD *)(v38 + 24) = v35 - 7;
        WdLogEvent5_WdAssertion(v38);
        for ( i = v35[1]; i != v8 + 296; i = *(_QWORD *)(i + 8) )
        {
          v40 = *(PRKPROCESS **)(i - 48);
          memset(&v77, 0, sizeof(v77));
          KeStackAttachProcess(*v40, &v77);
          VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(i - 56), 1);
          KeUnstackDetachProcess(&v77);
        }
        VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0);
      }
    }
    v23 = 0;
    v41 = *((unsigned __int16 *)a3[12] + 2);
    *((_WORD *)a3[12] + 2) = 3;
    *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedIncrement(&dword_1C004E704);
    v42 = WdLogNewEntry5_WdLowResource(v41);
    *(_QWORD *)(v42 + 24) = v8;
    WdLogEvent5_WdLowResource(v42);
LABEL_37:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320));
    if ( v23 == 259 )
    {
      if ( v65 )
      {
        *v65 = v59;
      }
      else
      {
        v67 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v61 + 11);
        v66 = v59;
        VIDMM_GLOBAL::WaitForFences(this, &v67, &v66, 1u, 0LL);
        return 0;
      }
    }
    return (unsigned int)v23;
  }
  v34 = WdLogNewEntry5_WdAssertion(v21, v19);
  *(_QWORD *)(v34 + 24) = a3;
  WdLogEvent5_WdAssertion(v34);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320));
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
