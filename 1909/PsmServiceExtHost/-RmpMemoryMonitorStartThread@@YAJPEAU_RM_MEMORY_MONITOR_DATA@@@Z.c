/*
 * XREFs of ?RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180045FE0
 * Callers:
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180045ED8 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 * Callees:
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall RmpMemoryMonitorStartThread(struct _RM_MEMORY_MONITOR_DATA *lpParameter)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  HANDLE Thread; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  HANDLE v9; // [rsp+50h] [rbp-18h]

  v1 = *(_QWORD *)lpParameter;
  memset_0(v6, 0, 0x28uLL);
  v3 = *(_QWORD *)(v1 + 32);
  v6[0] = 1;
  v6[2] = 1048577;
  if ( (int)NtManagePartition(v3, 0LL, 5LL, v6, 40) >= 0 )
  {
    NtClose(Handle);
    NtClose(v9);
    *((_QWORD *)lpParameter + 1) = v8;
  }
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)RmpMemoryMonitorWorker, lpParameter, 0, 0LL);
  *((_QWORD *)lpParameter + 7) = Thread;
  return Thread == 0LL ? 0xC0000001 : 0;
}
