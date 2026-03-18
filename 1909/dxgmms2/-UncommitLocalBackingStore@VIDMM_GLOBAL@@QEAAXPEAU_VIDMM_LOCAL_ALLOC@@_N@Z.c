/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070B50
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0070D30 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0075200 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075560 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAC44 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007F510 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007F530 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  VIDMM_PROCESS *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 CurrentProcess; // rax
  struct _KAPC_STATE v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v19 = v3;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v3, &v18);
  v8 = *(_DWORD *)(v5 + 80);
  v9 = v8;
  if ( (v8 & 0x2000) == 0
    && (v8 & 0x44000) != 0x44000
    && (v8 & 0x400) == 0
    && ((v8 & 0x40000) != 0 || (**(_DWORD **)(v5 + 504) & 0x40000) != 0) )
  {
    v9 = v8;
    if ( a3 )
    {
      v16 = *((_QWORD *)a2 + 2);
      if ( v16 )
      {
        CurrentProcess = PsGetCurrentProcess(278528LL, v8);
        MmUnmapViewOfSection(CurrentProcess, v16);
        v9 = *(unsigned int *)(v5 + 80);
      }
    }
  }
  v10 = **(unsigned int **)(v5 + 504);
  if ( (v9 & 0x40000) != 0 )
  {
    if ( (v10 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v12 = WdLogNewEntry5_WdEvent(v10, v9);
      v13 = *((_QWORD *)a2 + 12);
      v14 = v12;
      *(_QWORD *)(v12 + 24) = v13;
      *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13, v15);
      WdLogEvent5_WdEvent(v14);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v10 & 8) == 0 && (v10 & 0x10) == 0 && (v10 & 0x20) == 0 && *((_QWORD *)a2 + 3) && a3 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v3 + 24) + 24LL))(
      *(_QWORD *)(v3 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  v11 = (VIDMM_PROCESS *)(296LL * (*(_DWORD *)(v5 + 76) & 0x3F));
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)((char *)v11
                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL))
                                          + 48LL)
                              + 224),
    -*(_QWORD *)(v5 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v11, &v18);
}
