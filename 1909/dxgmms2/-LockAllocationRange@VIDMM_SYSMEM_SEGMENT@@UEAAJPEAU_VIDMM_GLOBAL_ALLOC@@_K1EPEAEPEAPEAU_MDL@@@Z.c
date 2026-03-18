/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0083EF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006A134 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006A2F4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006A9E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AEB0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        const GUID *a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // r13
  _BYTE *v14; // rax
  VIDMM_GLOBAL *v15; // rcx
  __int64 v16; // rcx
  int v17; // r14d
  _QWORD *v19; // rax
  __int64 v20; // r8
  char *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  enum _LOCK_OPERATION v24; // [rsp+28h] [rbp-D0h]
  char v25; // [rsp+40h] [rbp-B8h]
  void *v26; // [rsp+48h] [rbp-B0h] BYREF
  struct _MDL **v27; // [rsp+50h] [rbp-A8h]
  size_t Size; // [rsp+58h] [rbp-A0h]
  VIDMM_SYSMEM_SEGMENT *v29; // [rsp+60h] [rbp-98h]
  __int64 v30; // [rsp+68h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v31; // [rsp+70h] [rbp-88h]
  unsigned __int64 v32; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v29 = this;
  v31 = a2;
  v32 = a3;
  Size = (size_t)a4;
  v26 = a6;
  v27 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v25 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 13);
  v30 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
    v19[3] = a2;
    v19[4] = a3;
    v19[5] = a4;
  }
  v14 = v26;
  *(_BYTE *)v26 = 0;
  if ( *((_BYTE *)a2 + 289) )
  {
    if ( a3 == *((_QWORD *)a2 + 34) && a4 == *((const GUID **)a2 + 35) )
    {
      *v14 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v20);
  }
  if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( (*((_DWORD *)a2 + 20) & 0x2000) != 0 )
  {
LABEL_11:
    *((_QWORD *)a2 + 35) = a4;
    *((_QWORD *)a2 + 34) = a3;
    *((_BYTE *)a2 + 288) = v25;
    *((_BYTE *)a2 + 289) = 1;
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
  if ( a5 )
  {
    v25 = 1;
    v21 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v26, 0);
    if ( v21 )
    {
      memmove(*((void **)this + 32), v21, (size_t)a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v26);
    }
    else
    {
      memset(*((void **)this + 32), 0, (size_t)a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *v27 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_11;
  }
  v15 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 1) + 7040LL);
  if ( ((unsigned __int8)v15 & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C004E5C4);
    v22 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v22 + 24) = 1195LL;
    WdLogEvent5_WdLowResource(v22);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v17 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            v15,
            (struct _VIDMM_LOCAL_ALLOC *)v13,
            a2,
            a3,
            (unsigned __int64)a4,
            v24,
            this,
            1u);
    if ( v17 >= 0 )
      goto LABEL_11;
    _InterlockedIncrement(&dword_1C004E5C4);
    v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
    v23[3] = a2;
    v23[4] = a3;
    v23[5] = a4;
    WdLogEvent5_WdLowResource(v23);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v17;
  }
}
