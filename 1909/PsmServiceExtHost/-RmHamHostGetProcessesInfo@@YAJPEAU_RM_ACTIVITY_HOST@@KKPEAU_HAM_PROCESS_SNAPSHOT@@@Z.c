/*
 * XREFs of ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180022100
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DA90 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001A118 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077258 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostGetProcessesInfo(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        struct _HAM_PROCESS_SNAPSHOT *a4)
{
  unsigned int *v6; // rsi
  unsigned int *Heap; // rdi
  char *v9; // rdx
  char *v10; // r10
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  PVOID v15; // rax
  PVOID v16; // rax
  ACCESS_MASK v17; // r13d
  unsigned int v18; // r14d
  unsigned int *v19; // r12
  void *v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  PVOID ProcessHeap; // rcx
  unsigned int *v25; // rax
  unsigned int v26; // [rsp+40h] [rbp-78h] BYREF
  int v27; // [rsp+44h] [rbp-74h]
  void *ProcessHandle; // [rsp+48h] [rbp-70h] BYREF
  _CLIENT_ID ClientId; // [rsp+50h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-58h] BYREF

  v26 = 1;
  v6 = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
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
            &v26);
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
    v25 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v26);
    v9 = (char *)a1 + 88;
    Heap = v25;
    v10 = (char *)a1 + 552;
    if ( !v25 )
    {
      v12 = -1073741801;
      goto LABEL_5;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
LABEL_5:
  v13 = v26;
  if ( v12 >= 0 )
  {
    if ( !v26 )
    {
LABEL_10:
      v17 = a2 | 0x1000;
      ProcessHandle = 0LL;
      v18 = 0;
      if ( v13 )
      {
        v19 = v6;
        do
        {
          v20 = (void *)*v19;
          ClientId.UniqueThread = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          v27 = (int)v20;
          ClientId.UniqueProcess = v20;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          v21 = NtOpenProcess(&ProcessHandle, v17, &ObjectAttributes, &ClientId);
          v12 = v21;
          if ( v21 < 0 )
          {
            if ( (a3 & 1) == 0 && v21 != -1073741813 )
              goto LABEL_17;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                      (char *)a1 + 552,
                      *((unsigned int *)a1 + 155),
                      (char *)a1 + 88,
                      *((unsigned int *)a1 + 156),
                      *((_QWORD *)a1 + 4),
                      ProcessHandle) )
          {
            v22 = *((unsigned int *)a4 + 4);
            *(_QWORD *)(*(_QWORD *)a4 + 8 * v22) = ProcessHandle;
            *(_DWORD *)(*((_QWORD *)a4 + 1) + 4 * v22) = v27;
            *((_DWORD *)a4 + 4) = v22 + 1;
          }
          else
          {
            NtClose(ProcessHandle);
          }
          ++v18;
          v19 += 2;
        }
        while ( v18 < v13 );
      }
      v12 = 0;
      goto LABEL_17;
    }
    v14 = 8 * v26;
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v26);
    *(_QWORD *)a4 = v15;
    if ( v15 )
    {
      memset_0(v15, 0, v14);
      v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v13);
      *((_QWORD *)a4 + 1) = v16;
      if ( v16 )
      {
        memset_0(v16, 0, 4 * v13);
        goto LABEL_10;
      }
      v12 = -1073741801;
    }
    else
    {
      v12 = -1073741801;
    }
  }
LABEL_17:
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (unsigned int)v12;
}
