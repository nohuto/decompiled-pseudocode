/*
 * XREFs of ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800378CC (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037D44 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180038AE0 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006812C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180068C78 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006D980 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180076DDC (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180022100 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        void *a5)
{
  int ProcessesInfo; // eax
  __int64 v9; // rdi
  int v10; // esi
  unsigned int *v11; // r14
  HANDLE *v12; // r15
  __int64 v13; // rbx
  HANDLE *v14; // rbx
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  PVOID v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  ProcessesInfo = RmHamHostGetProcessesInfo(a1, a2, a3, (struct _HAM_PROCESS_SNAPSHOT *)&P);
  LODWORD(v9) = v18;
  v10 = ProcessesInfo;
  v11 = (unsigned int *)v17;
  v12 = (HANDLE *)P;
  if ( ProcessesInfo >= 0 )
  {
    v13 = 0LL;
    if ( (_DWORD)v18 )
    {
      while ( 1 )
      {
        v10 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, HANDLE, _QWORD, void *))a4)(
                a1,
                v12[v13],
                v11[v13],
                a5);
        if ( v10 < 0 && (a3 & 1) == 0 )
          break;
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= (unsigned int)v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      v10 = 0;
    }
  }
  if ( (_DWORD)v9 )
  {
    v14 = v12;
    v9 = (unsigned int)v9;
    do
    {
      NtClose(*v14++);
      --v9;
    }
    while ( v9 );
  }
  if ( v12 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    v11 = (unsigned int *)v17;
  }
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  return (unsigned int)v10;
}
