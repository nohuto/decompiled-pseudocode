/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A73C
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005ABF8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AAA0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00861B0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     MapGpadl @ 0x1C00248B4 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C00248FC (UnmapGpadl.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A8A0 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006A9E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v4; // ecx
  int v5; // eax
  VIDMM_GLOBAL *v6; // rcx
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // edi
  __int64 result; // rax
  __int64 v11; // rbx
  char *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  enum _LOCK_OPERATION v17; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE v18; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 308LL) & 4) != 0
    && (**((_DWORD **)a2 + 63) & 0x4000) == 0
    || (v4 = *((_DWORD *)a2 + 20), (v4 & 0x2000) != 0) )
  {
    v11 = *((_QWORD *)a2 + 13);
    if ( v11 && *(_QWORD *)(v11 + 24) )
    {
      memset(&v18, 0, sizeof(v18));
      KeStackAttachProcess(**(PRKPROCESS **)(v11 + 8), &v18);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v11 + 8) + 24LL) + 152LL))(
        *(_QWORD *)(*(_QWORD *)(v11 + 8) + 24LL),
        *(_QWORD *)(v11 + 24));
      KeUnstackDetachProcess(&v18);
    }
    return 0LL;
  }
  v5 = *((_DWORD *)a2 + 87);
  if ( v5 )
  {
LABEL_11:
    *((_DWORD *)a2 + 87) = v5 + 1;
    return 0LL;
  }
  if ( (v4 & 0x8000) == 0 )
  {
    v6 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 63);
    if ( ((unsigned __int8)v6 & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
    v7 = VIDMM_GLOBAL::ProbeAndLockAllocation(
           v6,
           *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13),
           a2,
           0LL,
           *((_QWORD *)a2 + 1),
           v17,
           this,
           0);
    v8 = (_DWORD *)*((_QWORD *)a2 + 63);
    v9 = v7;
    if ( (*v8 & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v9 < 0 )
    {
      _InterlockedIncrement(&dword_1C004E5C4);
      v16 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v16 + 24) = a2;
      *(_QWORD *)(v16 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdLowResource(v16);
      return 3223191809LL;
    }
    goto LABEL_10;
  }
  v12 = (char *)a2 + 520;
  result = MapGpadl();
  if ( (int)result >= 0 )
  {
    v14 = *(unsigned int *)(*(_QWORD *)v12 + 40LL);
    if ( v14 < *((_QWORD *)a2 + 1) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v15 + 24) = *(unsigned int *)(*(_QWORD *)v12 + 40LL);
      *(_QWORD *)(v15 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdAssertion(v15);
      UnmapGpadl();
      *(_QWORD *)v12 = 0LL;
      return 3221225485LL;
    }
LABEL_10:
    VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2);
    v5 = *((_DWORD *)a2 + 87);
    goto LABEL_11;
  }
  return result;
}
