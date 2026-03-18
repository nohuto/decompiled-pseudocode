/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x140905304
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x14090667C (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlStringCchCopyNW @ 0x140153FE8 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140900B88 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140900F30 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x140901450 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1409014DC (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x1409031A0 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409042E8 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x1409049F0 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140905204 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 *v8; // r15
  signed int v9; // esi
  unsigned int v10; // r12d
  signed __int64 v11; // rax
  char v12; // bl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  __int64 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // r12d
  unsigned int v20; // esi
  struct _KTHREAD *v21; // rax
  __int64 *v22; // r9
  _OWORD **v23; // r10
  __int64 *v24; // r8
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // eax
  _QWORD *v31; // r8
  unsigned __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // r15d
  unsigned int v39; // eax
  unsigned int v40; // edx
  __int64 *PoolWithTag; // rax
  __int64 v42; // rsi
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rcx
  _DWORD *v46; // r12
  char *v47; // rsi
  char *v48; // rax
  char *v49; // rsi
  _OWORD *v50; // rcx
  __int64 v51; // rdx
  char *v52; // rsi
  char *v53; // r9
  char *v54; // rsi
  __int64 *i; // rdx
  unsigned int v56; // r8d
  _DWORD *v57; // r10
  __int64 v58; // rdx
  char *v59; // rcx
  char *v60; // rsi
  void *v61; // r9
  unsigned int v62; // ecx
  unsigned int v63; // esi
  __int64 v64; // r15
  char *v65; // rdx
  __int64 *v66; // r8
  int v67; // edx
  signed __int64 v68; // rax
  volatile __int32 *v69; // rcx
  char *v70; // r15
  __int64 *v71; // rsi
  __int64 *v72; // r15
  __int64 **v73; // rax
  signed __int64 v74; // rax
  unsigned int v76; // [rsp+20h] [rbp-198h]
  __int64 *v77; // [rsp+28h] [rbp-190h]
  unsigned int v78; // [rsp+30h] [rbp-188h]
  unsigned int v79; // [rsp+34h] [rbp-184h]
  int v80; // [rsp+38h] [rbp-180h]
  unsigned int v81; // [rsp+3Ch] [rbp-17Ch]
  char *v82; // [rsp+40h] [rbp-178h]
  unsigned int v83; // [rsp+48h] [rbp-170h]
  __int64 *v84; // [rsp+50h] [rbp-168h]
  unsigned int v85; // [rsp+58h] [rbp-160h]
  int v86; // [rsp+5Ch] [rbp-15Ch]
  __int128 v87; // [rsp+60h] [rbp-158h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-148h]
  unsigned int v89; // [rsp+78h] [rbp-140h]
  unsigned int v90; // [rsp+7Ch] [rbp-13Ch]
  int v91; // [rsp+80h] [rbp-138h]
  unsigned __int64 v92; // [rsp+88h] [rbp-130h]
  __int64 v93; // [rsp+90h] [rbp-128h]
  __int64 v94; // [rsp+98h] [rbp-120h] BYREF
  unsigned __int64 v95; // [rsp+A0h] [rbp-118h]
  unsigned int *v96; // [rsp+A8h] [rbp-110h]
  ULONG_PTR v97; // [rsp+B0h] [rbp-108h]
  ULONG_PTR v98; // [rsp+B8h] [rbp-100h]
  char *v99; // [rsp+C0h] [rbp-F8h]
  __int64 v100; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v101; // [rsp+D0h] [rbp-E8h]
  char *v102; // [rsp+D8h] [rbp-E0h]
  wchar_t *v103; // [rsp+E0h] [rbp-D8h]
  _DWORD *v104; // [rsp+E8h] [rbp-D0h]
  char *v105; // [rsp+F0h] [rbp-C8h]
  __int64 *v106; // [rsp+F8h] [rbp-C0h]
  __int64 v107; // [rsp+100h] [rbp-B8h]
  signed __int64 v108; // [rsp+108h] [rbp-B0h]
  char *v109; // [rsp+110h] [rbp-A8h]
  char *v110; // [rsp+118h] [rbp-A0h]
  _DWORD *v111; // [rsp+120h] [rbp-98h]
  struct _KTHREAD *v112; // [rsp+128h] [rbp-90h]
  struct _KTHREAD *v113; // [rsp+130h] [rbp-88h]
  signed __int64 v114; // [rsp+138h] [rbp-80h]
  signed __int64 v115; // [rsp+140h] [rbp-78h]
  signed __int64 v116; // [rsp+148h] [rbp-70h]
  _DWORD v117[8]; // [rsp+150h] [rbp-68h] BYREF

  v96 = a4;
  v90 = a3;
  v107 = a2;
  v98 = BugCheckParameter2;
  v5 = 0;
  v94 = 0LL;
  v6 = qword_140432588;
  v93 = qword_140432588;
  v7 = BugCheckParameter2 + 16;
  v97 = BugCheckParameter2 + 16;
  v87 = 0LL;
  v8 = 0LL;
  v84 = 0LL;
  v9 = EtwpCovSampAcquireSamplerRundown(&v94);
  if ( v9 < 0 )
    goto LABEL_4;
  if ( v94 != BugCheckParameter2 )
  {
    v9 = -1073741431;
LABEL_4:
    v10 = 0;
    goto LABEL_5;
  }
  EtwpCovSampCaptureFlush(v6);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v14 = 0;
  v15 = *(__int64 **)(BugCheckParameter2 + 1160);
  v77 = v15;
  while ( v15 != (__int64 *)(BugCheckParameter2 + 1160) )
  {
    v14 += *((_DWORD *)v15 + 4);
    v15 = (__int64 *)*v15;
  }
  v77 = v15;
  v85 = v14;
  v16 = 8LL * v14;
  v101 = v16;
  v17 = -1;
  if ( v16 <= 0xFFFFFFFF )
    v17 = v16;
  v89 = v17;
  v9 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v16 > 0xFFFFFFFF )
    goto LABEL_4;
  v18 = v17 + 716;
  v19 = -1;
  if ( v17 + 716 >= v17 )
    v19 = v17 + 716;
  v79 = v19;
  v9 = v18 < v17 ? 0xC0000095 : 0;
  if ( v18 < v17 )
    goto LABEL_4;
  v20 = 0;
  v76 = 0;
  v83 = 0;
  v78 = 0;
  v81 = 0;
  v80 = 0;
  *((_QWORD *)&v87 + 1) = &v87;
  *(_QWORD *)&v87 = &v87;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  ExAcquirePushLockSharedEx(v7 + 664, 0LL);
  v22 = *(__int64 **)(v7 + 712);
  v77 = v22;
LABEL_28:
  v23 = (_OWORD **)*((_QWORD *)&v87 + 1);
  while ( 1 )
  {
    v24 = v22;
    if ( v22 == (__int64 *)(v7 + 712) )
      break;
    v22 = (__int64 *)*v22;
    v77 = v22;
    if ( *((_DWORD *)v24 + 15) || (v24[6] & 0x100000) != 0 )
    {
      if ( !v24[4] )
      {
        if ( *(v24 - 1) == 1 )
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 1116));
        _InterlockedExchange((volatile __int32 *)v24 + 15, 0);
        v22 = v77;
        goto LABEL_28;
      }
      v76 = v20 + 1;
      v83 = v20 + 1;
      ++v78;
      v25 = 2 * (unsigned __int16)*((_DWORD *)v24 + 12) + 2;
      v26 = v25 + v81;
      v27 = -1;
      if ( v25 + v81 >= v25 )
        v27 = v25 + v81;
      v81 = v27;
      v9 = v26 < v25 ? 0xC0000095 : 0;
      if ( v26 < v25 )
        goto LABEL_104;
      v28 = *((_DWORD *)v24 - 4) - (((unsigned __int8)*((_DWORD *)v24 - 4) - 1) & 3) + 3;
      v29 = v28 + v80;
      v30 = -1;
      if ( v28 + v80 >= v28 )
        v30 = v28 + v80;
      v80 = v30;
      v9 = v29 < v28 ? 0xC0000095 : 0;
      if ( v29 < v28 )
        goto LABEL_104;
      v31 = v24 + 9;
      if ( *v23 != &v87 )
        __fastfail(3u);
      *v31 = &v87;
      v31[1] = v23;
      *v23 = v31;
      v23 = (_OWORD **)v31;
      *((_QWORD *)&v87 + 1) = v31;
      v20 = v76;
    }
  }
  v108 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 664), 0LL, 17LL);
  if ( v108 != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v7 + 664));
  KeAbPostRelease(v7 + 664);
  KeLeaveCriticalRegion();
  v32 = 48LL * v78;
  v33 = -1;
  if ( v32 <= 0xFFFFFFFF )
    v33 = 48 * v78;
  v89 = v33;
  v9 = v32 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v32 > 0xFFFFFFFF )
    goto LABEL_104;
  v34 = v33 + v79;
  v35 = -1;
  if ( v34 >= v79 )
    v35 = v34;
  v79 = v35;
  v9 = v34 < v19 ? 0xC0000095 : 0;
  if ( v34 < v19 )
    goto LABEL_104;
  v36 = v35 + v81;
  v37 = -1;
  if ( v35 + v81 >= v35 )
    v37 = v35 + v81;
  v79 = v37;
  v9 = v36 < v35 ? 0xC0000095 : 0;
  if ( v36 < v35 )
    goto LABEL_104;
  v38 = v80;
  v39 = v80 + v37;
  v40 = -1;
  if ( v80 + v37 >= v37 )
    v40 = v80 + v37;
  v79 = v40;
  v9 = v39 < v37 ? 0xC0000095 : 0;
  if ( v39 < v37 )
  {
LABEL_104:
    v8 = 0LL;
    goto LABEL_103;
  }
  v10 = v76;
  if ( v90 < v40 )
  {
    *v96 = v40;
    v9 = -1073741789;
    v8 = 0LL;
    goto LABEL_5;
  }
  if ( v76 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8 * v76, 0x56777445u);
    v8 = PoolWithTag;
    v84 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_5;
    }
    memset(PoolWithTag, 0, 8 * v76);
    v38 = v80;
  }
  v42 = v107;
  if ( (*(_DWORD *)(v107 + 16) & 1) != 0 )
  {
    v43 = v93;
    v44 = *(_QWORD *)(v93 + 944);
    if ( v44 )
    {
      v100 = *(_QWORD *)(v93 + 944);
      memset((void *)(v44 + 8), 0, 4LL * *(unsigned int *)(v44 + 4));
    }
    v45 = *(_QWORD *)(v43 + 952);
    if ( v45 )
    {
      v100 = *(_QWORD *)(v43 + 952);
      memset((void *)(v45 + 8), 0, 4LL * *(unsigned int *)(v45 + 4));
    }
  }
  v46 = (_DWORD *)(v42 + 20);
  v104 = v46;
  v47 = (char *)(v42 + 64);
  v82 = v47;
  memset(v46, 0, 0x2CuLL);
  *v46 = 44;
  v46[2] = *(_DWORD *)(BugCheckParameter2 + 1204);
  v46[4] = 592;
  v46[3] = 44;
  v48 = v47;
  v109 = v47;
  v49 = v47 + 592;
  v82 = v49;
  v50 = (_OWORD *)(v7 + 8);
  v51 = 4LL;
  do
  {
    *(_OWORD *)v48 = *v50;
    *((_OWORD *)v48 + 1) = v50[1];
    *((_OWORD *)v48 + 2) = v50[2];
    *((_OWORD *)v48 + 3) = v50[3];
    *((_OWORD *)v48 + 4) = v50[4];
    *((_OWORD *)v48 + 5) = v50[5];
    *((_OWORD *)v48 + 6) = v50[6];
    v48 += 128;
    *((_OWORD *)v48 - 1) = v50[7];
    v50 += 8;
    --v51;
  }
  while ( v51 );
  *(_OWORD *)v48 = *v50;
  *((_OWORD *)v48 + 1) = v50[1];
  *((_OWORD *)v48 + 2) = v50[2];
  *((_OWORD *)v48 + 3) = v50[3];
  *((_OWORD *)v48 + 4) = v50[4];
  v46[6] = 60;
  v46[5] = (_DWORD)v49 - (_DWORD)v46;
  v105 = v49;
  v52 = v49 + 60;
  v46[8] = v85;
  v46[7] = (_DWORD)v52 - (_DWORD)v46;
  v53 = v52;
  v102 = v52;
  v54 = &v52[v101];
  v82 = v54;
  v110 = v54;
  for ( i = *(__int64 **)(BugCheckParameter2 + 1160); ; i = (__int64 *)*i )
  {
    v77 = i;
    if ( i == (__int64 *)(BugCheckParameter2 + 1160) )
      break;
    v106 = i;
    v56 = 0;
    v91 = 0;
    while ( v56 < *((_DWORD *)i + 5) )
    {
      v57 = (_DWORD *)(i[3] + 8LL * v56);
      v111 = v57;
      if ( *(_QWORD *)v57 )
      {
        if ( v53 >= v54 )
          break;
        *(_DWORD *)v53 = *v57;
        *((_DWORD *)v53 + 1) = v57[1];
        v53 += 8;
        v102 = v53;
      }
      v91 = ++v56;
    }
  }
  v58 = v78;
  v46[10] = v78;
  v46[9] = (_DWORD)v54 - (_DWORD)v46;
  v59 = v54;
  v99 = v54;
  v60 = &v54[48 * v58];
  memset(v59, 0, 48 * v58);
  v61 = v60;
  v92 = (unsigned __int64)v60;
  v103 = (wchar_t *)&v60[v38];
  v62 = v38 + (_DWORD)v60;
  pszDest = v103;
  v63 = v81 + (_DWORD)v103;
  v82 = (char *)v103 + v81;
  v95 = (unsigned __int64)v82;
  v86 = 0;
  v64 = v87;
  while ( 1 )
  {
    v77 = (__int64 *)v64;
    if ( (__int128 *)v64 == &v87 )
      break;
    v65 = v99;
    *((_DWORD *)v99 + 2) = (_DWORD)v61 - (_DWORD)v46;
    *((_DWORD *)v65 + 3) = *(_DWORD *)(v64 - 88);
    *(_DWORD *)v65 = v62 - (_DWORD)v46;
    *((_DWORD *)v65 + 1) = (unsigned __int16)*(_DWORD *)(v64 - 24);
    *((_DWORD *)v65 + 4) = *(_DWORD *)(v64 - 108);
    *((_DWORD *)v65 + 5) = *(_DWORD *)(v64 - 112);
    *((_DWORD *)v65 + 6) = *(_DWORD *)(v64 - 104);
    *((_DWORD *)v65 + 7) = *(_DWORD *)(v64 - 20);
    *((_DWORD *)v65 + 8) = *(_DWORD *)(v64 - 16);
    *((_DWORD *)v65 + 9) = *(_DWORD *)(v64 + 16);
    *((_DWORD *)v65 + 10) = *(_DWORD *)(v64 + 20);
    *((_DWORD *)v65 + 11) = *(_DWORD *)(v64 + 24);
    v99 = v65 + 48;
    memmove(v61, *(const void **)(v64 - 96), *(unsigned int *)(v64 - 88));
    v92 = (*(unsigned int *)(v64 - 88) + v92 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v92 > (unsigned __int64)v103 )
      break;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v95 - (_QWORD)pszDest) >> 1,
      *(STRSAFE_PCNZWCH *)(v64 - 32),
      (unsigned __int16)*(_DWORD *)(v64 - 24));
    pszDest += (unsigned int)(unsigned __int16)*(_DWORD *)(v64 - 24) + 1;
    if ( (unsigned __int64)pszDest > v95 )
      break;
    v112 = KeGetCurrentThread();
    --v112->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v7 + 664, 0LL);
    v113 = KeGetCurrentThread();
    *(_QWORD *)(v7 + 672) = v113;
    v66 = v77;
    v67 = v86;
    v84[v86] = *(v77 - 5);
    v86 = v67 + 1;
    *(v66 - 5) = 0LL;
    *(_QWORD *)(v64 - 32) = 0LL;
    *(_DWORD *)(v64 - 24) &= 0xFFFF0000;
    *(_DWORD *)(v64 - 24) |= 0x80000u;
    *(_QWORD *)(v7 + 672) = 0LL;
    v68 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 664), 0xFFFFFFFFFFFFFFFFuLL);
    v114 = v68;
    if ( (v68 & 2) != 0 && (v68 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 664));
    KeAbPostRelease(v7 + 664);
    KeLeaveCriticalRegion();
    --v78;
    v69 = (volatile __int32 *)v77;
    if ( *(v77 - 10) == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 1116));
      v69 = (volatile __int32 *)v77;
    }
    _InterlockedExchange(v69 - 3, 0);
    v64 = *v77;
    v63 = (unsigned int)v82;
    v46 = v104;
    v62 = (unsigned int)pszDest;
    v61 = (void *)v92;
  }
  v70 = v105;
  *(_OWORD *)v105 = *(_OWORD *)(v7 + 600);
  *((_OWORD *)v70 + 1) = *(_OWORD *)(v7 + 616);
  *((_OWORD *)v70 + 2) = *(_OWORD *)(v7 + 632);
  *((_QWORD *)v70 + 6) = *(_QWORD *)(v7 + 648);
  *((_DWORD *)v70 + 14) = *(_DWORD *)(v7 + 656);
  memset((void *)(v7 + 600), 0, 0x3CuLL);
  memset(v117, 0, sizeof(v117));
  EtwpCovSampCaptureFlushStats(v93, v117);
  *((_DWORD *)v70 + 7) = v117[0];
  *((_DWORD *)v70 + 8) = v117[1];
  *((_DWORD *)v70 + 9) = v117[2];
  *((_DWORD *)v70 + 10) = v117[3];
  *((_DWORD *)v70 + 11) = v117[4];
  *((_DWORD *)v70 + 12) = v117[5];
  *((_DWORD *)v70 + 13) = v117[6];
  *((_DWORD *)v70 + 14) = v117[7];
  v46[1] = v63 - (_DWORD)v46;
  v71 = *(__int64 **)(BugCheckParameter2 + 1160);
  v77 = v71;
  while ( v71 != (__int64 *)(BugCheckParameter2 + 1160) )
  {
    v72 = v71;
    v106 = v71;
    v71 = (__int64 *)*v71;
    v77 = v71;
    if ( v72 == *(__int64 **)(BugCheckParameter2 + 1144) )
    {
      memset((void *)v72[3], 0, 8LL * *((unsigned int *)v72 + 5));
      *((_DWORD *)v72 + 4) = 0;
    }
    else
    {
      v73 = (__int64 **)v72[1];
      if ( (__int64 *)v71[1] != v72 || *v73 != v72 )
        __fastfail(3u);
      *v73 = v71;
      v71[1] = (__int64)v73;
      --*(_DWORD *)(BugCheckParameter2 + 1176);
      EtwpCoverageSamplerFreeTable(v72);
    }
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1204);
  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v93, 0);
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v74 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  v115 = v74;
  if ( (v74 & 2) != 0 && (v74 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  EtwpCovSampContextPruneModules(v7);
  *v96 = v79;
  v9 = 0;
  v8 = v84;
LABEL_103:
  v10 = v76;
LABEL_5:
  if ( *(struct _KTHREAD **)(v7 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v7 + 672) = 0LL;
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 664), 0xFFFFFFFFFFFFFFFFuLL);
    v116 = v11;
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 664));
    KeAbPostRelease(v7 + 664);
    KeLeaveCriticalRegion();
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    while ( v5 < v10 )
      EtwpCovSampModuleNameInfoCleanup(&v8[v5++]);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  EtwpCovSampReleaseSamplerRundown(v94);
  return (unsigned int)v9;
}
