/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x1405FE228
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PsAddProcessEnergyValues @ 0x14008E660 (PsAddProcessEnergyValues.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1401265C4 (KeQuerySchedulingGroupReadyTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1405FF1FC (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x1405FF8B8 (PspUnlockJobConditionally.c)
 */

__int64 __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  PVOID *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _OWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _QWORD v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25[82]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v25, 0, sizeof(v25));
  PspLockRootJobShared(Object, CurrentThread, v24);
  v5 = 0;
  v6 = (PVOID *)v24;
  while ( Object != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v25, 1);
  v9 = v25[12];
  *(_QWORD *)a2 = v25[12] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v9;
  v10 = v25[11];
  *(_QWORD *)(a2 + 8) = v25[11] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v10;
  *(_DWORD *)(a2 + 32) = LODWORD(v25[27]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v25[16] + *((_QWORD *)Object + 61);
  *(_QWORD *)(a2 + 56) = v25[17] + *((_QWORD *)Object + 62);
  *(_QWORD *)(a2 + 64) = v25[18] + *((_QWORD *)Object + 63);
  *(_QWORD *)(a2 + 72) = v25[19] + *((_QWORD *)Object + 64);
  *(_QWORD *)(a2 + 80) = v25[20] + *((_QWORD *)Object + 65);
  *(_QWORD *)(a2 + 88) = v25[21] + *((_QWORD *)Object + 66);
  *(_QWORD *)(a2 + 96) = v25[22] + *((_QWORD *)Object + 67);
  *(_QWORD *)(a2 + 104) = v25[23] + *((_QWORD *)Object + 68);
  *(_QWORD *)(a2 + 112) = v25[24] + *((_QWORD *)Object + 69);
  *(_QWORD *)(a2 + 120) = v25[25] + *((_QWORD *)Object + 70);
  *(_QWORD *)(a2 + 128) = v25[26] + *((_QWORD *)Object + 71);
  *(_QWORD *)(a2 + 136) = v25[15] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v25[14] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v25[13] + *((_QWORD *)Object + 128);
  v11 = *((_QWORD *)Object + 126);
  if ( v11 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v11 + 128, v7, v8);
  v12 = *((_QWORD *)Object + 164);
  v13 = (_OWORD *)(a2 + 160);
  if ( v12 )
  {
    PsAddProcessEnergyValues((__int64)&v25[28], v12);
    v14 = 2LL;
    v15 = &v25[28];
    do
    {
      v16 = *((_OWORD *)v15 + 1);
      *v13 = *(_OWORD *)v15;
      v17 = *((_OWORD *)v15 + 2);
      v13[1] = v16;
      v18 = *((_OWORD *)v15 + 3);
      v13[2] = v17;
      v19 = *((_OWORD *)v15 + 4);
      v13[3] = v18;
      v20 = *((_OWORD *)v15 + 5);
      v13[4] = v19;
      v21 = *((_OWORD *)v15 + 6);
      v13[5] = v20;
      v22 = *((_OWORD *)v15 + 7);
      v15 += 16;
      v13[6] = v21;
      v13 += 8;
      *(v13 - 1) = v22;
      --v14;
    }
    while ( v14 );
    *v13 = *(_OWORD *)v15;
  }
  else
  {
    memset(v13, 0, 0x110uLL);
  }
  PspUnlockJobConditionally(Object, v24);
  return PspUnlockJob(v24[0], CurrentThread);
}
