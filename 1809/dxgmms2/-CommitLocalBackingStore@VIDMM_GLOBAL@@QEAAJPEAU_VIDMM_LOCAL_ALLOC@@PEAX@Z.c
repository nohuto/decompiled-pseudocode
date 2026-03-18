/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C00656EC
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00631DC (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007643C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007C870 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007C890 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3)
{
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  char v14; // r9
  char v15; // dl
  __int64 v16; // rcx
  VIDMM_PROCESS *v17; // rcx
  char v19; // al
  void *v20; // rcx
  NTSTATUS inserted; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 CurrentProcess; // rax
  int v26; // eax
  __int64 v27; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  VIDMM_PROCESS *v34; // rcx
  __int64 v35; // rax
  _BYTE v36[8]; // [rsp+60h] [rbp-A8h] BYREF
  VIDMM_PROCESS *v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  struct _KAPC_STATE v41; // [rsp+88h] [rbp-80h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h]

  LODWORD(v6) = 0;
  v37 = 0LL;
  v7 = *(__int64 **)a2;
  v8 = *((_QWORD *)a2 + 1);
  v42 = v8;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v8, &v41);
  v10 = *((_DWORD *)v7 + 20);
  if ( (v10 & 0x1000) != 0 )
  {
    v37 = (VIDMM_PROCESS *)v7[66];
    goto LABEL_19;
  }
  if ( (v10 & 0x4400) != 0 )
  {
LABEL_19:
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16)
                                                        + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL))
                                            + 48LL)
                                + 296LL * (*((_DWORD *)v7 + 19) & 0x3F)
                                + 224),
      v7[1]);
    v17 = v37;
    *((_QWORD *)a2 + 2) = v37;
LABEL_20:
    VIDMM_PROCESS::SafeDetach(v17, &v41);
    return (unsigned int)v6;
  }
  v11 = *(unsigned int *)v7[63];
  if ( (v10 & 0x20000) != 0 )
  {
    if ( (v11 & 0x400000) == 0 )
    {
      v19 = *((_BYTE *)v7 + 88);
      v20 = (void *)v7[45];
      if ( (v19 & 1) != 0 )
      {
        *((_BYTE *)v7 + 88) = v19 & 0xFE;
        inserted = ObInsertObject(v20, 0LL, 0, 0, 0LL, (PHANDLE)a2 + 12);
      }
      else
      {
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v20);
        inserted = ObOpenObjectByPointer((PVOID)v7[45], 0, 0LL, 0, ObjectType, 1, (PHANDLE)a2 + 12);
      }
      v6 = inserted;
      if ( inserted < 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v29 + 24) = v7[45];
        *(_QWORD *)(v29 + 32) = v6;
        WdLogEvent5_WdAssertion(v29);
        goto LABEL_20;
      }
    }
    if ( (*((_DWORD *)v7 + 20) & 0x80u) != 0 )
    {
      v38 = 0LL;
      v24 = v7[1];
      if ( (*(_DWORD *)v7[63] & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        v26 = MmMapViewOfSection(v7[45], CurrentProcess, &v37, 0LL, v24, &v38, v7 + 1, 2, 0, 4);
      }
      else
      {
        v30 = PsGetCurrentProcess();
        v26 = MmMapViewOfSection(v7[45], v30, &v37, 0LL, v24, &v38, v7 + 1, 2, 0, 1028);
      }
      LODWORD(v6) = v26;
      if ( v26 < 0 )
      {
        _InterlockedIncrement(&dword_1C004D5BC);
        v31 = (_QWORD *)WdLogNewEntry5_WdLowResource(v27);
        v31[3] = v7;
        v31[4] = PsGetCurrentProcess();
        v31[5] = (int)v6;
        WdLogEvent5_WdLowResource(v31);
        goto LABEL_20;
      }
    }
    goto LABEL_19;
  }
  if ( (v11 & 8) != 0 )
    goto LABEL_19;
  if ( (v11 & 0x10) != 0 )
  {
    if ( (v10 & 0x800) == 0 )
    {
      if ( a3 != (a3 & 0xFFFFFFFFFFFFF000uLL) || (v9 = *v7, *v7 != (*v7 & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v9, -4096LL);
        *(_QWORD *)(v32 + 24) = 27854LL;
        WdLogEvent5_WdAssertion(v32);
        LODWORD(v6) = -1073741811;
        goto LABEL_20;
      }
      ProbeForWrite((volatile void *)a3, v7[1], 1u);
    }
LABEL_50:
    v37 = (VIDMM_PROCESS *)a3;
    goto LABEL_19;
  }
  if ( (v11 & 0x20) == 0 )
  {
    if ( (v10 & 0x2000) != 0 )
    {
      v13 = ((v11 & 4) != 0) + 9;
    }
    else if ( (v10 & 0x80u) == 0 )
    {
      v13 = 4;
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 308LL) & 8) == 0 && (v11 & 4) == 0 )
        v13 = 3;
    }
    else if ( (*((_DWORD *)v7 + 19) & 0x100) != 0 )
    {
      v13 = ((*(_DWORD *)v7[63] & 4) != 0) + 5;
    }
    else
    {
      v12 = *(_DWORD *)v7[63] & 0x800;
      if ( (v11 & 4) != 0 )
        v13 = v12 != 0 ? 8 : 2;
      else
        v13 = v12 != 0 ? 7 : 1;
    }
    v39 = 0LL;
    v36[0] = 0;
    v14 = BYTE1(v10) & 1;
    if ( v13 - 3 > 3
      && (*((_DWORD *)v7 + 19) & 0x80u) == 0
      && ((*(_DWORD *)(*((_QWORD *)this + 3) + 308LL) & 8) != 0 || (v11 & 1) != 0) )
    {
      v14 = 0;
    }
    v40 = 0LL;
    v15 = 0;
    if ( v13 - 9 > 1 )
      v15 = v14;
    LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64 *, VIDMM_PROCESS **, __int64 *, _BYTE *, bool, char))(**(_QWORD **)(v8 + 24) + 16LL))(
                    *(_QWORD *)(v8 + 24),
                    v7[1],
                    *((unsigned int *)v7 + 8),
                    v13,
                    &v39,
                    &v37,
                    &v40,
                    v36,
                    (v10 & 0x40000) != 0,
                    v15);
    if ( (int)v6 < 0 )
    {
      _InterlockedIncrement(&dword_1C004D648);
      v35 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v35 + 24) = 28008LL;
      WdLogEvent5_WdLowResource(v35);
    }
    else
    {
      *((_QWORD *)a2 + 3) = v39;
      if ( (v7[10] & 0x2000) != 0 )
        v7[66] = v40;
    }
    goto LABEL_19;
  }
  if ( a3 >= MmUserProbeAddress )
  {
    if ( a3 != (a3 & 0xFFFFFFFFFFFFF000uLL) || (v9 = *v7, *v7 != (*v7 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v9, -4096LL);
      *(_QWORD *)(v33 + 24) = 27912LL;
      goto LABEL_47;
    }
    goto LABEL_50;
  }
  v33 = WdLogNewEntry5_WdAssertion(v9, v11);
  *(_QWORD *)(v33 + 24) = 27899LL;
LABEL_47:
  WdLogEvent5_WdAssertion(v33);
  VIDMM_PROCESS::SafeDetach(v34, &v41);
  return 3221225485LL;
}
