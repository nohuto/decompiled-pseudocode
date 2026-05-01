/*
 * XREFs of ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180012790
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000DAFC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800109AC (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001270C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A954 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18003B718 (-HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18005B37C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18005BC74 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180060A20 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069194 (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        void *a5)
{
  unsigned int *v6; // rdi
  unsigned int *Heap; // rbp
  char *v9; // rdx
  char *v10; // r10
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // r12d
  ACCESS_MASK v14; // r15d
  unsigned int v15; // ebp
  unsigned int *v16; // r14
  unsigned int v17; // r13d
  NTSTATUS v18; // eax
  PVOID ProcessHeap; // rcx
  unsigned int *v21; // rax
  unsigned int v22; // [rsp+40h] [rbp-98h] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-90h] BYREF
  char v24; // [rsp+50h] [rbp-88h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-70h] BYREF

  v6 = 0LL;
  ProcessHandle = 0LL;
  v22 = 1;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v9 = (char *)a1 + 88;
    v10 = (char *)a1 + 552;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
              v10,
              *((unsigned int *)a1 + 155),
              v9,
              *((unsigned int *)a1 + 156),
              *((_QWORD *)a1 + 4),
              Heap,
              &v22);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v6 = Heap;
        goto LABEL_5;
      }
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v11 != -2147483643 )
        break;
      RtlFreeHeap(ProcessHeap, 0, Heap);
      v21 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v22);
      v9 = (char *)a1 + 88;
      Heap = v21;
      v10 = (char *)a1 + 552;
      if ( !v21 )
      {
        v12 = -1073741801;
        goto LABEL_5;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, Heap);
LABEL_5:
    v13 = v22;
    if ( v12 >= 0 )
    {
      v12 = 0;
      v14 = a2 | 0x1000;
      v15 = 0;
      if ( v22 )
      {
        v16 = v6;
        do
        {
          if ( ProcessHandle )
          {
            NtClose(ProcessHandle);
            ProcessHandle = 0LL;
          }
          v17 = *v16;
          ClientId.UniqueProcess = (HANDLE)*v16;
          ClientId.UniqueThread = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v18 = NtOpenProcess(&ProcessHandle, v14, &ObjectAttributes, &ClientId);
          v12 = v18;
          if ( v18 < 0 )
          {
            if ( (a3 & 1) == 0 && v18 != -1073741813 )
              break;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                      (char *)a1 + 552,
                      *((unsigned int *)a1 + 155),
                      (char *)a1 + 88,
                      *((unsigned int *)a1 + 156),
                      *((_QWORD *)a1 + 4),
                      ProcessHandle) )
          {
            v12 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, _QWORD, void *))a4)(
                    a1,
                    ProcessHandle,
                    v17,
                    a5);
            if ( v12 < 0 && (a3 & 1) == 0 )
              break;
          }
          ++v15;
          v16 += 2;
          v12 = 0;
        }
        while ( v15 < v13 );
      }
    }
    if ( v6 && v6 != (unsigned int *)&v24 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  else
  {
    v12 = -1073741801;
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v12;
}
