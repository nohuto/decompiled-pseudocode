/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0065BEC
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00631DC (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0065A48 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007643C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7930 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007C870 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007C890 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  VIDMM_PROCESS *v12; // rcx
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  struct _KAPC_STATE v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v20 = v3;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v3, &v19);
  v9 = *(_DWORD *)(v5 + 80);
  v10 = v9;
  if ( (v9 & 0x1400) == 0 && ((v9 & 0x20000) != 0 || (**(_DWORD **)(v5 + 504) & 0x40000) != 0) )
  {
    v10 = v9;
    if ( a3 )
    {
      v13 = *((_QWORD *)a2 + 2);
      if ( v13 )
      {
        CurrentProcess = PsGetCurrentProcess(v8, v9);
        MmUnmapViewOfSection(CurrentProcess, v13);
        v10 = *(unsigned int *)(v5 + 80);
      }
    }
  }
  v11 = **(unsigned int **)(v5 + 504);
  if ( (v10 & 0x20000) != 0 )
  {
    if ( (v11 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v15 = WdLogNewEntry5_WdEvent(v11, v10);
      v16 = *((_QWORD *)a2 + 12);
      v17 = v15;
      *(_QWORD *)(v15 + 24) = v16;
      *(_QWORD *)(v15 + 32) = PsGetCurrentProcess(v16, v18);
      WdLogEvent5_WdEvent(v17);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v11 & 8) == 0 && (v11 & 0x10) == 0 && (v11 & 0x20) == 0 && *((_QWORD *)a2 + 3) && a3 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v3 + 24) + 24LL))(
      *(_QWORD *)(v3 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  v12 = (VIDMM_PROCESS *)(296LL * (*(_DWORD *)(v5 + 76) & 0x3F));
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)((char *)v12
                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL))
                                          + 48LL)
                              + 224),
    -*(_QWORD *)(v5 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v12, &v19);
}
