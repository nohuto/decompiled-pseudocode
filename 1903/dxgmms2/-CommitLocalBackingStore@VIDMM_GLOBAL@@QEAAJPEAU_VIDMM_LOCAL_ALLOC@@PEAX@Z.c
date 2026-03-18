/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C00760F8
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00754F0 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075850 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007E3E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007E400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  char v16; // r9
  char v17; // dl
  int v18; // eax
  __int64 v19; // rcx
  VIDMM_PROCESS *v20; // rcx
  char v22; // al
  void *v23; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS inserted; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 CurrentProcess; // rax
  int v30; // eax
  __int64 v31; // rcx
  VIDMM_PROCESS *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  VIDMM_PROCESS *v40; // rcx
  __int64 v41; // rax
  _BYTE v42[8]; // [rsp+60h] [rbp-98h] BYREF
  VIDMM_PROCESS *v43; // [rsp+68h] [rbp-90h] BYREF
  __int64 v44; // [rsp+70h] [rbp-88h] BYREF
  __int64 v45; // [rsp+78h] [rbp-80h] BYREF
  __int64 v46; // [rsp+80h] [rbp-78h] BYREF
  struct _KAPC_STATE v47; // [rsp+88h] [rbp-70h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-40h]

  LODWORD(v6) = 0;
  v43 = 0LL;
  v7 = *(_QWORD *)a2;
  v8 = *((_QWORD *)a2 + 1);
  v48 = v8;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v8, &v47);
  v10 = *(_DWORD *)(v7 + 80);
  if ( (v10 & 0x2000) != 0 )
  {
    v32 = *(VIDMM_PROCESS **)(v7 + 536);
LABEL_39:
    v43 = v32;
    goto LABEL_19;
  }
  v11 = 278528LL;
  if ( (v10 & 0x44000) == 0x44000 )
  {
    v32 = *(VIDMM_PROCESS **)(v7 + 520);
    goto LABEL_39;
  }
  if ( (v10 & 0x8400) != 0 )
    goto LABEL_19;
  v12 = *(_DWORD **)(v7 + 504);
  if ( (v10 & 0x40000) != 0 )
  {
    if ( (*v12 & 0x400000) == 0 )
    {
      v22 = *(_BYTE *)(v7 + 88);
      v23 = *(void **)(v7 + 360);
      if ( (v22 & 1) != 0 )
      {
        *(_BYTE *)(v7 + 88) = v22 & 0xFE;
        inserted = ObInsertObject(v23, 0LL, 0, 0, 0LL, (PHANDLE)a2 + 12);
      }
      else
      {
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v23);
        inserted = ObOpenObjectByPointer(*(PVOID *)(v7 + 360), 0, 0LL, 0, ObjectType, 1, (PHANDLE)a2 + 12);
      }
      v6 = inserted;
      if ( inserted < 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v26, v9);
        *(_QWORD *)(v33 + 24) = *(_QWORD *)(v7 + 360);
        *(_QWORD *)(v33 + 32) = v6;
        WdLogEvent5_WdAssertion(v33);
        goto LABEL_20;
      }
    }
    if ( (*(_DWORD *)(v7 + 80) & 0x80u) != 0 )
    {
      v44 = 0LL;
      v27 = **(unsigned int **)(v7 + 504);
      v28 = (_QWORD *)(v7 + 8);
      if ( (v27 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v27, v9);
        v30 = MmMapViewOfSection(*(_QWORD *)(v7 + 360), CurrentProcess, &v43, 0LL, *v28, &v44, v7 + 8, 2, 0, 4);
      }
      else
      {
        v34 = PsGetCurrentProcess(v27, v9);
        v30 = MmMapViewOfSection(*(_QWORD *)(v7 + 360), v34, &v43, 0LL, *v28, &v44, v7 + 8, 2, 0, 1028);
      }
      LODWORD(v6) = v30;
      if ( v30 < 0 )
      {
        _InterlockedIncrement(&dword_1C004E59C);
        v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v31);
        v35[3] = v7;
        v35[4] = PsGetCurrentProcess(v37, v36);
        v35[5] = (int)v6;
        WdLogEvent5_WdLowResource(v35);
        goto LABEL_20;
      }
    }
LABEL_19:
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16)
                                                        + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL))
                                            + 48LL)
                                + 296LL * (*(_DWORD *)(v7 + 76) & 0x3F)
                                + 224),
      *(_QWORD *)(v7 + 8));
    v20 = v43;
    *((_QWORD *)a2 + 2) = v43;
LABEL_20:
    VIDMM_PROCESS::SafeDetach(v20, &v47);
    return (unsigned int)v6;
  }
  v13 = (unsigned int)*v12;
  if ( (v13 & 8) != 0 )
    goto LABEL_19;
  if ( (v13 & 0x10) != 0 )
  {
    if ( (v10 & 0x1000) == 0 )
    {
      if ( a3 != (a3 & 0xFFFFFFFFFFFFF000uLL)
        || (v11 = *(_QWORD *)v7, *(_QWORD *)v7 != (*(_QWORD *)v7 & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v11, -4096LL);
        *(_QWORD *)(v38 + 24) = 28130LL;
        WdLogEvent5_WdAssertion(v38);
        LODWORD(v6) = -1073741811;
        goto LABEL_20;
      }
      ProbeForWrite((volatile void *)a3, *(_QWORD *)(v7 + 8), 1u);
    }
LABEL_53:
    v43 = (VIDMM_PROCESS *)a3;
    goto LABEL_19;
  }
  if ( (v13 & 0x20) == 0 )
  {
    if ( (v10 & 0x4000) != 0 )
    {
      v15 = ((v13 & 4) != 0) + 9;
    }
    else if ( (v10 & 0x80u) == 0 )
    {
      v15 = 4;
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 308LL) & 8) == 0 && (v13 & 4) == 0 )
        v15 = 3;
    }
    else if ( (*(_DWORD *)(v7 + 76) & 0x100) != 0 )
    {
      v15 = ((v13 & 4) != 0) + 5;
    }
    else
    {
      v14 = *v12 & 0x800;
      if ( (v13 & 4) != 0 )
        v15 = v14 != 0 ? 8 : 2;
      else
        v15 = v14 != 0 ? 7 : 1;
    }
    v45 = 0LL;
    v42[0] = 0;
    v16 = BYTE1(v10) & 1;
    if ( v15 - 3 > 3
      && (*(_DWORD *)(v7 + 76) & 0x80u) == 0
      && ((*(_DWORD *)(*((_QWORD *)this + 3) + 308LL) & 8) != 0 || (v13 & 1) != 0) )
    {
      v16 = 0;
    }
    v46 = 0LL;
    v17 = 0;
    if ( v15 - 9 > 1 )
      v17 = v16;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, VIDMM_PROCESS **, __int64 *, _BYTE *, bool, char))(**(_QWORD **)(v8 + 24) + 16LL))(
            *(_QWORD *)(v8 + 24),
            *(_QWORD *)(v7 + 8),
            *(unsigned int *)(v7 + 32),
            v15,
            &v45,
            &v43,
            &v46,
            v42,
            (v10 & 0x80000) != 0,
            v17);
    v6 = v18;
    if ( v18 < 0 )
    {
      _InterlockedIncrement(&dword_1C004E628);
      v41 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v41 + 24) = *(_QWORD *)(v7 + 8);
      *(_QWORD *)(v41 + 32) = v6;
      WdLogEvent5_WdLowResource(v41);
    }
    else
    {
      *((_QWORD *)a2 + 3) = v45;
      if ( (*(_DWORD *)(v7 + 80) & 0x4000) != 0 )
        *(_QWORD *)(v7 + 536) = v46;
    }
    goto LABEL_19;
  }
  if ( a3 >= MmUserProbeAddress )
  {
    if ( a3 != (a3 & 0xFFFFFFFFFFFFF000uLL)
      || (v11 = *(_QWORD *)v7, *(_QWORD *)v7 != (*(_QWORD *)v7 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v11, -4096LL);
      *(_QWORD *)(v39 + 24) = 28188LL;
      goto LABEL_50;
    }
    goto LABEL_53;
  }
  v39 = WdLogNewEntry5_WdAssertion(278528LL, v13);
  *(_QWORD *)(v39 + 24) = 28175LL;
LABEL_50:
  WdLogEvent5_WdAssertion(v39);
  VIDMM_PROCESS::SafeDetach(v40, &v47);
  return 3221225485LL;
}
