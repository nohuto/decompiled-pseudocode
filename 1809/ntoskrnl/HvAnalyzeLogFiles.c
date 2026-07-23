/*
 * XREFs of HvAnalyzeLogFiles @ 0x1408072D4
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x140807DB0 (HvpDetermineIncrementalLogFileMaximums.c)
 *     HvpDetermineLatestLogFile @ 0x140807E54 (HvpDetermineLatestLogFile.c)
 *     HvpIsReadErrorTransient @ 0x140807FAC (HvpIsReadErrorTransient.c)
 *     HvpLogIneligibleLogHeader @ 0x1408080A0 (HvpLogIneligibleLogHeader.c)
 *     HvpLogInvalidLogHeader @ 0x140808144 (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x1408082B0 (HvpLogUnreadableLog.c)
 */

__int64 __fastcall HvAnalyzeLogFiles(
        unsigned __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  __int64 *v11; // r14
  _QWORD *v12; // rsi
  int v13; // eax
  unsigned int v14; // r12d
  int v15; // r14d
  unsigned int *v16; // r15
  __int64 *v17; // rsi
  unsigned int v18; // edi
  _QWORD *v19; // r13
  _DWORD *v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // r10d
  __int64 v25; // rdi
  __int64 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int64 *v32; // r15
  unsigned int v33; // r13d
  _QWORD *v34; // rsi
  unsigned int v35; // r12d
  unsigned int v36; // r14d
  _DWORD *v37; // rdx
  bool v38; // zf
  _DWORD *v39; // r8
  _DWORD *v40; // r9
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int LevelPlus1; // edx
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  _DWORD *v47; // rax
  __int128 v48; // xmm0
  __int64 v49; // xmm1_8
  int v50; // eax
  char *v51; // r14
  char *v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // xmm1_8
  _DWORD *v55; // rax
  __int64 v56; // xmm1_8
  __int128 v57; // xmm0
  __int64 v58; // xmm1_8
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int128 v62; // xmm0
  __int64 v63; // xmm1_8
  __int128 v64; // xmm0
  __int64 v65; // xmm1_8
  char v67; // [rsp+30h] [rbp-D0h] BYREF
  char v68; // [rsp+31h] [rbp-CFh] BYREF
  char v69; // [rsp+32h] [rbp-CEh] BYREF
  char v70; // [rsp+33h] [rbp-CDh]
  unsigned int v71; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v72; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v73; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v74; // [rsp+48h] [rbp-B8h]
  __int64 v75; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  _OWORD v80[3]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  char *v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  char *v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  char *v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  unsigned int *v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h]
  unsigned int *v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v92; // [rsp+120h] [rbp+20h] BYREF

  v74 = a6;
  v8 = a4;
  v70 = a3;
  v72 = a2;
  v73 = a1;
  v71 = a4;
  v77 = a5;
  v78 = a7;
  v79 = a8;
  v75 = 0LL;
  v76 = 0LL;
  memset(v80, 0, sizeof(v80));
  v9 = 0;
  v10 = 0;
  if ( (_DWORD)v8 )
  {
    v11 = &v75;
    v12 = (_QWORD *)(a5 + 16);
    do
    {
      v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64 *))*(v12 - 1))(*v12, 0LL, 512LL, &v75 + v10);
      v14 = v13;
      if ( v13 < 0 )
      {
        if ( (unsigned __int8)HvpIsReadErrorTransient((unsigned int)v13) )
          return (unsigned int)-1073741491;
        HvpLogUnreadableLog(*((unsigned int *)v12 - 4), v14);
        *v11 = 0LL;
      }
      v8 = v71;
      ++v10;
      v12 += 3;
      ++v11;
    }
    while ( v10 < v71 );
  }
  v15 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_59;
  v16 = (unsigned int *)v77;
  v17 = &v75;
  v18 = v72;
  v19 = (_QWORD *)v73;
  do
  {
    v20 = (_DWORD *)*v17;
    if ( !*v17 )
      goto LABEL_24;
    if ( *v20 == 1718052210
      && v20[1] == v20[2]
      && *(_QWORD *)(v20 + 3) == *v19
      && ((v21 = v20[7], v21 == 6) || v21 == 1)
      && (v22 = v20[10], (unsigned int)(v22 - 1) <= 0x7FFFDFFF)
      && (v22 & 0xFFF) == 0
      && (v23 = HvpHeaderCheckSum((_DWORD *)*v17), v20[127] == v23) )
    {
      if ( v24 >= v18 )
      {
        ++v15;
        goto LABEL_24;
      }
      HvpLogIneligibleLogHeader(*v16, v18, v24);
    }
    else
    {
      HvpLogInvalidLogHeader(v19, *v16, v20);
    }
    *v17 = 0LL;
LABEL_24:
    v16 += 6;
    ++v17;
    --v8;
  }
  while ( v8 );
  v25 = v78;
  v26 = v79;
  if ( !v15 )
  {
LABEL_59:
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
      TlgWrite(&stru_140400AA0, &unk_14036D75D, 0LL, 0LL, 2u, &v92);
    return (unsigned int)-1073741492;
  }
  if ( v79 )
  {
    if ( v15 == 1 )
    {
      v27 = v75 == 0;
    }
    else
    {
      LODWORD(v73) = *(_DWORD *)(v75 + 4);
      HIDWORD(v73) = *(_DWORD *)(v76 + 8);
      v27 = HvpDetermineLatestLogFile(&v73);
    }
    v28 = 4LL;
    v29 = (_OWORD *)*(&v75 + v27);
    v30 = (_OWORD *)v26;
    do
    {
      *v30 = *v29;
      v30[1] = v29[1];
      v30[2] = v29[2];
      v30[3] = v29[3];
      v30[4] = v29[4];
      v30[5] = v29[5];
      v30[6] = v29[6];
      v30 += 8;
      v31 = v29[7];
      v29 += 8;
      *(v30 - 1) = v31;
      --v28;
    }
    while ( v28 );
    memset((void *)(v26 + 512), 0, 0xE00uLL);
    *(_DWORD *)(v26 + 28) = 0;
  }
  v32 = &v75;
  v33 = v71;
  v34 = (_QWORD *)(v77 + 8);
  v35 = 0;
  v36 = 0;
  do
  {
    v37 = (_DWORD *)*v32;
    if ( *v32 )
    {
      v38 = v37[7] == 6;
      v39 = (_DWORD *)v80 + 6 * v35 + 3;
      v40 = (_DWORD *)&v80[1] + 6 * v35;
      *((_DWORD *)v80 + 6 * v35 + 1) = *((_DWORD *)v34 - 2);
      v41 = v37[1];
      *((_DWORD *)v80 + 6 * v35 + 2) = v41;
      *((_DWORD *)v80 + 6 * v35) = v36;
      if ( v38 )
      {
        v42 = v34[1];
        *((_BYTE *)&v80[1] + 24 * v35 + 4) = 0;
        v43 = *v34;
        *v32 = 0LL;
        if ( (int)HvpDetermineIncrementalLogFileMaximums(v43, v42, v39, v40) < 0 )
          return (unsigned int)-1073741491;
      }
      else
      {
        *v39 = v41;
        *v40 = v37[10];
        *((_BYTE *)&v80[1] + 24 * v35 + 4) = 1;
      }
      ++v35;
    }
    ++v36;
    v34 += 3;
    ++v32;
  }
  while ( v36 < v33 );
  LevelPlus1 = stru_140400AA0.LevelPlus1;
  v45 = v80[2];
  v46 = DWORD2(v80[0]);
  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    v68 = BYTE4(v80[0]);
    v69 = BYTE12(v80[1]);
    v82 = &v67;
    v84 = &v68;
    v86 = &v69;
    v88 = &v72;
    v90 = &v71;
    v67 = v35;
    v72 = DWORD2(v80[0]);
    v71 = v80[2];
    v83 = 1LL;
    v85 = 1LL;
    v87 = 1LL;
    v89 = 4LL;
    v91 = 4LL;
    TlgWrite(&stru_140400AA0, &unk_14036D700, 0LL, 0LL, 7u, &pData);
    LevelPlus1 = stru_140400AA0.LevelPlus1;
  }
  if ( v35 == 1 )
  {
    v47 = v74;
    v48 = v80[0];
    v49 = *(_QWORD *)&v80[1];
    goto LABEL_45;
  }
  if ( v70 )
  {
    v73 = __PAIR64__(v45, v46);
    v59 = HvpDetermineLatestLogFile(&v73);
    v60 = v59 == 0 ? 0x18 : 0;
    v61 = 3LL * v59;
    v38 = *(_DWORD *)((char *)v80 + v60 + 12) + 1 == *((_DWORD *)v80 + 6 * v59 + 2);
    v47 = v74;
    if ( v38 )
    {
      v62 = *(_OWORD *)((char *)v80 + v60);
      *v74 = 2;
      v63 = *(_QWORD *)((char *)&v80[1] + v60);
      *(_OWORD *)v25 = v62;
      v64 = *(_OWORD *)((char *)v80 + 8 * v61);
      *(_QWORD *)(v25 + 16) = v63;
      v65 = *((_QWORD *)&v80[1] + v61);
      *(_OWORD *)(v25 + 24) = v64;
      *(_QWORD *)(v25 + 40) = v65;
    }
    else
    {
      v48 = *(_OWORD *)((char *)v80 + 8 * v61);
      v49 = *((_QWORD *)&v80[1] + v61);
LABEL_45:
      *v47 = 1;
      *(_OWORD *)v25 = v48;
      *(_QWORD *)(v25 + 16) = v49;
    }
  }
  else
  {
    if ( v46 >= v45 )
    {
      v50 = DWORD1(v80[2]);
      v52 = (char *)&v80[1] + 8;
      v45 = v46;
      v51 = (char *)v80;
    }
    else
    {
      v50 = HIDWORD(v80[0]);
      v51 = (char *)&v80[1] + 8;
      v52 = (char *)v80;
    }
    if ( v50 + 1 == v45 )
    {
      v55 = v74;
      v56 = *((_QWORD *)v52 + 2);
      *(_OWORD *)v25 = *(_OWORD *)v52;
      v57 = *(_OWORD *)v51;
      *(_QWORD *)(v25 + 16) = v56;
      v58 = *((_QWORD *)v51 + 2);
      *(_OWORD *)(v25 + 24) = v57;
      *(_QWORD *)(v25 + 40) = v58;
      *v55 = 2;
    }
    else
    {
      if ( LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
        TlgWrite(&stru_140400AA0, &unk_14036D6D3, 0LL, 0LL, 2u, &v92);
      v53 = v74;
      v54 = *((_QWORD *)v51 + 2);
      *(_OWORD *)v25 = *(_OWORD *)v51;
      *(_QWORD *)(v25 + 16) = v54;
      *v53 = 1;
    }
  }
  return v9;
}
