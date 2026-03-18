/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00BBEB0
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
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0083B54 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        const GUID *a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  __int64 v11; // rcx
  int v12; // r13d
  PRKPROCESS **v13; // rbx
  _QWORD *v14; // rax
  unsigned __int8 *v15; // rax
  VIDMM_GLOBAL *v16; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v18; // r8
  char *v19; // rax
  VIDMM_GLOBAL *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // ebx
  _QWORD *v25; // rax
  enum _LOCK_OPERATION v26; // [rsp+28h] [rbp-D0h]
  char v27; // [rsp+40h] [rbp-B8h]
  void *v28; // [rsp+48h] [rbp-B0h] BYREF
  struct _MDL **v29; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v30; // [rsp+58h] [rbp-A0h]
  size_t Size; // [rsp+60h] [rbp-98h]
  VIDMM_APERTURE_SEGMENT *v32; // [rsp+68h] [rbp-90h]
  PRKPROCESS **v33; // [rsp+70h] [rbp-88h]
  struct _VIDMM_GLOBAL_ALLOC *v34; // [rsp+78h] [rbp-80h]
  unsigned __int64 v35; // [rsp+80h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v32 = this;
  v34 = a2;
  v35 = a3;
  Size = (size_t)a4;
  v30 = a6;
  v29 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v27 = 0;
  *a7 = 0LL;
  v13 = (PRKPROCESS **)*((_QWORD *)a2 + 13);
  v28 = v13;
  v33 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
  }
  v15 = v30;
  *v30 = 0;
  if ( *((_BYTE *)a2 + 289) )
  {
    if ( a3 == *((_QWORD *)a2 + 34) && a4 == *((const GUID **)a2 + 35) )
    {
      *v15 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    v16 = *(VIDMM_GLOBAL **)this;
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
    (*((void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v16
     + 15))(
      this,
      a2,
      *((_QWORD *)a2 + 34),
      *((_QWORD *)a2 + 35),
      MDLForRange);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v18);
    v13 = (PRKPROCESS **)v28;
  }
  if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(*v13[1], &ApcState);
    v12 = 1;
  }
  if ( a5 )
  {
    v27 = 1;
    v19 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v28, 0);
    if ( v19 )
    {
      memmove(*((void **)this + 32), v19, (size_t)a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v28);
    }
    else
    {
      memset(*((void **)this + 32), 0, (size_t)a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *v29 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_16;
  }
  v21 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 1) + 7040LL);
  if ( ((unsigned __int8)v21 & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C004E5C4);
    v22 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v22 + 24) = 1600LL;
    WdLogEvent5_WdLowResource(v22);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v24 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            v21,
            (struct _VIDMM_LOCAL_ALLOC *)v13,
            a2,
            a3,
            (unsigned __int64)a4,
            v26,
            this,
            1u);
    if ( v24 >= 0 )
    {
LABEL_16:
      *((_QWORD *)a2 + 35) = a4;
      *((_QWORD *)a2 + 34) = a3;
      *((_BYTE *)a2 + 288) = v27;
      *((_BYTE *)a2 + 289) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C004E5C4);
    v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23);
    v25[3] = a2;
    v25[4] = a3;
    v25[5] = a4;
    WdLogEvent5_WdLowResource(v25);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v24;
  }
}
