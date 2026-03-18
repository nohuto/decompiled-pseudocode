/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005DAE0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B548 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B5A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005E6E4 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C005E790 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005E960 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005EA74 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C005EB18 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C006C3BC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbp
  __int64 *v3; // rsi
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r13d
  __int64 *v10; // r14
  _QWORD *v11; // r8
  int v12; // r12d
  __int64 *v13; // r15
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rax
  __int16 v17; // cx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rcx
  int v21; // r9d
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r14
  int v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-30h]

  if ( !qword_1C004E2D8 )
    return;
  v2 = (char *)this + 39952;
  v3 = (__int64 *)((char *)this + 39992);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v21 = *((_DWORD *)v2 + 4);
      if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, (const EVENT_DESCRIPTOR *)"g", v5, v21);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v6 = (__int64 *)*v3;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == v3 )
    return;
  v7 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1760) & 0x8000) == 0 )
  {
    v8 = *((_QWORD *)this + 576) - *((_QWORD *)this + 889);
    if ( v8 < qword_1C004E2D8 )
    {
      v7 = v8 - qword_1C004E2D8;
      goto LABEL_8;
    }
  }
  v28 = &v27;
  v9 = 0;
  v27 = (__int64)&v27;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v10 = (__int64 *)*v3;
    if ( (__int64 *)*v3 == v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v12 = 0;
    v13 = v10 - 50;
    *((_QWORD *)this + 5182) = v10 - 50;
    v14 = (__int64 *)*v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      goto LABEL_26;
    v15 = (__int64 **)v10[1];
    if ( *v15 != v10 )
      goto LABEL_26;
    *v15 = v14;
    v14[1] = (__int64)v15;
    v16 = v13[63];
    *v10 = 0LL;
    v17 = *(_WORD *)(v16 + 4);
    switch ( v17 )
    {
      case 2:
        v18 = v13[17];
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 80) & 0x1001) == 0 )
            goto LABEL_21;
          if ( !v9 )
          {
            v9 = 1;
            VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1000);
            v11 = &unk_1C004E2E8;
          }
          if ( (*((_DWORD *)this + 1760) & 0x8000) != 0 || *((_QWORD *)this + 576) - v13[55] > v11[*((int *)v13 + 108)] )
          {
            *((_DWORD *)v13 + 20) |= 0x40u;
            *((_QWORD *)v2 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v2, 0LL);
            KeLeaveCriticalRegion();
            VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 50), 0LL, 0LL);
            LOBYTE(v22) = 1;
            LOBYTE(v26) = 0;
            (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v13[17] + 48LL))(
              v13[17],
              v10 - 50,
              v22,
              0LL,
              v26,
              0LL);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
            *((_QWORD *)this + 893) += v13[1];
            ++*((_DWORD *)this + 1788);
            *((_QWORD *)this + 5182) = 0LL;
          }
          else
          {
LABEL_21:
            v19 = v28;
            if ( (__int64 *)*v28 != &v27 )
              goto LABEL_26;
            v10[1] = (__int64)v28;
            *v10 = (__int64)&v27;
            *v19 = (__int64)v10;
            v28 = v10;
LABEL_23:
            *((_QWORD *)this + 5182) = 0LL;
          }
        }
        else
        {
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v13[40]);
          if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 50))
            && (*((_DWORD *)v13 + 21) & 8) == 0 )
          {
            *((_QWORD *)v2 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v2, 0LL);
            KeLeaveCriticalRegion();
            v12 = 1;
            if ( v13[33] )
              VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)v13 + 19) & 0x3F);
            VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 50));
            *((_QWORD *)this + 893) += v13[1];
            ++*((_DWORD *)this + 1788);
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)v13[40]);
          if ( !v12 )
            goto LABEL_23;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
          *((_QWORD *)this + 5182) = 0LL;
        }
        break;
      case 0:
        goto LABEL_23;
      case 3:
        *((_QWORD *)this + 5182) = 0LL;
        break;
      default:
        goto LABEL_21;
    }
  }
  if ( (__int64 *)v27 != &v27 )
  {
    v20 = (__int64 *)v3[1];
    if ( (__int64 *)v10[1] != v3
      || (__int64 *)*v20 != v3
      || *(__int64 **)(v27 + 8) != &v27
      || (__int64 *)*v28 != &v27
      || (*v20 = (__int64)&v27,
          v23 = v28,
          v3[1] = (__int64)v28,
          *v23 = (__int64)v3,
          v24 = v27,
          v28 = v20,
          *(__int64 **)(v27 + 8) != &v27)
      || (__int64 *)*v20 != &v27 )
    {
LABEL_26:
      __fastfail(3u);
    }
    *v20 = v27;
    *(_QWORD *)(v24 + 8) = v20;
  }
  v25 = (__int64 *)*v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 889) = *((_QWORD *)this + 576);
    if ( v25 != v3 )
      v7 = -qword_1C004E2D8;
  }
LABEL_8:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4LL);
}
