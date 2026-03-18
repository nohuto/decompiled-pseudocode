/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007643C
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00763B0 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqqt @ 0x1C0026820 (McTemplateK0pqqt.c)
 *     McTemplateK0puu @ 0x1C0026ADC (McTemplateK0puu.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FD80 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00609D8 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619C4 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C00656EC (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0065BEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00663F0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8AD0 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8B5C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB93C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  __int64 *v5; // rax
  __int64 **v6; // r13
  enum _D3DDDI_RECLAIM_RESULT *v7; // r12
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r14d
  char v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  const GUID *v17; // r8
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // esi
  _QWORD *v22; // r12
  _QWORD *v23; // r14
  _QWORD *v24; // r15
  struct VIDMM_PAGING_QUEUE *v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // r15
  _QWORD *i; // rbx
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  char v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+44h] [rbp-BCh]
  int v47; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PAGING_QUEUE *v49; // [rsp+60h] [rbp-A0h]
  enum _D3DDDI_RECLAIM_RESULT *v50; // [rsp+68h] [rbp-98h]
  struct VIDMM_ALLOC *v51; // [rsp+70h] [rbp-90h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v55; // [rsp+90h] [rbp-70h]
  unsigned __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v57; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v58[10]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE v60; // [rsp+130h] [rbp+30h] BYREF
  struct _KAPC_STATE v61; // [rsp+160h] [rbp+60h] BYREF

  v5 = *a3;
  v6 = a3;
  v7 = a5;
  v55 = a4;
  v51 = (struct VIDMM_ALLOC *)a3;
  v9 = *v5;
  v49 = a2;
  v50 = a5;
  LODWORD(v5) = *(_DWORD *)(v9 + 92);
  v54 = v9;
  v10 = (unsigned __int8)v5 & 2;
  if ( v10 && !a5 )
  {
    VidSchMarkDeviceAsError(a3[1][4], 20LL, 0);
    return 3221225485LL;
  }
  if ( v10 && (*((_DWORD *)this + 1760) & 0x10000) != 0 )
  {
    v11 = *((_DWORD *)this + 1760) & 8;
    v47 = 1;
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else
  {
    v47 = 0;
    v11 = *((_DWORD *)this + 1760) & 8;
    if ( v11 )
      VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v12 = 0;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39952));
  v13 = (_QWORD *)(v9 + 400);
  v14 = *(_QWORD *)(v9 + 400);
  if ( v14 )
  {
    if ( *(_QWORD **)(v14 + 8) != v13 || (v15 = *(_QWORD **)(v9 + 408), (_QWORD *)*v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
  }
  if ( *(_QWORD *)(v9 + 416) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v9);
    v12 = 1;
  }
  *((_QWORD *)this + 4995) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 320));
  v18 = *((unsigned __int16 *)v6[12] + 2);
  *((_WORD *)v6[12] + 2) = 0;
  v19 = (__int16)v18;
  v45 = (__int16)v18;
  if ( (_WORD)v18 )
  {
    v20 = 0;
    LOBYTE(v17) = *(_BYTE *)(v9 + 92) & 1;
    v44 = (char)v17;
    if ( v12 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v18 + 32) + 352LL), -*(_QWORD *)(v9 + 8));
    }
    if ( !(_BYTE)v17 )
    {
      if ( !v47 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL);
        if ( (*(_DWORD *)(v18 + 104) & 4) == 0 )
        {
          v20 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v9);
          if ( v20 >= 0 )
          {
            v28 = (_QWORD *)(v9 + 296);
            for ( i = *(_QWORD **)(v9 + 296); ; i = (_QWORD *)*i )
            {
              if ( i == v28 )
              {
                LOBYTE(v17) = v44;
                v19 = v45;
                *(_BYTE *)(v9 + 97) = 0;
                goto LABEL_15;
              }
              KeStackAttachProcess(*(PRKPROCESS *)*(i - 6), &ApcState);
              v20 = VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(i - 7), 0LL);
              KeUnstackDetachProcess(&ApcState);
              if ( v20 < 0 )
                break;
            }
            v31 = WdLogNewEntry5_WdAssertion(v18, v30);
            *(_QWORD *)(v31 + 24) = i - 7;
            WdLogEvent5_WdAssertion(v31);
            v32 = (_QWORD *)i[1];
            if ( v32 != v28 )
            {
              do
              {
                KeStackAttachProcess(*(PRKPROCESS *)*(v32 - 6), &v60);
                VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v32 - 7), 1);
                KeUnstackDetachProcess(&v60);
                v32 = (_QWORD *)v32[1];
              }
              while ( v32 != v28 );
              v7 = v50;
            }
            VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v9, 0LL);
            v6 = (__int64 **)v51;
          }
        }
      }
      v20 = 0;
      *((_WORD *)v6[12] + 2) = 3;
      *v7 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
      _InterlockedIncrement(&dword_1C004D6E4);
      v33 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v33 + 24) = v9;
      WdLogEvent5_WdLowResource(v33);
      goto LABEL_32;
    }
LABEL_15:
    *(_DWORD *)(v9 + 92) &= ~2u;
    if ( !a5 )
    {
      *(_BYTE *)(v9 + 97) = 0;
LABEL_22:
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LOBYTE(Protect) = v19;
        LOBYTE(AllocationType[0]) = *(_BYTE *)(**v6 + 432);
        McTemplateK0puu(**v6, &EventReclaimAllocation, v17, v6, *(_QWORD *)AllocationType, Protect);
      }
      if ( v11 || v45 == 3 || v45 == 2 && (*(_DWORD *)(v9 + 80) & 0x40) != 0 || !*(_DWORD *)(v9 + 128) )
      {
        v22 = (_QWORD *)(v9 + 296);
        v23 = *(_QWORD **)(v9 + 296);
        if ( v23 != (_QWORD *)(v9 + 296) )
        {
          do
          {
            v24 = (_QWORD *)*(v23 - 2);
            if ( v24 != v23 - 2 )
            {
              v25 = v49;
              do
              {
                v26 = v24 - 5;
                if ( (*(_DWORD *)(v24 - 1) & 1) == 0 )
                {
                  if ( *((_BYTE *)v26 + 25) & 1 | *((_DWORD *)v26 + 38) )
                  {
                    memset(v58, 0, sizeof(v58));
                    LODWORD(v58[0]) = 210;
                    v58[2] = v24 - 5;
                    v20 = VIDMM_GLOBAL::QueueDeferredCommand(this, v25, (struct _VIDMM_DEFERRED_COMMAND *)v58, 0, &v48);
                    if ( (*((_DWORD *)v26 + 7) & 0x20) != 0 )
                    {
                      v26[35] = v48;
                      v26[32] = v25;
                    }
                  }
                }
                v24 = (_QWORD *)*v24;
              }
              while ( v24 != v23 - 2 );
              v9 = v54;
              v22 = (_QWORD *)(v54 + 296);
            }
            v23 = (_QWORD *)*v23;
          }
          while ( v23 != v22 );
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v18);
        v41[3] = v6;
        v41[4] = 0LL;
        v41[5] = v45;
        v41[6] = (*(_DWORD *)(v9 + 80) >> 6) & 1;
      }
LABEL_32:
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v9 + 320));
      if ( v20 == 259 )
      {
        if ( v55 )
        {
          *v55 = v48;
        }
        else
        {
          v57 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v49 + 11);
          v56 = v48;
          VIDMM_GLOBAL::WaitForFences(this, &v57, (char *)&v56, 1u, 0LL);
          return 0;
        }
      }
      return (unsigned int)v20;
    }
    if ( v19 == 1 )
    {
      *a5 = D3DDDI_RECLAIM_RESULT_OK;
    }
    else
    {
      if ( v19 == 3 )
        *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
      if ( (_BYTE)v17
        && !*(_QWORD *)(v9 + 136)
        && *(_BYTE *)(v9 + 97)
        && !*(_BYTE *)(v9 + 98)
        && (*(_DWORD *)(v9 + 84) & 8) != 0 )
      {
        if ( v11 )
        {
LABEL_88:
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_22;
        }
        v34 = *(_QWORD *)(v9 + 104);
        if ( !v34 )
          goto LABEL_22;
        v18 = *(_QWORD *)(v34 + 8);
        if ( !v18 )
          goto LABEL_22;
        KeStackAttachProcess(*(PRKPROCESS *)v18, &v61);
        v35 = *(_QWORD *)(v9 + 104);
        if ( (**(_DWORD **)(v9 + 504) & 0x20000000) != 0 )
        {
          BaseAddress = *(PVOID *)(v35 + 16);
          RegionSize = *(_QWORD *)(v9 + 8);
          v36 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, 4u);
        }
        else
        {
          v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v35 + 8) + 24LL) + 128LL))(
                  *(_QWORD *)(*(_QWORD *)(v35 + 8) + 24LL),
                  *(_QWORD *)(v35 + 24));
        }
        v20 = v36;
        KeUnstackDetachProcess(&v61);
        if ( v20 < 0 )
        {
          *(_BYTE *)(v9 + 97) = 0;
          v40 = WdLogNewEntry5_WdEvent(v38, v37);
          *(_QWORD *)(v40 + 24) = v20;
          WdLogEvent5_WdEvent(v40);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Protect) = *(_QWORD *)(v9 + 8) >> 12;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v18, &EventUnreset, v17, v9, *(_QWORD *)AllocationType, Protect, 0);
          }
          v20 = 0;
        }
        else
        {
          *a5 = D3DDDI_RECLAIM_RESULT_OK;
          *(_QWORD *)(v9 + 440) = 0LL;
          v39 = WdLogNewEntry5_WdEvent(v38, v37);
          *(_QWORD *)(v39 + 24) = v9;
          WdLogEvent5_WdEvent(v39);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Protect) = *(_QWORD *)(v9 + 8) >> 12;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v18, &EventUnreset, v17, v9, *(_QWORD *)AllocationType, Protect, 1);
          }
        }
        *(_DWORD *)(v9 + 84) &= ~8u;
        LOBYTE(v19) = v45;
      }
    }
    if ( !v11 )
      goto LABEL_22;
    goto LABEL_88;
  }
  v27 = WdLogNewEntry5_WdAssertion(v18, v16);
  *(_QWORD *)(v27 + 24) = v6;
  WdLogEvent5_WdAssertion(v27);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v9 + 320));
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
