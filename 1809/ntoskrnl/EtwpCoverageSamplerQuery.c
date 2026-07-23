/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x1408C9124
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1408CA478 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlStringCchCopyNW @ 0x1400F5114 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408C4C2C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1408C4FD0 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x1408C54E0 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408C5558 (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C6F98 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1408C8120 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1408C9014 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 *v7; // r15
  signed int v8; // edi
  unsigned int v9; // r12d
  unsigned int j; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // edi
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // r9
  _QWORD **v21; // r10
  _QWORD *v22; // r8
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  _QWORD *v29; // r8
  unsigned __int64 v30; // rcx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  bool v34; // cf
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // r15d
  unsigned int v38; // eax
  unsigned int v39; // edx
  __int64 *PoolWithTag; // rax
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rcx
  _DWORD *v45; // r12
  char *v46; // rdi
  char *v47; // rax
  char *v48; // rdi
  _OWORD *v49; // rcx
  __int64 v50; // rdx
  char *v51; // rdi
  char *v52; // r9
  char *v53; // rdi
  _QWORD *i; // rdx
  unsigned int v55; // r8d
  __int64 v56; // r10
  __int64 v57; // rdx
  char *v58; // rcx
  char *v59; // rdi
  void *v60; // r9
  unsigned int v61; // ecx
  unsigned int v62; // edi
  _QWORD *v63; // r15
  char *v64; // rdx
  struct _KTHREAD *v65; // rax
  _QWORD **v66; // r8
  int v67; // edx
  volatile __int32 *v68; // rcx
  char *v69; // r15
  _QWORD *v70; // rdi
  _QWORD *v71; // r15
  _QWORD *v72; // rax
  unsigned int v74; // [rsp+20h] [rbp-168h]
  _QWORD **v75; // [rsp+28h] [rbp-160h]
  unsigned int v76; // [rsp+30h] [rbp-158h]
  unsigned int v77; // [rsp+34h] [rbp-154h]
  int v78; // [rsp+38h] [rbp-150h]
  unsigned int v79; // [rsp+3Ch] [rbp-14Ch]
  char *v80; // [rsp+40h] [rbp-148h]
  unsigned int v81; // [rsp+48h] [rbp-140h]
  __int64 *v82; // [rsp+50h] [rbp-138h]
  unsigned int v83; // [rsp+58h] [rbp-130h]
  int v84; // [rsp+5Ch] [rbp-12Ch]
  _QWORD *v85; // [rsp+60h] [rbp-128h] BYREF
  _QWORD *v86; // [rsp+68h] [rbp-120h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-118h]
  __int64 v88; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v89; // [rsp+80h] [rbp-108h]
  int v90; // [rsp+84h] [rbp-104h]
  unsigned __int64 v91; // [rsp+88h] [rbp-100h]
  __int64 v92; // [rsp+90h] [rbp-F8h]
  char *v93; // [rsp+98h] [rbp-F0h]
  unsigned __int64 v94; // [rsp+A0h] [rbp-E8h]
  unsigned int *v95; // [rsp+A8h] [rbp-E0h]
  ULONG_PTR v96; // [rsp+B0h] [rbp-D8h]
  ULONG_PTR v97; // [rsp+B8h] [rbp-D0h]
  unsigned int v98; // [rsp+C0h] [rbp-C8h]
  __int64 v99; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v100; // [rsp+D0h] [rbp-B8h]
  char *v101; // [rsp+D8h] [rbp-B0h]
  wchar_t *v102; // [rsp+E0h] [rbp-A8h]
  _DWORD *v103; // [rsp+E8h] [rbp-A0h]
  char *v104; // [rsp+F0h] [rbp-98h]
  _QWORD *v105; // [rsp+F8h] [rbp-90h]
  __int64 v106; // [rsp+100h] [rbp-88h]
  char *v107; // [rsp+108h] [rbp-80h]
  char *v108; // [rsp+110h] [rbp-78h]
  __int64 v109; // [rsp+118h] [rbp-70h]
  _DWORD v110[8]; // [rsp+120h] [rbp-68h] BYREF

  v95 = a4;
  v89 = a3;
  v106 = a2;
  v97 = BugCheckParameter2;
  v88 = 0LL;
  v5 = qword_14040AE48;
  v92 = qword_14040AE48;
  v6 = BugCheckParameter2 + 16;
  v96 = BugCheckParameter2 + 16;
  v7 = 0LL;
  v82 = 0LL;
  v8 = EtwpCovSampAcquireSamplerRundown(&v88);
  if ( v8 < 0 )
    goto LABEL_4;
  if ( v88 != BugCheckParameter2 )
  {
    v8 = -1073741431;
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  EtwpCovSampCaptureFlush(v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v12 = 0;
  v13 = *(_QWORD **)(BugCheckParameter2 + 1152);
  v75 = (_QWORD **)v13;
  while ( v13 != (_QWORD *)(BugCheckParameter2 + 1152) )
  {
    v12 += *((_DWORD *)v13 + 4);
    v13 = (_QWORD *)*v13;
  }
  v75 = (_QWORD **)v13;
  v83 = v12;
  v14 = 8LL * v12;
  v100 = v14;
  v15 = -1;
  if ( v14 <= 0xFFFFFFFF )
    v15 = v14;
  v98 = v15;
  v8 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_4;
  v16 = v15 + 716;
  v17 = -1;
  if ( v15 + 716 >= v15 )
    v17 = v15 + 716;
  v77 = v17;
  v8 = v16 < v15 ? 0xC0000095 : 0;
  if ( v16 < v15 )
    goto LABEL_4;
  v18 = 0;
  v74 = 0;
  v81 = 0;
  v76 = 0;
  v79 = 0;
  v78 = 0;
  v86 = &v85;
  v85 = &v85;
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquirePushLockSharedEx(v6 + 664, 0LL);
  v20 = *(_QWORD **)(v6 + 712);
  v75 = (_QWORD **)v20;
LABEL_27:
  v21 = (_QWORD **)v86;
  while ( 1 )
  {
    v22 = v20;
    if ( v20 == (_QWORD *)(v6 + 712) )
      break;
    v20 = (_QWORD *)*v20;
    v75 = (_QWORD **)v20;
    if ( *((_DWORD *)v22 + 15) )
    {
      if ( !v22[4] )
      {
        if ( *(v22 - 1) == 1LL )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1108));
        _InterlockedExchange((volatile __int32 *)v22 + 15, 0);
        v20 = v75;
        goto LABEL_27;
      }
      v74 = v18 + 1;
      v81 = v18 + 1;
      ++v76;
      v23 = 2 * (unsigned __int16)*((_DWORD *)v22 + 12) + 2;
      v24 = v23 + v79;
      v25 = -1;
      if ( v23 + v79 >= v23 )
        v25 = v23 + v79;
      v79 = v25;
      v8 = v24 < v23 ? 0xC0000095 : 0;
      if ( v24 < v23 )
        goto LABEL_99;
      v26 = *((_DWORD *)v22 - 4) - (((unsigned __int8)*((_DWORD *)v22 - 4) - 1) & 3) + 3;
      v27 = v26 + v78;
      v28 = -1;
      if ( v26 + v78 >= v26 )
        v28 = v26 + v78;
      v78 = v28;
      v8 = v27 < v26 ? 0xC0000095 : 0;
      if ( v27 < v26 )
        goto LABEL_99;
      v29 = v22 + 9;
      if ( *v21 != &v85 )
LABEL_94:
        __fastfail(3u);
      *v29 = &v85;
      v29[1] = v21;
      *v21 = v29;
      v21 = (_QWORD **)v29;
      v86 = v29;
      v18 = v74;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 664));
  KeAbPostRelease(v6 + 664);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v30 = 36LL * v76;
  v31 = -1;
  if ( v30 <= 0xFFFFFFFF )
    v31 = 36 * v76;
  v98 = v31;
  v8 = v30 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v30 > 0xFFFFFFFF )
    goto LABEL_99;
  v32 = v31 + v77;
  v33 = -1;
  v34 = v32 < v77;
  if ( v32 >= v77 )
    v33 = v32;
  v77 = v33;
  v8 = v34 ? 0xC0000095 : 0;
  if ( v32 < v17 )
    goto LABEL_99;
  v35 = v33 + v79;
  v36 = -1;
  if ( v33 + v79 >= v33 )
    v36 = v33 + v79;
  v77 = v36;
  v8 = v35 < v33 ? 0xC0000095 : 0;
  if ( v35 < v33 )
    goto LABEL_99;
  v37 = v78;
  v38 = v78 + v36;
  v39 = -1;
  if ( v78 + v36 >= v36 )
    v39 = v78 + v36;
  v77 = v39;
  v8 = v38 < v36 ? 0xC0000095 : 0;
  if ( v38 < v36 )
  {
LABEL_99:
    v7 = 0LL;
    goto LABEL_98;
  }
  v9 = v74;
  if ( v89 < v39 )
  {
    *v95 = v39;
    v8 = -1073741789;
    v7 = 0LL;
    goto LABEL_5;
  }
  if ( v74 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8 * v74, 0x56777445u);
    v7 = PoolWithTag;
    v82 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_5;
    }
    memset(PoolWithTag, 0, 8 * v74);
    v37 = v78;
  }
  v41 = v106;
  if ( (*(_DWORD *)(v106 + 16) & 1) != 0 )
  {
    v42 = v92;
    v43 = *(_QWORD *)(v92 + 944);
    if ( v43 )
    {
      v99 = *(_QWORD *)(v92 + 944);
      memset((void *)(v43 + 8), 0, 4LL * *(unsigned int *)(v43 + 4));
    }
    v44 = *(_QWORD *)(v42 + 952);
    if ( v44 )
    {
      v99 = *(_QWORD *)(v42 + 952);
      memset((void *)(v44 + 8), 0, 4LL * *(unsigned int *)(v44 + 4));
    }
  }
  v45 = (_DWORD *)(v41 + 20);
  v103 = v45;
  v46 = (char *)(v41 + 64);
  v80 = v46;
  memset(v45, 0, 0x2CuLL);
  *v45 = 44;
  v45[2] = *(_DWORD *)(BugCheckParameter2 + 1196);
  v45[4] = 592;
  v45[3] = 44;
  v47 = v46;
  v107 = v46;
  v48 = v46 + 592;
  v80 = v48;
  v49 = (_OWORD *)(v6 + 8);
  v50 = 4LL;
  do
  {
    *(_OWORD *)v47 = *v49;
    *((_OWORD *)v47 + 1) = v49[1];
    *((_OWORD *)v47 + 2) = v49[2];
    *((_OWORD *)v47 + 3) = v49[3];
    *((_OWORD *)v47 + 4) = v49[4];
    *((_OWORD *)v47 + 5) = v49[5];
    *((_OWORD *)v47 + 6) = v49[6];
    v47 += 128;
    *((_OWORD *)v47 - 1) = v49[7];
    v49 += 8;
    --v50;
  }
  while ( v50 );
  *(_OWORD *)v47 = *v49;
  *((_OWORD *)v47 + 1) = v49[1];
  *((_OWORD *)v47 + 2) = v49[2];
  *((_OWORD *)v47 + 3) = v49[3];
  *((_OWORD *)v47 + 4) = v49[4];
  v45[6] = 60;
  v45[5] = (_DWORD)v48 - (_DWORD)v45;
  v104 = v48;
  v51 = v48 + 60;
  v45[8] = v83;
  v45[7] = (_DWORD)v51 - (_DWORD)v45;
  v52 = v51;
  v101 = v51;
  v53 = &v51[v100];
  v80 = v53;
  v108 = v53;
  for ( i = *(_QWORD **)(BugCheckParameter2 + 1152); ; i = (_QWORD *)*i )
  {
    v75 = (_QWORD **)i;
    if ( i == (_QWORD *)(BugCheckParameter2 + 1152) )
      break;
    v105 = i;
    v55 = 0;
    v90 = 0;
    while ( v55 < *((_DWORD *)i + 5) )
    {
      v56 = i[3] + 8LL * v55;
      v109 = v56;
      if ( *(_QWORD *)v56 )
      {
        if ( v52 >= v53 )
          break;
        *(_DWORD *)v52 = *(_QWORD *)v56;
        *((_DWORD *)v52 + 1) = *(_DWORD *)(v56 + 4);
        v52 += 8;
        v101 = v52;
      }
      v90 = ++v55;
    }
  }
  v57 = v76;
  v45[10] = v76;
  v45[9] = (_DWORD)v53 - (_DWORD)v45;
  v58 = v53;
  v93 = v53;
  v59 = &v53[36 * v57];
  memset(v58, 0, 36 * v57);
  v60 = v59;
  v91 = (unsigned __int64)v59;
  v102 = (wchar_t *)&v59[v37];
  v61 = v37 + (_DWORD)v59;
  pszDest = v102;
  v62 = v79 + (_DWORD)v102;
  v80 = (char *)v102 + v79;
  v94 = (unsigned __int64)v80;
  v84 = 0;
  v63 = v85;
  while ( 1 )
  {
    v75 = (_QWORD **)v63;
    if ( v63 == &v85 )
      break;
    v64 = v93;
    *((_DWORD *)v93 + 2) = (_DWORD)v60 - (_DWORD)v45;
    *((_DWORD *)v64 + 3) = *((_DWORD *)v63 - 22);
    *(_DWORD *)v64 = v61 - (_DWORD)v45;
    *((_DWORD *)v64 + 1) = (unsigned __int16)*((_DWORD *)v63 - 6);
    *((_DWORD *)v64 + 4) = *((_DWORD *)v63 - 27);
    *((_DWORD *)v64 + 5) = *((_DWORD *)v63 - 28);
    *((_DWORD *)v64 + 6) = *((_DWORD *)v63 - 26);
    *((_DWORD *)v64 + 7) = *((_DWORD *)v63 - 5);
    *((_DWORD *)v64 + 8) = *((_DWORD *)v63 - 4);
    v93 = v64 + 36;
    memmove(v60, (const void *)*(v63 - 12), *((unsigned int *)v63 - 22));
    v91 = (*((unsigned int *)v63 - 22) + v91 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v91 > (unsigned __int64)v102 )
      break;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v94 - (_QWORD)pszDest) >> 1,
      (STRSAFE_PCNZWCH)*(v63 - 4),
      (unsigned __int16)*((_DWORD *)v63 - 6));
    pszDest += (unsigned int)(unsigned __int16)*((_DWORD *)v63 - 6) + 1;
    if ( (unsigned __int64)pszDest > v94 )
      break;
    v65 = KeGetCurrentThread();
    --v65->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 664, 0LL);
    *(_QWORD *)(v6 + 672) = KeGetCurrentThread();
    v66 = v75;
    v67 = v84;
    v82[v84] = (__int64)*(v75 - 5);
    v84 = v67 + 1;
    *(v66 - 5) = 0LL;
    *(v63 - 4) = 0LL;
    *((_DWORD *)v63 - 6) &= 0xFFFF0000;
    *((_DWORD *)v63 - 6) |= 0x80000u;
    *(_QWORD *)(v6 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 664));
    KeAbPostRelease(v6 + 664);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    --v76;
    v68 = (volatile __int32 *)v75;
    if ( *(v75 - 10) == (_QWORD *)1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1108));
      v68 = (volatile __int32 *)v75;
    }
    _InterlockedExchange(v68 - 3, 0);
    v63 = *v75;
    v62 = (unsigned int)v80;
    v45 = v103;
    v61 = (unsigned int)pszDest;
    v60 = (void *)v91;
  }
  v69 = v104;
  *(_OWORD *)v104 = *(_OWORD *)(v6 + 600);
  *((_OWORD *)v69 + 1) = *(_OWORD *)(v6 + 616);
  *((_OWORD *)v69 + 2) = *(_OWORD *)(v6 + 632);
  *((_QWORD *)v69 + 6) = *(_QWORD *)(v6 + 648);
  *((_DWORD *)v69 + 14) = *(_DWORD *)(v6 + 656);
  memset((void *)(v6 + 600), 0, 0x3CuLL);
  memset(v110, 0, sizeof(v110));
  EtwpCovSampCaptureFlushStats(v92, v110);
  *((_DWORD *)v69 + 7) = v110[0];
  *((_DWORD *)v69 + 8) = v110[1];
  *((_DWORD *)v69 + 9) = v110[2];
  *((_DWORD *)v69 + 10) = v110[3];
  *((_DWORD *)v69 + 11) = v110[4];
  *((_DWORD *)v69 + 12) = v110[5];
  *((_DWORD *)v69 + 13) = v110[6];
  *((_DWORD *)v69 + 14) = v110[7];
  v45[1] = v62 - (_DWORD)v45;
  v70 = *(_QWORD **)(BugCheckParameter2 + 1152);
  v75 = (_QWORD **)v70;
  while ( v70 != (_QWORD *)(BugCheckParameter2 + 1152) )
  {
    v71 = v70;
    v105 = v70;
    v70 = (_QWORD *)*v70;
    v75 = (_QWORD **)v70;
    if ( v71 == *(_QWORD **)(BugCheckParameter2 + 1136) )
    {
      memset((void *)v71[3], 0, 8LL * *((unsigned int *)v71 + 5));
      *((_DWORD *)v71 + 4) = 0;
    }
    else
    {
      v72 = (_QWORD *)v71[1];
      if ( (_QWORD *)v70[1] != v71 || (_QWORD *)*v72 != v71 )
        goto LABEL_94;
      *v72 = v70;
      v70[1] = v72;
      --*(_DWORD *)(BugCheckParameter2 + 1168);
      EtwpCoverageSamplerFreeTable(v71);
    }
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1196);
  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v92, 0);
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  EtwpCovSampContextPruneModules(v6);
  *v95 = v77;
  v8 = 0;
  v7 = v82;
LABEL_98:
  v9 = v74;
LABEL_5:
  if ( *(struct _KTHREAD **)(v6 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 664));
    KeAbPostRelease(v6 + 664);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v7 )
  {
    for ( j = 0; j < v9; ++j )
      EtwpCovSampModuleNameInfoCleanup(&v7[j]);
    ExFreePoolWithTag(v7, 0x56777445u);
  }
  if ( v88 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_14040AE40);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v8;
}
