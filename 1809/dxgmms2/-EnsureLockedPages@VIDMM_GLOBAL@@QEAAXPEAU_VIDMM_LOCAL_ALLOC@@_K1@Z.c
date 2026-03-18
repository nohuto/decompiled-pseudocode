/*
 * XREFs of ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00A8210
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006F03C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C450 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

void __fastcall VIDMM_GLOBAL::EnsureLockedPages(VIDMM_GLOBAL *this, PRKPROCESS **a2, __int64 a3, const GUID *a4)
{
  __int64 v8; // rcx
  VIDMM_GLOBAL *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void **v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  VIDMM_GLOBAL **v19; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v9 = (VIDMM_GLOBAL *)operator new[](0x20uLL, 0x39356956u, PagedPool);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C004D6E0);
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 23303LL;
    WdLogEvent5_WdLowResource(v10);
LABEL_5:
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v18[5] = 0LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    v18[3] = 270LL;
    v18[4] = 55LL;
    WdLogEvent5_WdCriticalError(v18);
    return;
  }
  KeStackAttachProcess(*a2[1], &ApcState);
  *((_QWORD *)v9 + 2) = VidMmiProbeAndLockAllocation(
                          (struct _VIDMM_GLOBAL_ALLOC *)*a2,
                          a3,
                          a4,
                          IoModifyAccess,
                          0LL,
                          (struct _VIDMM_LOCAL_ALLOC *)a2);
  KeUnstackDetachProcess(&ApcState);
  v13 = (void **)a2[1];
  v14 = *v13;
  *((_QWORD *)v9 + 3) = *v13;
  ObfReferenceObject(v14);
  if ( !*((_QWORD *)v9 + 2) )
  {
    v17 = WdLogNewEntry5_WdWarning(v16, v15);
    WdLogEvent5_WdWarning(v17);
    goto LABEL_5;
  }
  v19 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4998);
  if ( *v19 != (VIDMM_GLOBAL *)((char *)this + 39976) )
    __fastfail(3u);
  *(_QWORD *)v9 = (char *)this + 39976;
  *((_QWORD *)v9 + 1) = v19;
  *v19 = v9;
  *((_QWORD *)this + 4998) = v9;
}
