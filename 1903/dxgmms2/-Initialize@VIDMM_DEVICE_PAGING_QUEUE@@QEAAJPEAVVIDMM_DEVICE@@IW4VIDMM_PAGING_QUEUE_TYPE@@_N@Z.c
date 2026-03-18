/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0061E34
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0061AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C0062140 (VidSchCreateSyncObject.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0062504 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00B3644 (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(__int64 a1, __int64 *a2, __int64 a3, int a4, char a5)
{
  __int64 v7; // r9
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int SyncObject; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  int v19[20]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *a2;
  v9 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 528LL);
  *(_DWORD *)(a1 + 160) = a3;
  v10 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1, a2, a3, v7, a4);
  v13 = v10;
  if ( v10 < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v18 + 24) = a2;
LABEL_7:
    *(_QWORD *)(v18 + 32) = v13;
    WdLogEvent5_WdAssertion(v18);
    return (unsigned int)v13;
  }
  memset(v19, 0, sizeof(v19));
  v19[0] = 5;
  *(_QWORD *)&v19[2] = 4294962295LL;
  SyncObject = VidSchCreateSyncObject(v9, 0, (int)v19, 2, 0LL, a1, (PVOID)(a1 + 152), 0LL);
  v13 = SyncObject;
  if ( SyncObject < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v9 + 55)
    || a5
    || (LODWORD(v13) = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1), (int)v13 >= 0) )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 152);
    result = 0LL;
    *(_QWORD *)(a1 + 96) = 4294962295LL;
    return result;
  }
  return (unsigned int)v13;
}
