/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x140813908
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x140814130 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140813F18 (DbgkpWerInitializeDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140814078 (DbgkpWerInvokeCallbacks.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rsi
  int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // eax
  struct _WORK_QUEUE_ITEM *v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 1;
  *(_DWORD *)(a1 + 92) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x57676244u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)(a1 + 128) = v5;
    v7 = *(_DWORD *)(v5 + 24);
    *(_DWORD *)v5 = 1;
    *(_DWORD *)(v5 + 4) = 48;
    if ( (*(_DWORD *)(a1 + 88) & 1) != 0 )
    {
      v7 |= 4u;
      *(_DWORD *)(v5 + 24) = v7;
    }
    *(_DWORD *)(v5 + 24) = v7 | 0x10;
    v8 = *(_QWORD *)(a1 + 104);
    v12 = 0LL;
    v9 = WerLiveKernelOpenDumpFile(v8, &v12);
    v6 = v9;
    if ( v9 >= 0 )
    {
      *(_QWORD *)(v5 + 8) = v12;
      *(_DWORD *)(a1 + 112) |= 2u;
      *(_DWORD *)(v5 + 24) |= 8u;
      v6 = DbgkpWerInitializeDeferredLiveDump(a1);
      if ( v6 >= 0 )
      {
        v6 = DbgkpWerInvokeCallbacks(a1);
        if ( v6 >= 0 )
        {
          v6 = IoCaptureLiveDump(
                 *(_DWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 40),
                 *(_QWORD *)(a1 + 48),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v5,
                 (__int64)&v13);
          if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741802 )
          {
            v10 = *(struct _WORK_QUEUE_ITEM **)(a1 + 120);
            *(_QWORD *)(a1 + 136) = v13;
            ExQueueWorkItem(v10, DelayedWorkQueue);
            v6 = 0;
            *a2 = 0;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
              (unsigned int)v6);
          }
        }
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n", (unsigned int)v9);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
