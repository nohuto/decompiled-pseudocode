/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008C9C4
 * Callers:
 *     VidMmInitializePagingProcess @ 0x1C0018A60 (VidMmInitializePagingProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     VidSchCreateSchedulingLogs @ 0x1C008CAD4 (VidSchCreateSchedulingLogs.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008CBCC (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008CCA0 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     VidSchCreateSystemDevices @ 0x1C008CDCC (VidSchCreateSystemDevices.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C008D070 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int inited; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320), this);
  if ( inited < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v17 + 24) = 21116LL;
LABEL_16:
    WdLogEvent5_WdAssertion(v17);
    goto LABEL_9;
  }
  inited = VidSchCreateSystemDevices(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL));
  if ( inited < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v17 + 24) = 21127LL;
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v17 + 24) = 21139LL;
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v17 + 24) = 21150LL;
    goto LABEL_16;
  }
  v11 = 0;
  if ( *((_DWORD *)this + 1748) )
  {
    while ( 1 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, v11, 0);
      if ( inited < 0 )
        break;
      if ( ++v11 >= *((_DWORD *)this + 1748) )
        goto LABEL_8;
    }
    v17 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v17 + 24) = 21162LL;
    goto LABEL_16;
  }
LABEL_8:
  inited = VidSchCreateSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL));
  if ( inited < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v17 + 24) = 21170LL;
    goto LABEL_16;
  }
LABEL_9:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
