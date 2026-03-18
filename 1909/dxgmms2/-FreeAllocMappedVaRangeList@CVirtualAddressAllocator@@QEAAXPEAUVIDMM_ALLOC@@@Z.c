/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006BB70
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071060 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000288C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0024F60 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C002557C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C002789C (McTemplateK0ppxxxxxqxx.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0062E0C (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00777B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_ALLOC *a2)
{
  char v2; // r12
  __int64 v5; // rcx
  const GUID *v6; // r8
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rsi
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 **v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // ecx
  __int64 *v17; // r14
  __int64 v18; // rax
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rdx
  volatile signed __int32 **v23; // rax
  __int64 v24; // rdx
  __int64 **v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // r13
  volatile signed __int32 **v28; // rax
  int v29; // r9d
  __int64 VidMmAllocFromOwner; // rax
  const GUID *v31; // r8
  volatile signed __int32 **v32; // r8
  __int64 v33; // rdi
  __int64 *v34; // rdx
  __int64 **v35; // rax
  _QWORD *v36; // rdx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 *v38; // rdx
  __int64 **v39; // rax
  __int64 v40; // [rsp+50h] [rbp-58h]
  __int64 *v41; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v42; // [rsp+78h] [rbp-30h]

  v2 = 0;
  v42 = (volatile signed __int32 *)&v41;
  v41 = (__int64 *)&v41;
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 56, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v29 = *((_DWORD *)this + 18);
        if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v5, (const EVENT_DESCRIPTOR *)"g", v6, v29);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 56, 0LL);
    }
    v2 = 1;
    *((_QWORD *)this + 8) = KeGetCurrentThread();
  }
  v7 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (volatile signed __int32 *)v7 )
      break;
    if ( *((volatile signed __int32 ***)v8 + 1) != v7 )
      goto LABEL_57;
    v18 = *(_QWORD *)v8;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_57;
    *v7 = (volatile signed __int32 *)v18;
    *(_QWORD *)(v18 + 8) = v7;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    _InterlockedIncrement(v8 + 26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v8 + 10) << 28) >> 28, *((_QWORD *)v8 + 4));
      LODWORD(v40) = (_DWORD)v31;
      McTemplateK0ppxxxxxqxx(
        *((_QWORD *)v8 + 6),
        &EndGpuVirtualAddressRangeMapping,
        v31,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)v8 + 6),
        *((_QWORD *)v8 + 9),
        *((_QWORD *)v8 + 10),
        *((_QWORD *)v8 + 8),
        *((_QWORD *)v8 + 7),
        v40,
        *((_QWORD *)v8 + 11),
        *((_QWORD *)v8 + 12));
    }
    v19 = v8 - 4;
    v20 = v8 - 6;
    v21 = *((_QWORD *)v8 - 3);
    if ( *(volatile signed __int32 **)(v21 + 24LL * ((*((_DWORD *)v8 + 10) >> 4) & 0x3F) + 112) == v8 - 4 )
      *(_QWORD *)(v21 + 24LL * ((*((_DWORD *)v8 + 10) >> 4) & 0x3F) + 112) = 0LL;
    v22 = *(_QWORD *)v19;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v19 + 8LL) != v19 )
      goto LABEL_57;
    v23 = (volatile signed __int32 **)*((_QWORD *)v19 + 1);
    if ( *v23 != v19 )
      goto LABEL_57;
    *v23 = (volatile signed __int32 *)v22;
    *(_QWORD *)(v22 + 8) = v23;
    v24 = *((_QWORD *)v20 + 7);
    *(_QWORD *)v19 = 0LL;
    v25 = (__int64 **)GetVidMmAllocFromOwner((int)(*((_DWORD *)v20 + 16) << 28) >> 28, v24);
    if ( v25 )
    {
      v26 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
      {
        if ( *(volatile signed __int32 **)(v26 + 8) != v8 )
          goto LABEL_57;
        v32 = (volatile signed __int32 **)*((_QWORD *)v20 + 4);
        if ( *v32 != v8 )
          goto LABEL_57;
        *v32 = (volatile signed __int32 *)v26;
        *(_QWORD *)(v26 + 8) = v32;
        *(_QWORD *)v8 = 0LL;
      }
      v27 = (__int64 *)(v20 + 10);
      if ( *((_QWORD *)v20 + 5) )
      {
        v33 = **v25;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v33 + 352, 0LL);
        v34 = (__int64 *)*v27;
        if ( *(__int64 **)(*v27 + 8) != v27 )
          goto LABEL_57;
        v35 = (__int64 **)*((_QWORD *)v20 + 6);
        if ( *v35 != v27 )
          goto LABEL_57;
        *v35 = v34;
        v34[1] = (__int64)v35;
        *v27 = 0LL;
        ExReleasePushLockExclusiveEx(v33 + 352, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    --*(_DWORD *)(v21 + 76);
    *(_QWORD *)v20 = 0LL;
    if ( _InterlockedExchangeAdd(v8 + 26, 0xFFFFFFFF) == 1 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v8 - 3);
    if ( (*(_BYTE *)(v21 + 72) & 0xF) == 3 && !*(_DWORD *)(v21 + 76) )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v21);
    v28 = (volatile signed __int32 **)v42;
    if ( *(__int64 ***)v42 != &v41 )
LABEL_57:
      __fastfail(3u);
    *((_QWORD *)v8 + 1) = v42;
    *(_QWORD *)v8 = &v41;
    *v28 = v8;
    v42 = v8;
  }
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  v9 = v41;
  while ( v9 != (__int64 *)&v41 )
  {
    v10 = v9 - 3;
    v11 = v9;
    if ( (v9[5] & 0xC00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        *((VIDMM_GLOBAL **)this + 10),
        this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 3),
        KeGetCurrentThread() == *(struct _KTHREAD **)(**((_QWORD **)this + 10) + 8LL),
        0LL);
      *((_DWORD *)v10 + 16) &= 0xFFFFF3FF;
    }
    v9 = (__int64 *)*v9;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 32, 0xFFFFFFFF) == 1 )
    {
      v12 = *v11;
      if ( *v11 )
      {
        if ( *(__int64 **)(v12 + 8) != v11 )
          goto LABEL_57;
        v13 = (__int64 **)v11[1];
        if ( *v13 != v11 )
          goto LABEL_57;
        *v13 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        *v11 = 0LL;
      }
      v14 = v10[1];
      v15 = v10 + 1;
      if ( v14 )
      {
        if ( *(_QWORD **)(v14 + 8) != v15 )
          goto LABEL_57;
        v36 = (_QWORD *)v10[2];
        if ( (_QWORD *)*v36 != v15 )
          goto LABEL_57;
        *v36 = v14;
        *(_QWORD *)(v14 + 8) = v36;
        *v15 = 0LL;
      }
      v16 = *((_DWORD *)v10 + 16);
      if ( (v16 & 0x1000) == 0 )
      {
        v17 = v10 + 5;
        if ( v10[5] )
        {
          VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v16 << 28 >> 28, v10[7]);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
          v38 = (__int64 *)*v17;
          if ( *(__int64 **)(*v17 + 8) != v17 )
            goto LABEL_57;
          v39 = (__int64 **)v10[6];
          if ( *v39 != v17 )
            goto LABEL_57;
          *v39 = v38;
          v38[1] = (__int64)v39;
          *v17 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      operator delete(v10);
    }
  }
}
