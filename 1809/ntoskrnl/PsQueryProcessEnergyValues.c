/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1406382C0
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1405FD3D0 (PopEtProcessEnumSnapshotCallback.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140601010 (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406047D8 (PspFoldProcessAccountingIntoJob.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406079F0 (PopEtEnergyContextProcessStateUpdate.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x1400ACED0 (KeQueryTimelineBitmapTime.c)
 *     RtlTimelineBitmapUpdateRange @ 0x14011EE08 (RtlTimelineBitmapUpdateRange.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  char result; // al
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned int TimelineBitmapTime; // eax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // r8
  char *v11; // r11
  __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _OWORD *v18; // r11
  __int64 v19; // rsi
  int *v20; // r13
  unsigned __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v26; // rdi
  _QWORD *v27; // r15
  _QWORD *v28; // r10
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v45; // [rsp+70h] [rbp+18h]

  memset(a2, 0, 0x1B0uLL);
  result = PoEnergyEstimationEnabled();
  if ( !result || a1 == PsIdleProcess )
    return result;
  v5 = a1[231];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v5 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v5 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v5 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v5 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v5 + 96);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v45 = TimelineBitmapTime;
  v8 = v5 - (_QWORD)a2;
  v9 = a2 + 17;
  v10 = 14LL;
  do
  {
    *v9 = *(_QWORD *)((char *)v9 + v8);
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = (char *)a2 + 104;
  v12 = 3LL;
  v13 = TimelineBitmapTime;
  do
  {
    v14 = *(_QWORD *)&v11[v8];
    v15 = 0;
    *(_QWORD *)v11 = v14;
    v16 = HIDWORD(v14);
    if ( (v16 & 0x80000000) != 0LL )
    {
      v38 = v16 & 0x7FFFFFFF;
      *((_DWORD *)v11 + 1) = v38;
      v39 = *(_DWORD *)&v11[v8];
      if ( (unsigned int)v6 > v39 )
      {
        *(_DWORD *)v11 = v6;
        v15 = v6 - v39;
        if ( (_DWORD)v6 - v39 == -1 || ~v15 < v38 )
          v40 = -1;
        else
          v40 = v15 + v38;
        *((_DWORD *)v11 + 1) = v40 & 0x7FFFFFFF;
      }
    }
    if ( v11 == (char *)a2 + 104 )
    {
      v17 = 304LL;
    }
    else
    {
      if ( v11 != (char *)(a2 + 7) )
        goto LABEL_14;
      v17 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v17) && v15 )
      RtlTimelineBitmapUpdateRange((unsigned __int64 *)((char *)a2 + v17), v13 - (v15 >> 12), v13);
LABEL_14:
    v11 += 8;
    --v12;
  }
  while ( v12 );
  v18 = a2 + 24;
  v19 = 5LL;
  v20 = (int *)(a2 + 17);
  while ( 2 )
  {
    v21 = *(_QWORD *)((char *)v18 + v8);
    v22 = 0;
    *(_QWORD *)v18 = v21;
    v23 = HIDWORD(v21);
    if ( (v23 & 0x80000000) != 0LL )
    {
      v41 = v23 & 0x7FFFFFFF;
      *((_DWORD *)v18 + 1) = v41;
      v42 = *(_DWORD *)((char *)v18 + v8);
      if ( (unsigned int)v6 > v42 )
      {
        *(_DWORD *)v18 = v6;
        v22 = v6 - v42;
        if ( (_DWORD)v6 - v42 == -1 || ~v22 < v41 )
          v43 = -1;
        else
          v43 = v22 + v41;
        *((_DWORD *)v18 + 1) = v43 & 0x7FFFFFFF;
      }
    }
    if ( v18 == (_OWORD *)((char *)a2 + 392) )
    {
      v24 = 352LL;
      goto LABEL_22;
    }
    if ( v18 == a2 + 25 )
    {
      v24 = 360LL;
LABEL_22:
      if ( (_OWORD *)((char *)a2 + v24) && v22 )
        RtlTimelineBitmapUpdateRange((unsigned __int64 *)((char *)a2 + v24), v45 - (v22 >> 12), v45);
      goto LABEL_25;
    }
    if ( v18 == (_OWORD *)((char *)a2 + 408) )
    {
      v24 = 368LL;
      goto LABEL_22;
    }
LABEL_25:
    v18 = (_OWORD *)((char *)v18 + 8);
    if ( --v19 )
      continue;
    break;
  }
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v5 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v5 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v5 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v5 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v5 + 428);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = a1 + 214;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 214), 0LL);
  v27 = a1 + 145;
  *a2 = *(_OWORD *)v5;
  a2[1] = *(_OWORD *)(v5 + 16);
  a2[2] = *(_OWORD *)(v5 + 32);
  a2[3] = *(_OWORD *)(v5 + 48);
  a2[9] = *(_OWORD *)(v5 + 144);
  a2[10] = *(_OWORD *)(v5 + 160);
  a2[11] = *(_OWORD *)(v5 + 176);
  a2[12] = *(_OWORD *)(v5 + 192);
  a2[13] = *(_OWORD *)(v5 + 208);
  a2[14] = *(_OWORD *)(v5 + 224);
  a2[15] = *(_OWORD *)(v5 + 240);
  a2[16] = *(_OWORD *)(v5 + 256);
  v28 = (_QWORD *)a1[145];
  if ( (_QWORD *)*v27 != v27 )
  {
    do
    {
      v29 = v28[33];
      v30 = *(_QWORD *)(v29 + 192);
      v31 = *v20;
      if ( (unsigned int)v30 > *v20 )
      {
        *v20 = v30;
        if ( (unsigned int)(v30 - v31) >= 0x20 )
        {
          *((_DWORD *)a2 + 69) = 0;
          v37 = 0;
        }
        else
        {
          *((_DWORD *)a2 + 69) <<= v30 - v31;
          v37 = *((_DWORD *)a2 + 69);
        }
        *((_DWORD *)a2 + 69) = v37 | HIDWORD(v30);
      }
      else
      {
        v32 = v31 - v30;
        if ( v32 < 0x20 )
          *((_DWORD *)a2 + 69) |= HIDWORD(v30) << v32;
      }
      v33 = v29 - (_QWORD)a2;
      v34 = a2;
      v35 = 4LL;
      do
      {
        v36 = 2LL;
        do
        {
          *v34 += *(_QWORD *)((char *)v34 + v33);
          v34[18] += *(_QWORD *)((char *)v34 + v33 + 64);
          v34[26] += *(_QWORD *)((char *)v34 + v33 + 128);
          ++v34;
          --v36;
        }
        while ( v36 );
        --v35;
      }
      while ( v35 );
      v28 = (_QWORD *)*v28;
    }
    while ( v28 != v27 );
  }
  if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v26);
  KeAbPostRelease((ULONG_PTR)v26);
  return (unsigned __int8)KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
