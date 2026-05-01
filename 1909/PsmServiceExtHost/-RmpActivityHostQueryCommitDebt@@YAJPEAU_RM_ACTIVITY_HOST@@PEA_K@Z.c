/*
 * XREFs of ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001A118
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180019DA0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180021320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180022100 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180038F28 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  struct _RM_ACTIVITY_HOST *v3; // r12
  int ProcessesInfo; // eax
  __int64 v5; // rdi
  int v6; // ebx
  PVOID v7; // r15
  void **v8; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // r12
  HANDLE *v11; // rsi
  const struct _TlgProvider_t *v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  struct _RM_ACTIVITY_HOST *v15; // [rsp+38h] [rbp-41h] BYREF
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  PVOID v17; // [rsp+48h] [rbp-31h]
  __int64 v18; // [rsp+50h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+8Ch] [rbp+13h]
  struct _RM_ACTIVITY_HOST **v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]

  *a2 = 0LL;
  v15 = a1;
  P = 0LL;
  v17 = 0LL;
  v3 = a1;
  v18 = 0LL;
  ProcessesInfo = RmHamHostGetProcessesInfo(a1, 0x1000u, 1u, (struct _HAM_PROCESS_SNAPSHOT *)&P);
  LODWORD(v5) = v18;
  v6 = ProcessesInfo;
  v7 = v17;
  if ( ProcessesInfo >= 0 )
  {
    if ( (_DWORD)v18 )
    {
      v8 = (void **)P;
      v9 = (unsigned int *)v17;
      v10 = (unsigned int)v18;
      do
      {
        RmpActivityHostCommitDebtCallback(v15, *v8++, *v9++, a2);
        --v10;
      }
      while ( v10 );
      v7 = v17;
      v3 = v15;
    }
    v6 = 0;
  }
  if ( (_DWORD)v5 )
  {
    v11 = (HANDLE *)P;
    v5 = (unsigned int)v5;
    do
    {
      NtClose(*v11++);
      --v5;
    }
    while ( v5 );
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    v7 = v17;
  }
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  v14 = v6;
  if ( v6 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v22 = 0;
      v25 = 0;
      v20 = &v14;
      v15 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v3 + 4);
      v23 = &v15;
      v21 = 4;
      v24 = 8;
      TlgWrite(v13, &unk_180096B03, 0LL, 0LL, 4u, &pData);
      return v14;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
