/*
 * XREFs of ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800606C8
 * Callers:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800083F0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001BA50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18003E0A0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall RmpPartitionCleanup(struct _RM_PARTITION *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  void **v5; // rsi
  void *v6; // rcx
  void *v7; // r8
  void *v8; // r8
  void *v9; // r8
  const struct _TlgProvider_t *v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  v2 = (void *)*((_QWORD *)a1 + 12);
  if ( v2 )
    CloseHandle(v2);
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = 0;
  v5 = (void **)((char *)a1 + 48);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v4 )
        CloseHandle(v6);
      else
        NtClose(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
  v7 = (void *)*((_QWORD *)a1 + 18);
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v8 = (void *)*((_QWORD *)a1 + 19);
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    *((_QWORD *)a1 + 19) = 0LL;
  }
  v9 = (void *)*((_QWORD *)a1 + 21);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  *((_DWORD *)a1 + 44) = 0;
  if ( dword_18009B0B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
    {
      v14 = 0;
      v12 = (char *)a1 + 216;
      v13 = 8;
      TlgWrite(v10, &unk_180086EB9, 0LL, 0LL, 3u, &pData);
    }
  }
}
