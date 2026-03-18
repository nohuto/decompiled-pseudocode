/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0071B98
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0010884 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00109F4 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0027D98 (McTemplateK0ppxxxxxqxx.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00592E4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0066880 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00767E8 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_ALLOC *a2)
{
  char v2; // r13
  __int64 v5; // rcx
  const GUID *v6; // r8
  volatile signed __int32 **v7; // r12
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  volatile signed __int32 **v15; // rax
  const GUID *v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // r15
  volatile signed __int32 **v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  int v22; // r9d
  __int64 VidMmAllocFromOwner; // rax
  const GUID *v24; // r8
  volatile signed __int32 **v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // rdx
  __int64 **v28; // rax
  __int64 v29; // [rsp+50h] [rbp-58h]
  _QWORD *v30; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-30h]

  v2 = 0;
  v31 = (volatile signed __int32 *)&v30;
  v30 = &v30;
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 56, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v22 = *((_DWORD *)this + 18);
        if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v5, &EventBlockThread, v6, v22);
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
      goto LABEL_43;
    v9 = *(_QWORD *)v8;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_43;
    *v7 = (volatile signed __int32 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    _InterlockedIncrement(v8 + 26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v8 + 10) << 28) >> 28, *((_QWORD *)v8 + 4));
      LODWORD(v29) = (_DWORD)v24;
      McTemplateK0ppxxxxxqxx(
        *((_QWORD *)v8 + 6),
        &EndGpuVirtualAddressRangeMapping,
        v24,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)v8 + 6),
        *((_QWORD *)v8 + 9),
        *((_QWORD *)v8 + 10),
        *((_QWORD *)v8 + 8),
        *((_QWORD *)v8 + 7),
        v29,
        *((_QWORD *)v8 + 11),
        *((_QWORD *)v8 + 12));
    }
    v10 = v8 - 4;
    v11 = v8 - 6;
    v12 = *((_QWORD *)v8 - 3);
    v13 = (*((_DWORD *)v8 + 10) >> 4) & 0x3F;
    if ( *(volatile signed __int32 **)(v12 + 24 * v13 + 112) == v8 - 4 )
      *(_QWORD *)(v12 + 24 * v13 + 112) = 0LL;
    v14 = *(_QWORD *)v10;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v10 + 8LL) != v10 )
      goto LABEL_43;
    v15 = (volatile signed __int32 **)*((_QWORD *)v10 + 1);
    if ( *v15 != v10 )
      goto LABEL_43;
    *v15 = (volatile signed __int32 *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)v10 = 0LL;
    v16 = (const GUID *)GetVidMmAllocFromOwner((int)(*((_DWORD *)v11 + 16) << 28) >> 28, *((_QWORD *)v11 + 7));
    if ( v16 )
    {
      v17 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
      {
        if ( *(volatile signed __int32 **)(v17 + 8) != v8 )
          goto LABEL_43;
        v25 = (volatile signed __int32 **)*((_QWORD *)v11 + 4);
        if ( *v25 != v8 )
          goto LABEL_43;
        *v25 = (volatile signed __int32 *)v17;
        *(_QWORD *)(v17 + 8) = v25;
        *(_QWORD *)v8 = 0LL;
      }
      v18 = (__int64 *)(v11 + 10);
      if ( *((_QWORD *)v11 + 5) )
      {
        v26 = **(_QWORD **)&v16->Data1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v26 + 352, 0LL);
        v27 = (__int64 *)*v18;
        if ( *(__int64 **)(*v18 + 8) != v18 )
          goto LABEL_43;
        v28 = (__int64 **)*((_QWORD *)v11 + 6);
        if ( *v28 != v18 )
          goto LABEL_43;
        *v28 = v27;
        v27[1] = (__int64)v28;
        *v18 = 0LL;
        ExReleasePushLockExclusiveEx(v26 + 352, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    --*(_DWORD *)(v12 + 76);
    *(_QWORD *)v11 = 0LL;
    if ( _InterlockedExchangeAdd(v8 + 26, 0xFFFFFFFF) == 1 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v8 - 3);
    if ( (*(_BYTE *)(v12 + 72) & 0xF) == 3 && !*(_DWORD *)(v12 + 76) )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v12, v16);
    v19 = (volatile signed __int32 **)v31;
    if ( *(_QWORD ***)v31 != &v30 )
LABEL_43:
      __fastfail(3u);
    *((_QWORD *)v8 + 1) = v31;
    *(_QWORD *)v8 = &v30;
    *v19 = v8;
    v31 = v8;
  }
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  v20 = v30;
  while ( v20 != &v30 )
  {
    v21 = v20 - 3;
    if ( (v20[5] & 0xC00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        *((VIDMM_GLOBAL **)this + 10),
        this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v20 - 3),
        KeGetCurrentThread() == *(struct _KTHREAD **)(**((_QWORD **)this + 10) + 8LL),
        0LL);
      *((_DWORD *)v21 + 16) &= 0xFFFFF3FF;
    }
    v20 = (_QWORD *)*v20;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v21, (struct _KTHREAD **)this);
  }
}
