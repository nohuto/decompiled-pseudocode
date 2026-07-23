/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x14066E19C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x1400EF5E4 (MiFreePoolPagesLeft.c)
 *     MiMaximumCommitmentAvailable @ 0x1400EF614 (MiMaximumCommitmentAvailable.c)
 *     MmGetProcessPartitionId @ 0x1400F0D4C (MmGetProcessPartitionId.c)
 *     MmGetAvailablePages @ 0x1400F0D5C (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x1400F0D78 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1400F0D94 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1400F0DB0 (MmGetPeakCommitment.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x1400F0DCC (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetSystemPageCounts @ 0x1400F0E24 (MmGetSystemPageCounts.c)
 *     MmGetWorkingSetLeafSize @ 0x1400F0E38 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x1400F0E78 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400F0E88 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x1400F0EA4 (ExQueryPoolUsage.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PsQueryRuntimeProcess @ 0x14066EC60 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  ULONG v3; // r11d
  __int64 *v4; // rsi
  LARGE_INTEGER v5; // rax
  unsigned int v6; // ebx
  ULONG v7; // r14d
  LARGE_INTEGER v8; // r9
  ULONG v9; // r15d
  LARGE_INTEGER v10; // r10
  __int64 v11; // rdi
  __int64 *v12; // r8
  __int64 v13; // r12
  __int64 v14; // rdx
  int v15; // edx
  int v16; // r8d
  __int64 *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int16 v20; // r14
  unsigned __int64 AvailablePages; // rax
  int v22; // ecx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int64 v26; // r10
  int v27; // ecx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  unsigned __int64 v31; // r10
  unsigned int v32; // ecx
  bool v33; // cf
  int v34; // r9d
  int v35; // ecx
  int v36; // r10d
  int v37; // r11d
  int v38; // r15d
  int v39; // r12d
  int v40; // r13d
  int v41; // eax
  int v42; // edx
  int v43; // r8d
  __int64 *v44; // rdx
  __int64 v45; // r8
  int v46; // r14d
  _DWORD *v47; // rcx
  char *WorkingSetLeafSize; // rax
  char *v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r8
  ULONG v53; // r10d
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // r8d
  int v57; // r9d
  unsigned int v58; // r11d
  unsigned int v59; // r15d
  unsigned int v60; // r12d
  unsigned int v61; // r13d
  int v62; // r14d
  int v63; // edi
  _DWORD *v64; // rax
  bool v65; // zf
  int v67; // [rsp+40h] [rbp-C0h] BYREF
  int v68; // [rsp+44h] [rbp-BCh]
  int v69; // [rsp+48h] [rbp-B8h]
  int v70; // [rsp+4Ch] [rbp-B4h]
  int v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+54h] [rbp-ACh]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v74; // [rsp+80h] [rbp-80h]
  ULONG v75; // [rsp+84h] [rbp-7Ch]
  ULONG v76; // [rsp+88h] [rbp-78h]
  int v77; // [rsp+8Ch] [rbp-74h]
  int v78; // [rsp+90h] [rbp-70h]
  int v79; // [rsp+94h] [rbp-6Ch]
  unsigned int v80; // [rsp+98h] [rbp-68h]
  int v81; // [rsp+9Ch] [rbp-64h]
  int v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+A4h] [rbp-5Ch]
  int v84; // [rsp+A8h] [rbp-58h]
  int v85; // [rsp+ACh] [rbp-54h]
  int v86; // [rsp+B0h] [rbp-50h]
  int v87; // [rsp+B4h] [rbp-4Ch]
  int v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+BCh] [rbp-44h]
  int v90; // [rsp+C0h] [rbp-40h]
  int v91; // [rsp+C4h] [rbp-3Ch]
  int v92; // [rsp+C8h] [rbp-38h]
  int v93; // [rsp+CCh] [rbp-34h]
  int v94; // [rsp+D0h] [rbp-30h] BYREF
  int v95; // [rsp+D4h] [rbp-2Ch] BYREF
  int v96; // [rsp+D8h] [rbp-28h] BYREF
  int v97; // [rsp+DCh] [rbp-24h] BYREF
  int v98; // [rsp+E0h] [rbp-20h] BYREF
  int v99[5]; // [rsp+E4h] [rbp-1Ch] BYREF
  int v100; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v101[5]; // [rsp+FCh] [rbp-4h] BYREF
  unsigned __int64 v102; // [rsp+110h] [rbp+10h]
  unsigned __int64 v103; // [rsp+118h] [rbp+18h]
  int v104; // [rsp+120h] [rbp+20h]
  ULONG v105; // [rsp+124h] [rbp+24h]
  unsigned __int64 v106; // [rsp+128h] [rbp+28h]
  unsigned __int64 v107; // [rsp+130h] [rbp+30h]
  __int64 v108; // [rsp+138h] [rbp+38h]
  __int64 v109; // [rsp+140h] [rbp+40h]
  __int64 v110; // [rsp+148h] [rbp+48h]
  __int64 v111; // [rsp+150h] [rbp+50h]
  __int64 v112; // [rsp+158h] [rbp+58h]
  __int64 v113; // [rsp+160h] [rbp+60h]
  __int64 v114; // [rsp+168h] [rbp+68h]
  __int64 v115; // [rsp+170h] [rbp+70h]
  __int64 v116; // [rsp+178h] [rbp+78h]
  __int64 v117; // [rsp+180h] [rbp+80h]
  int v118; // [rsp+188h] [rbp+88h]
  __int64 v119; // [rsp+18Ch] [rbp+8Ch]
  int v120; // [rsp+194h] [rbp+94h]
  __int64 v121; // [rsp+198h] [rbp+98h]
  __int64 v122; // [rsp+1A0h] [rbp+A0h]
  __int64 ResidentAvailablePages; // [rsp+1A8h] [rbp+A8h]
  __int64 SharedCommit; // [rsp+1B0h] [rbp+B0h]
  __int128 v125; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+220h] [rbp+120h]
  int v129; // [rsp+238h] [rbp+138h]
  __int64 v130; // [rsp+238h] [rbp+138h]

  v3 = IoOtherOperationCount;
  v4 = KiProcessorBlock;
  v5 = IoOtherTransferCount;
  v6 = 0;
  v7 = IoReadOperationCount;
  v8 = IoReadTransferCount;
  v9 = IoWriteOperationCount;
  v10 = IoWriteTransferCount;
  v11 = a1;
  if ( a1 )
  {
    v12 = KiProcessorBlock;
    v13 = a1;
    do
    {
      v14 = *v12++;
      v3 += *(_DWORD *)(v14 + 11620);
      v7 += *(_DWORD *)(v14 + 11612);
      v9 += *(_DWORD *)(v14 + 11616);
      v10.QuadPart += *(_QWORD *)(v14 + 11632);
      v5.QuadPart += *(_QWORD *)(v14 + 11640);
      v8.QuadPart += *(_QWORD *)(v14 + 11624);
      --v13;
    }
    while ( v13 );
  }
  Src[1] = v8.QuadPart;
  v15 = 0;
  Src[2] = v10.QuadPart;
  v16 = 0;
  Src[3] = v5.QuadPart;
  v74 = v7;
  v75 = v9;
  v76 = v3;
  if ( a1 )
  {
    v17 = KiProcessorBlock;
    v18 = v11;
    do
    {
      v19 = *v17++;
      v16 += *(_DWORD *)(v19 + 11580);
      v15 += *(_DWORD *)(v19 + 11576);
      --v18;
    }
    while ( v18 );
  }
  v118 = v16;
  v119 = 0LL;
  v120 = v15;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  v20 = ProcessPartitionId;
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  v22 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v22 = AvailablePages;
  v77 = v22;
  TotalCommittedPages = MmGetTotalCommittedPages(ProcessPartitionId);
  if ( TotalCommittedPages > v24 )
    v78 = v24;
  else
    v78 = TotalCommittedPages;
  TotalCommitLimit = MmGetTotalCommitLimit(ProcessPartitionId);
  v27 = v26;
  if ( TotalCommitLimit <= v26 )
    v27 = TotalCommitLimit;
  v79 = v27;
  PeakCommitment = MmGetPeakCommitment(ProcessPartitionId);
  v129 = 0;
  v32 = v31;
  v68 = 0;
  if ( PeakCommitment <= v31 )
    v32 = PeakCommitment;
  v69 = 0;
  v33 = v32 < v30;
  v70 = 0;
  v34 = 0;
  v71 = 0;
  if ( v33 )
    v32 = v29;
  v72 = 0;
  v80 = v32;
  v35 = 0;
  v67 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( (_DWORD)v11 )
  {
    v44 = KiProcessorBlock;
    v45 = v11;
    v46 = 0;
    do
    {
      v47 = (_DWORD *)*v44++;
      v34 += v47[2884];
      v36 += v47[2885];
      v37 += v47[2886];
      v38 += v47[5946];
      v39 += v47[2887];
      v40 += v47[2888];
      v129 += v47[2889];
      v68 += v47[5947];
      v69 += v47[5948];
      v70 += v47[2890];
      v71 += v47[2891];
      v72 += v47[2892];
      v46 += v47[2893];
      --v45;
    }
    while ( v45 );
    v41 = v129;
    v35 = v68;
    v42 = v69;
    v43 = v70;
    v67 = v46;
    v20 = ProcessPartitionId;
  }
  v87 = v41;
  v91 = v71;
  v92 = v72;
  v93 = v67;
  v81 = v34;
  v82 = v36;
  v83 = v37;
  v84 = v38;
  v85 = v39;
  v86 = v40;
  v88 = v35;
  v89 = v42;
  v90 = v43;
  v99[1] = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v125);
  v99[2] = v125;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v101[2] = (_DWORD)WorkingSetLeafSize;
  v49 = MmGetWorkingSetLeafSize(3);
  if ( (unsigned __int64)v49 > v50 )
    LODWORD(v49) = v50;
  v101[3] = (_DWORD)v49;
  v99[4] = DWORD2(v125);
  v101[4] = DWORD1(v125);
  v99[3] = HIDWORD(v125);
  MiFreePoolPagesLeft(6);
  v51 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v52 > v51 )
    LODWORD(v52) = v51;
  v101[1] = v52;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, &v67);
  ExQueryPoolUsage(&v94, &v95, &v96, &v97, v101, &v98, v99, &v100);
  v53 = CcFastMdlReadWait;
  v54 = 0;
  v105 = CcFastMdlReadWait;
  v55 = 0;
  v102 = 0LL;
  v56 = 0;
  v103 = 0LL;
  v57 = 0;
  v104 = 0;
  v58 = 0;
  v106 = 0LL;
  v59 = 0;
  v60 = 0;
  v107 = 0LL;
  v108 = 0LL;
  v61 = 0;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  if ( (_DWORD)v11 )
  {
    v62 = HIDWORD(v108);
    v130 = v11;
    v63 = 0;
    do
    {
      v64 = (_DWORD *)*v4++;
      LODWORD(v108) = v64[5939] + v63;
      LODWORD(v109) = v64[5925] + v109;
      HIDWORD(v109) += v64[5926];
      LODWORD(v110) = v64[5927] + v110;
      v6 += v64[2897];
      v54 += v64[2898];
      v55 += v64[5936];
      v56 += v64[2899];
      v57 += v64[5920];
      v53 += v64[5921];
      v58 += v64[5938];
      v59 += v64[5922];
      v60 += v64[5923];
      v61 += v64[5924];
      v62 += v64[5940];
      HIDWORD(v110) += v64[5941];
      LODWORD(v111) = v64[5942] + v111;
      HIDWORD(v111) += v64[2900];
      LODWORD(v112) = v64[2901] + v112;
      HIDWORD(v112) += v64[2902];
      LODWORD(v113) = v64[5937] + v113;
      HIDWORD(v113) += v64[5928];
      LODWORD(v114) = v64[5929] + v114;
      HIDWORD(v114) += v64[5943];
      LODWORD(v115) = v64[5944] + v115;
      HIDWORD(v115) += v64[5945];
      LODWORD(v116) = v64[5931] + v116;
      HIDWORD(v116) += v64[5932];
      LODWORD(v117) = v64[5933] + v117;
      v65 = v130-- == 1;
      HIDWORD(v117) += v64[5934];
      v63 = v108;
    }
    while ( !v65 );
    HIDWORD(v108) = v62;
    v20 = ProcessPartitionId;
    v102 = __PAIR64__(v54, v6);
    v103 = __PAIR64__(v56, v55);
    v104 = v57;
    v105 = v53;
    v106 = __PAIR64__(v59, v58);
    v107 = __PAIR64__(v61, v60);
  }
  v121 = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  v122 = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages(v20);
  SharedCommit = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
