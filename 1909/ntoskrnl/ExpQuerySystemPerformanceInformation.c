/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x1406738A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetWorkingSetLeafSize @ 0x1400D9F38 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x1400D9FF8 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400DA008 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x1400DA024 (ExQueryPoolUsage.c)
 *     MiMaximumCommitmentAvailable @ 0x1400DA14C (MiMaximumCommitmentAvailable.c)
 *     MiFreePoolPagesLeft @ 0x1400DA16C (MiFreePoolPagesLeft.c)
 *     MmGetSystemPageCounts @ 0x1400DA19C (MmGetSystemPageCounts.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x1400DA1B0 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetPeakCommitment @ 0x1400DB69C (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400DB6B8 (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x1400DB6D4 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1400DB6F0 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x1400DB70C (MmGetProcessPartitionId.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsQueryRuntimeProcess @ 0x1405D3D30 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 v3; // r15
  ULONG v4; // r11d
  ULONG v5; // ebx
  LARGE_INTEGER v6; // r8
  ULONG v7; // edi
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // rax
  __int64 *v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // ebx
  int v14; // edx
  int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 AvailablePages; // rax
  unsigned __int16 v20; // cx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // r10
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r10
  unsigned __int64 PeakCommitment; // rax
  int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int64 v30; // r10
  int v31; // r8d
  unsigned int v32; // r9d
  unsigned int v33; // r10d
  unsigned int v34; // r11d
  unsigned int v35; // edi
  unsigned int v36; // esi
  unsigned int v37; // r15d
  unsigned int v38; // r12d
  unsigned int v39; // r13d
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  __int64 *v43; // rdx
  unsigned int v44; // r14d
  _DWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  char *WorkingSetLeafSize; // rax
  __int64 v49; // rdx
  char *v50; // rax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r8
  int v54; // ecx
  ULONG v55; // r10d
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // r9d
  unsigned int v59; // r11d
  unsigned int v60; // edi
  unsigned int v61; // esi
  unsigned int v62; // r14d
  unsigned int v63; // r15d
  unsigned int v64; // r12d
  int v65; // r13d
  __int64 *v66; // rax
  _DWORD *v67; // rax
  int v68; // ebx
  bool v69; // zf
  unsigned int v71; // [rsp+40h] [rbp-C0h]
  unsigned int v72; // [rsp+44h] [rbp-BCh]
  unsigned int v73; // [rsp+48h] [rbp-B8h]
  __int64 v74; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+50h] [rbp-B0h]
  __int128 v76; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD Src[44]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v78; // [rsp+1D0h] [rbp+D0h]
  _DWORD v79[18]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+248h] [rbp+148h]

  v3 = a1;
  memset(Src, 0, 0x158uLL);
  v4 = IoOtherOperationCount;
  v5 = IoReadOperationCount;
  v6 = IoReadTransferCount;
  v7 = IoWriteOperationCount;
  v8 = IoWriteTransferCount;
  v76 = 0uLL;
  v9 = IoOtherTransferCount;
  v78 = KiProcessorBlock;
  if ( (_DWORD)v3 )
  {
    v10 = KiProcessorBlock;
    v11 = (unsigned int)v3;
    do
    {
      v12 = *v10++;
      v4 += *(_DWORD *)(v12 + 11620);
      v5 += *(_DWORD *)(v12 + 11612);
      v7 += *(_DWORD *)(v12 + 11616);
      v8.QuadPart += *(_QWORD *)(v12 + 11632);
      v9.QuadPart += *(_QWORD *)(v12 + 11640);
      v6.QuadPart += *(_QWORD *)(v12 + 11624);
      --v11;
    }
    while ( v11 );
  }
  Src[4] = __PAIR64__(v7, v5);
  v13 = 0;
  Src[1] = v6.QuadPart;
  v14 = 0;
  Src[2] = v8.QuadPart;
  v15 = 0;
  Src[3] = v9.QuadPart;
  LODWORD(Src[5]) = v4;
  if ( (_DWORD)v3 )
  {
    v16 = KiProcessorBlock;
    v17 = v3;
    do
    {
      v18 = *v16++;
      v15 += *(_DWORD *)(v18 + 11580);
      v14 += *(_DWORD *)(v18 + 11576);
      --v17;
    }
    while ( v17 );
  }
  LODWORD(Src[37]) = v15;
  *(_QWORD *)((char *)&Src[37] + 4) = 0LL;
  HIDWORD(Src[38]) = v14;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  if ( AvailablePages > 0xFFFFFFFF )
    HIDWORD(Src[5]) = -1;
  else
    HIDWORD(Src[5]) = AvailablePages;
  TotalCommittedPages = MmGetTotalCommittedPages(v20);
  if ( TotalCommittedPages > v23 )
    LODWORD(Src[6]) = v23;
  else
    LODWORD(Src[6]) = TotalCommittedPages;
  TotalCommitLimit = MmGetTotalCommitLimit(v22);
  if ( TotalCommitLimit > v26 )
    HIDWORD(Src[6]) = v26;
  else
    HIDWORD(Src[6]) = TotalCommitLimit;
  PeakCommitment = MmGetPeakCommitment(v25);
  if ( PeakCommitment > v30 )
    LODWORD(PeakCommitment) = v30;
  LODWORD(Src[7]) = PeakCommitment;
  if ( (unsigned int)PeakCommitment < v29 )
    LODWORD(Src[7]) = v28;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v71 = 0;
  v42 = 0;
  v72 = 0;
  v73 = 0;
  if ( a1 )
  {
    v43 = KiProcessorBlock;
    v74 = a1;
    v44 = 0;
    do
    {
      v45 = (_DWORD *)*v43++;
      v31 += v45[2884];
      v32 += v45[2885];
      v33 += v45[2886];
      v34 += v45[5946];
      v35 += v45[2887];
      v36 += v45[2888];
      v37 += v45[2889];
      v38 += v45[5947];
      v39 += v45[5948];
      v44 += v45[2890];
      v71 += v45[2891];
      v72 += v45[2892];
      v73 += v45[2893];
      --v74;
    }
    while ( v74 );
    v40 = v71;
    v41 = v72;
    v42 = v73;
  }
  else
  {
    v44 = 0;
  }
  HIDWORD(Src[7]) = v31;
  Src[8] = __PAIR64__(v33, v32);
  Src[9] = __PAIR64__(v35, v34);
  Src[10] = __PAIR64__(v37, v36);
  Src[11] = __PAIR64__(v39, v38);
  Src[12] = __PAIR64__(v40, v44);
  Src[13] = __PAIR64__(v42, v41);
  LODWORD(Src[17]) = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v76);
  HIDWORD(Src[17]) = v76;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2LL, v46, v47);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  HIDWORD(Src[20]) = (_DWORD)WorkingSetLeafSize;
  v50 = MmGetWorkingSetLeafSize(3LL, v49, 0xFFFFFFFFLL);
  if ( (unsigned __int64)v50 > v51 )
    LODWORD(v50) = v51;
  Src[21] = __PAIR64__(DWORD1(v76), (unsigned int)v50);
  Src[18] = __PAIR64__(DWORD2(v76), HIDWORD(v76));
  MiFreePoolPagesLeft(6);
  v52 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v53 > v52 )
    LODWORD(v53) = v52;
  LODWORD(Src[20]) = v53;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess((__int64)PsIdleProcess, v79);
  ExQueryPoolUsage(
    (int)&Src[14],
    (int)&Src[14] + 4,
    (int)&Src[15],
    (int)&Src[15] + 4,
    (__int64)&Src[19] + 4,
    (__int64)&Src[16],
    (__int64)&Src[16] + 4,
    (__int64)&Src[19]);
  v54 = 0;
  v55 = CcFastMdlReadWait;
  v56 = 0;
  memset(&Src[22], 0, 20);
  v57 = 0;
  v58 = 0;
  v59 = 0;
  HIDWORD(Src[24]) = CcFastMdlReadWait;
  v60 = 0;
  memset(&Src[25], 0, 96);
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  if ( a1 )
  {
    v75 = a1;
    v66 = KiProcessorBlock;
    do
    {
      v67 = (_DWORD *)*v66;
      LODWORD(Src[22]) = v67[2897] + v13;
      HIDWORD(Src[28]) += v67[5926];
      v54 += v67[2898];
      v56 += v67[5936];
      v57 += v67[2899];
      v58 += v67[5920];
      v55 += v67[5921];
      v59 += v67[5938];
      v60 += v67[5922];
      v61 += v67[5923];
      v62 += v67[5924];
      v63 += v67[5939];
      v64 += v67[5940];
      v65 += v67[5925];
      LODWORD(Src[29]) += v67[5927];
      HIDWORD(Src[29]) += v67[5941];
      LODWORD(Src[30]) += v67[5942];
      HIDWORD(Src[30]) += v67[2900];
      LODWORD(Src[31]) += v67[2901];
      HIDWORD(Src[31]) += v67[2902];
      LODWORD(Src[32]) += v67[5937];
      HIDWORD(Src[32]) += v67[5928];
      LODWORD(Src[33]) += v67[5929];
      HIDWORD(Src[33]) += v67[5943];
      LODWORD(Src[34]) += v67[5944];
      HIDWORD(Src[34]) += v67[5945];
      LODWORD(Src[35]) += v67[5931];
      HIDWORD(Src[35]) += v67[5932];
      LODWORD(Src[36]) += v67[5933];
      v68 = v67[5934] + HIDWORD(Src[36]);
      v66 = v78 + 1;
      HIDWORD(Src[36]) = v68;
      v69 = v75-- == 1;
      v13 = Src[22];
      ++v78;
    }
    while ( !v69 );
    HIDWORD(Src[22]) = v54;
    Src[23] = __PAIR64__(v57, v56);
    Src[24] = __PAIR64__(v55, v58);
    Src[25] = __PAIR64__(v60, v59);
    Src[26] = __PAIR64__(v62, v61);
    Src[27] = __PAIR64__(v64, v63);
    LODWORD(Src[28]) = v65;
  }
  Src[39] = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  Src[40] = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  Src[41] = MmGetResidentAvailablePages(ProcessPartitionId);
  Src[42] = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
