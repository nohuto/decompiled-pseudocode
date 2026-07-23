/*
 * XREFs of sub_140689660 @ 0x140689660
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140689660(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  void *v6; // r12
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  signed int v10; // r9d
  unsigned __int64 v11; // rdx
  unsigned int i; // r11d
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r10
  __int64 *v17; // rax
  signed int v18; // ebx
  unsigned int j; // r9d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  const wchar_t *v24; // r11
  __int64 v25; // r14
  void *v26; // r11
  unsigned int v27; // eax
  size_t v28; // r15
  WCHAR *PoolWithTag; // rax
  const WCHAR *v30; // r14
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned int k; // r10d
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // r9
  int *v38; // rax
  unsigned int m; // r9d
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // r8
  unsigned int *v44; // rax
  unsigned int v45; // r15d
  int v46; // ebx
  int v47; // eax
  int v48; // r12d
  unsigned int v49; // eax
  int v50; // eax
  int v51; // r14d
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // ecx
  int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // r8d
  unsigned int v62; // edx
  unsigned int v63; // eax
  int v64; // ecx
  unsigned int v65; // ecx
  int v66; // r10d
  int v67; // r9d
  unsigned int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // eax
  unsigned int v73; // edx
  int v74; // r8d
  unsigned int v75; // ecx
  int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rbx
  int v79; // r13d
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rbx
  int v82; // eax
  double v83; // xmm0_8
  NTSTATUS v84; // eax
  __int64 v85; // rbx
  __int64 v86; // rcx
  unsigned __int64 v87; // rbx
  NTSTATUS v88; // eax
  int v89; // ebx
  unsigned int v90; // r8d
  unsigned int *v91; // rdx
  unsigned int v92; // eax
  SIZE_T v93; // rax
  char *v94; // rax
  char *v95; // rdx
  int v96; // r12d
  char *v97; // rax
  __int64 v98; // r8
  unsigned int v99; // r11d
  char *v100; // r13
  unsigned int v101; // edx
  int v102; // eax
  unsigned int v103; // ecx
  int v104; // r10d
  char *v105; // r8
  unsigned int v106; // eax
  unsigned int v107; // r9d
  char *v108; // rcx
  char *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // xmm0_8
  char *v113; // r13
  int v114; // r9d
  unsigned int v115; // edx
  int v116; // eax
  unsigned int v117; // ecx
  int v118; // r10d
  char *v119; // r8
  unsigned int v120; // eax
  unsigned int v121; // r9d
  char *v122; // rcx
  char *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r13
  int v127; // eax
  int v128; // ecx
  unsigned int v129; // edx
  int v130; // eax
  unsigned int v131; // ecx
  int v132; // r10d
  char *v133; // r8
  unsigned int v134; // eax
  unsigned int v135; // r9d
  char *v136; // rcx
  char *v137; // rdx
  __int64 v138; // rax
  __int64 v139; // r9
  __int64 v140; // r12
  unsigned int v141; // r13d
  unsigned int v142; // edx
  int v143; // eax
  unsigned int v144; // ecx
  int v145; // r10d
  char *v146; // r8
  unsigned int v147; // eax
  unsigned int v148; // r9d
  char *v149; // rcx
  char *v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // r12
  unsigned int v154; // r13d
  unsigned int v155; // ecx
  unsigned int v156; // eax
  int v157; // r10d
  char *v158; // r8
  unsigned int v159; // eax
  unsigned int v160; // r9d
  char *v161; // rcx
  char *v162; // rdx
  __int64 v163; // rax
  PVOID v164; // [rsp+40h] [rbp-C0h]
  unsigned int Size; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int Size_4; // [rsp+4Ch] [rbp-B4h]
  unsigned int v167; // [rsp+50h] [rbp-B0h]
  int v168; // [rsp+54h] [rbp-ACh] BYREF
  int v169; // [rsp+58h] [rbp-A8h] BYREF
  int v170; // [rsp+5Ch] [rbp-A4h]
  unsigned int v171; // [rsp+60h] [rbp-A0h]
  int v172; // [rsp+64h] [rbp-9Ch] BYREF
  int v173; // [rsp+68h] [rbp-98h] BYREF
  unsigned int NumberOfBytes; // [rsp+6Ch] [rbp-94h]
  unsigned int NumberOfBytes_4; // [rsp+70h] [rbp-90h]
  int v176; // [rsp+74h] [rbp-8Ch] BYREF
  char v177[8]; // [rsp+78h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  int v179; // [rsp+88h] [rbp-78h] BYREF
  int v180; // [rsp+8Ch] [rbp-74h] BYREF
  int v181; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v182; // [rsp+94h] [rbp-6Ch]
  unsigned int v183; // [rsp+98h] [rbp-68h]
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  int v185; // [rsp+A8h] [rbp-58h]
  unsigned int v186; // [rsp+BCh] [rbp-44h]
  int v187; // [rsp+C0h] [rbp-40h]
  int v188; // [rsp+C4h] [rbp-3Ch]
  size_t pcbLength; // [rsp+C8h] [rbp-38h] BYREF
  void *Src; // [rsp+D0h] [rbp-30h]
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v192; // [rsp+E0h] [rbp-20h]
  __int64 v193; // [rsp+E8h] [rbp-18h]
  __int64 v194; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v196; // [rsp+108h] [rbp+8h]
  const wchar_t *v197; // [rsp+110h] [rbp+10h]
  int *v198; // [rsp+118h] [rbp+18h]
  unsigned int *v199; // [rsp+120h] [rbp+20h]
  UNICODE_STRING v200; // [rsp+128h] [rbp+28h] BYREF
  __int64 v201; // [rsp+138h] [rbp+38h] BYREF
  int v202; // [rsp+140h] [rbp+40h]

  Size_4 = a3;
  KeyHandle = a2;
  SourceString = 0LL;
  v169 = 0;
  Size = 0;
  v6 = 0LL;
  v164 = 0LL;
  NumberOfBytes_4 = 0;
  Timeout.QuadPart = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 )
  {
    if ( *(_DWORD *)a1 > 3u )
    {
      v11 = *(_QWORD *)(a1 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v13 = -1LL;
        if ( v11 + 4 >= v11 )
          v13 = v11 + 4;
        v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
        if ( v11 + 4 < v11 )
          goto LABEL_23;
        v14 = v13 + *(unsigned int *)v11;
        v11 = -1LL;
        if ( v14 >= v13 )
          v11 = v14;
        v10 = v14 < v13 ? 0xC0000095 : 0;
        if ( v14 < v13 )
          goto LABEL_23;
      }
      v15 = *(_DWORD *)v11;
      v16 = -1LL;
      if ( v11 + 4 >= v11 )
        v16 = v11 + 4;
      v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
      {
LABEL_23:
        v15 = v185;
        v17 = v196;
        goto LABEL_24;
      }
      v17 = 0LL;
      if ( v15 )
        v17 = (__int64 *)v16;
LABEL_24:
      if ( v10 < 0 )
        return (unsigned int)v10;
      if ( v15 != 8 )
        return 3221225507LL;
      v193 = *v17;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( v8 )
  {
    if ( *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v20 = -1LL;
        if ( v8 + 4 >= v8 )
          v20 = v8 + 4;
        v18 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 < v8 )
          goto LABEL_47;
        v21 = v20 + *(unsigned int *)v8;
        v8 = -1LL;
        if ( v21 >= v20 )
          v8 = v21;
        v18 = v21 < v20 ? 0xC0000095 : 0;
        if ( v21 < v20 )
          goto LABEL_47;
      }
      v22 = *(_DWORD *)v8;
      v23 = -1LL;
      if ( v8 + 4 >= v8 )
        v23 = v8 + 4;
      v18 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
      {
LABEL_47:
        v22 = v186;
        v24 = v197;
        goto LABEL_48;
      }
      v24 = 0LL;
      if ( v22 )
        v24 = (const wchar_t *)v23;
LABEL_48:
      if ( v18 < 0 )
        goto LABEL_354;
      if ( !v22 )
      {
        v18 = -1073741762;
        goto LABEL_66;
      }
      if ( (v22 & 1) != 0 )
      {
        v18 = -1073741762;
        goto LABEL_66;
      }
      v25 = v22;
      if ( v24[((unsigned __int64)v22 >> 1) - 1] )
      {
        v18 = -1073741762;
        goto LABEL_66;
      }
      if ( StringCbLengthW(v24, v22, &pcbLength) < 0 )
      {
        v18 = -1073741762;
        goto LABEL_66;
      }
      if ( pcbLength + 2 != v25 )
      {
        v18 = -1073741762;
        goto LABEL_66;
      }
      v167 = pcbLength >> 1;
      Src = v26;
    }
    else
    {
      v18 = -1073741811;
    }
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v18 < 0 )
    goto LABEL_354;
  v27 = 2 * v167 + 2;
  if ( 2 * v167 == -2 )
  {
    v18 = -1073741762;
  }
  else
  {
    v28 = v27;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v27, 0x20534C53u);
    v30 = PoolWithTag;
    if ( PoolWithTag )
    {
      v18 = 0;
      memmove(PoolWithTag, Src, v28);
      SourceString = v30;
    }
    else
    {
      v18 = -1073741801;
    }
  }
LABEL_66:
  if ( v18 >= 0 )
  {
    v31 = *(_QWORD *)(a1 + 8);
    if ( v31 )
    {
      if ( *(_DWORD *)a1 > 5u )
      {
        v32 = *(_QWORD *)(a1 + 8);
        for ( k = 0; k < 5; ++k )
        {
          v34 = -1LL;
          if ( v32 + 4 >= v32 )
            v34 = v32 + 4;
          v18 = v32 + 4 < v32 ? 0xC0000095 : 0;
          if ( v32 + 4 < v32 )
            goto LABEL_85;
          v35 = v34 + *(unsigned int *)v32;
          v32 = -1LL;
          if ( v35 >= v34 )
            v32 = v35;
          v18 = v35 < v34 ? 0xC0000095 : 0;
          if ( v35 < v34 )
            goto LABEL_85;
        }
        v36 = *(_DWORD *)v32;
        v37 = -1LL;
        if ( v32 + 4 >= v32 )
          v37 = v32 + 4;
        v18 = v32 + 4 < v32 ? 0xC0000095 : 0;
        if ( v32 + 4 < v32 )
        {
LABEL_85:
          v36 = v187;
          v38 = v198;
          goto LABEL_86;
        }
        v38 = 0LL;
        if ( v36 )
          v38 = (int *)v37;
LABEL_86:
        if ( v18 < 0 )
          goto LABEL_354;
        if ( v36 != 4 )
        {
          v18 = -1073741789;
          goto LABEL_354;
        }
        v170 = *v38;
      }
      else
      {
        v18 = -1073741811;
      }
    }
    else
    {
      v18 = -1073741811;
    }
    if ( v18 >= 0 )
    {
      if ( v31 && *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v40 = -1LL;
          if ( v31 + 4 >= v31 )
            v40 = v31 + 4;
          v18 = v31 + 4 < v31 ? 0xC0000095 : 0;
          if ( v31 + 4 < v31 )
            goto LABEL_107;
          v41 = v40 + *(unsigned int *)v31;
          v31 = -1LL;
          if ( v41 >= v40 )
            v31 = v41;
          v18 = v41 < v40 ? 0xC0000095 : 0;
          if ( v41 < v40 )
            goto LABEL_107;
        }
        v42 = *(_DWORD *)v31;
        v43 = -1LL;
        if ( v31 + 4 >= v31 )
          v43 = v31 + 4;
        v18 = v31 + 4 < v31 ? 0xC0000095 : 0;
        if ( v31 + 4 < v31 )
        {
LABEL_107:
          v42 = v188;
          v44 = v199;
          goto LABEL_108;
        }
        v44 = 0LL;
        if ( v42 )
          v44 = (unsigned int *)v43;
LABEL_108:
        if ( v18 >= 0 )
        {
          if ( v42 != 4 )
          {
            v18 = -1073741789;
            goto LABEL_354;
          }
          v45 = *v44;
LABEL_114:
          if ( v18 < 0 )
            goto LABEL_354;
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( v45 )
          {
            v46 = 1;
            if ( v45 <= 0x100000 )
              goto LABEL_127;
          }
          else
          {
            v46 = 0;
          }
          v47 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD, _QWORD, unsigned int *))qword_14096E440)(
                  &DestinationString,
                  &v169,
                  0LL,
                  0LL,
                  &Size);
          v48 = v47;
          if ( v47 == -1073741789 )
          {
            v49 = Size;
            if ( v45 < Size )
            {
              if ( !v45 )
                v48 = 0;
LABEL_136:
              v51 = -1;
              v182 = v45 + 4;
              v52 = -1;
              if ( v45 < 0xFFFFFFFC )
                v52 = v45 + 4;
              v183 = v45 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              v18 = v183;
              if ( v45 + 4 < 4 )
                goto LABEL_150;
              v53 = v52 + 28;
              v54 = -1;
              if ( v53 >= 0x1C )
                v54 = v53;
              v18 = v53 < 0x1C ? 0xC0000095 : 0;
              if ( v53 < 0x1C )
                goto LABEL_150;
              v55 = v54 + 8;
              v56 = -1;
              if ( v54 + 8 >= v54 )
                v56 = v54 + 8;
              v18 = v55 < v54 ? 0xC0000095 : 0;
              if ( v55 < v54 )
              {
LABEL_150:
                v57 = v167;
              }
              else
              {
                v57 = v167;
                v58 = v56 + 8;
                v59 = -1;
                if ( v56 + 8 >= v56 )
                  v59 = v56 + 8;
                v18 = v58 < v56 ? 0xC0000095 : 0;
                if ( v58 >= v56 )
                  v57 = v59;
              }
              NumberOfBytes = v57;
              if ( v18 < 0 )
                goto LABEL_353;
              v60 = -1;
              if ( v57 < 0xFFFFFFF8 )
                v60 = v57 + 8;
              v18 = v57 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
              if ( v57 + 8 < 8 )
                goto LABEL_184;
              v61 = v167;
              v62 = (v60 + 7) & 0xFFFFFFF8;
              if ( v62 >= v60 )
              {
                v63 = v62 + 8;
                v64 = -1;
                if ( v62 + 8 >= v62 )
                  v64 = v62 + 8;
                v18 = v63 < v62 ? 0xC0000095 : 0;
                if ( v63 >= v62 )
                  v61 = v64;
              }
              else
              {
                v18 = -1073741675;
              }
              if ( v18 < 0 )
              {
LABEL_184:
                v77 = Size_4;
              }
              else
              {
                v65 = -1;
                v66 = *((_DWORD *)KeyHandle + 8);
                v67 = *((_DWORD *)KeyHandle + 4);
                if ( v61 < 0xFFFFFFFC )
                  v65 = v61 + 4;
                v18 = v61 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( v61 + 4 < 4 )
                  goto LABEL_181;
                v68 = v65 + 4;
                v69 = -1;
                if ( v65 + 4 >= v65 )
                  v69 = v65 + 4;
                v18 = v68 < v65 ? 0xC0000095 : 0;
                if ( v68 < v65 )
                  goto LABEL_181;
                v70 = v69 + v67;
                v71 = -1;
                if ( v69 + v67 >= v69 )
                  v71 = v69 + v67;
                v18 = v70 < v69 ? 0xC0000095 : 0;
                if ( v70 < v69 )
                  goto LABEL_181;
                v72 = v71 + 4;
                v73 = -1;
                if ( v71 + 4 >= v71 )
                  v73 = v71 + 4;
                v18 = v72 < v71 ? 0xC0000095 : 0;
                if ( v72 < v71 )
                {
LABEL_181:
                  v77 = Size_4;
                  if ( v18 >= 0 )
                    v77 = Size_4;
                }
                else
                {
                  v74 = Size_4;
                  v75 = v73 + v66;
                  v76 = -1;
                  if ( v73 + v66 >= v73 )
                    v76 = v73 + v66;
                  v18 = v75 < v73 ? 0xC0000095 : 0;
                  if ( v75 >= v73 )
                    v74 = v76;
                  v77 = Size_4;
                  if ( v75 >= v73 )
                    v77 = v74;
                }
              }
              if ( v18 < 0 )
                goto LABEL_353;
              if ( Size_4 >= v77 && v48 >= 0 )
              {
                v78 = MEMORY[0xFFFFF78000000320];
                v79 = 1;
                v80 = (__int64)((unsigned __int128)(v78 * KeQueryTimeIncrement() * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
                v81 = (v80 >> 63) + v80;
                v192 = v81;
                RtlInitUnicodeString(&v200, L"Security-SPP-GenuineLocalStatus");
                v82 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, char *))qword_14096E440)(
                        &v200,
                        &v179,
                        &v180,
                        4LL,
                        v177);
                if ( v82 == -1073741772 || v82 >= 0 && (v179 != 4 || !v180) )
                  v79 = 0;
                v83 = (double)((int)v81 - (int)g_qwSystemInitTime);
                if ( (__int64)(v81 - g_qwSystemInitTime) < 0 )
                  v83 = v83 + 1.844674407370955e19;
                if ( !v79 && !g_bWNFEventFired && v83 >= 9000000.0 && dword_14096E0CC )
                {
                  g_bWNFEventFired = 1;
                  ZwUpdateWnfStateData(&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL, 0, 0LL, 0LL, 0, 0);
                }
                if ( v81 - g_qwSystemInitTime >= 0xA4CBFB )
                {
                  v84 = KeWaitForSingleObject(&stru_140407480, UserRequest, 1, 0, &Timeout);
                  if ( v84 >= 0 && v84 != 192 && v84 != 258 )
                  {
                    if ( g_ulOldGenuineState != v79 )
                    {
                      if ( v79 )
                      {
                        KeResetEvent(&stru_140407460);
                      }
                      else
                      {
                        v85 = MEMORY[0xFFFFF78000000320];
                        v86 = v85 * KeQueryTimeIncrement();
                        v81 = v192;
                        qword_14096E118 = v86 / 10000;
                      }
                    }
                    v87 = v81 - qword_14096E118;
                    g_ulOldGenuineState = v79;
                    if ( v79 || v87 < 0xADF4FC || !dword_14096E0CC )
                      goto LABEL_229;
                    KeSetEvent(&stru_140407460, 1, 0);
                    v172 = 4;
                    v181 = 0;
                    KeyHandle = 0LL;
                    v88 = ZwOpenKey(&KeyHandle, 1u, &stru_14096E7B8);
                    if ( v88 < 0 )
                    {
                      v88 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, int *))qword_14096E440)(
                              aBd,
                              &v172,
                              &v168,
                              4LL,
                              &v181);
                      v89 = v168;
                    }
                    else
                    {
                      v89 = 3;
                      v168 = 3;
                    }
                    if ( v88 < 0 || v172 != 4 || (unsigned int)(v89 - 1) > 2 )
                    {
                      v89 = 1;
                      v168 = 1;
                    }
                    if ( KeyHandle )
                      ZwClose(KeyHandle);
                    v176 = 0;
                    v201 = 0LL;
                    v202 = 0;
                    v173 = 0;
                    if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, int *))qword_14096E440)(
                                aLn,
                                &v176,
                                &v201,
                                12LL,
                                &v173) >= 0
                      && v176 == 3
                      && v173 == 12 )
                    {
                      v90 = 0;
                      v91 = (unsigned int *)&v201;
                      while ( 1 )
                      {
                        v92 = *v91;
                        if ( (*v91 & 0xF) == v89 )
                          break;
                        ++v90;
                        ++v91;
                        if ( v90 >= 3 )
                          goto LABEL_226;
                      }
                    }
                    else
                    {
LABEL_226:
                      v92 = dword_14096E054 & 0xFFFF0000 | 0x3211;
                    }
                    dword_14096E054 = v92;
                    if ( v170 )
                      NumberOfBytes_4 = v92;
                    else
LABEL_229:
                      KeReleaseMutex(&stru_140407480, 0);
                  }
                }
              }
              v93 = NumberOfBytes;
              *(_DWORD *)(a4 + 4) = NumberOfBytes;
              if ( !(_DWORD)v93 )
              {
                v18 = -1073741762;
                goto LABEL_353;
              }
              v94 = (char *)ExAllocatePoolWithTag(PagedPool, v93, 0x20534C53u);
              v95 = v94;
              if ( !v94 )
              {
                v18 = -1073741801;
                goto LABEL_353;
              }
              *(_QWORD *)(a4 + 8) = v94;
              *(_DWORD *)a4 = 0;
              v96 = v48 | 0x10000000;
              v97 = v94 + 4;
              v98 = -1LL;
              if ( v97 >= v95 )
                v98 = (__int64)v97;
              v18 = v97 < v95 ? 0xC0000095 : 0;
              v99 = 0;
              if ( v97 >= v95 )
              {
                if ( v95 + 8 > &v95[*(unsigned int *)(a4 + 4)] )
                {
                  v18 = -1073741789;
                  goto LABEL_353;
                }
                *(_DWORD *)v95 = 4;
                *(_DWORD *)v98 = v96;
                v99 = ++*(_DWORD *)a4;
              }
              if ( v97 < v95 )
                goto LABEL_353;
              v100 = *(char **)(a4 + 8);
              v194 = v193;
              if ( v100 )
              {
                v104 = 0;
                v105 = v100;
                if ( v99 )
                {
                  while ( 1 )
                  {
                    v106 = -1;
                    if ( *(_DWORD *)v105 < 0xFFFFFFFC )
                      v106 = *(_DWORD *)v105 + 4;
                    v18 = *(_DWORD *)v105 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v105 + 4) < 4 )
                      break;
                    v107 = v106;
                    v108 = v105;
                    v109 = &v105[v106];
                    v110 = -1LL;
                    if ( v109 >= v105 )
                      v110 = (__int64)&v105[v107];
                    v105 = (char *)v110;
                    v18 = v109 < v108 ? 0xC0000095 : 0;
                    if ( v109 < v108 )
                      break;
                    if ( ++v104 >= v99 )
                      goto LABEL_254;
                  }
                }
                else
                {
LABEL_254:
                  v111 = -1LL;
                  if ( v105 + 4 >= v105 )
                    v111 = (__int64)(v105 + 4);
                  v18 = v105 + 4 < v105 ? 0xC0000095 : 0;
                  if ( v105 + 4 >= v105 )
                  {
                    if ( v105 + 12 > &v100[*(unsigned int *)(a4 + 4)] )
                    {
                      v18 = -1073741789;
                      goto LABEL_353;
                    }
                    v112 = v194;
                    *(_DWORD *)v105 = 8;
                    *(_QWORD *)v111 = v112;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v101 = *(_DWORD *)(a4 + 4);
                v102 = -1;
                v103 = v101 + 12;
                if ( v101 + 12 >= v101 )
                  v102 = v101 + 12;
                v18 = v103 < v101 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v102;
                if ( v103 >= v101 )
                {
                  *(_DWORD *)a4 = v99 + 1;
                  goto LABEL_261;
                }
              }
              if ( v18 < 0 )
                goto LABEL_353;
LABEL_261:
              v113 = *(char **)(a4 + 8);
              v114 = v169;
              v170 = v169;
              if ( v113 )
              {
                v118 = 0;
                v119 = v113;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v120 = -1;
                    if ( *(_DWORD *)v119 < 0xFFFFFFFC )
                      v120 = *(_DWORD *)v119 + 4;
                    v18 = *(_DWORD *)v119 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v119 + 4) < 4 )
                      break;
                    v121 = v120;
                    v122 = v119;
                    v123 = &v119[v120];
                    v124 = -1LL;
                    if ( v123 >= v119 )
                      v124 = (__int64)&v119[v121];
                    v119 = (char *)v124;
                    v18 = v123 < v122 ? 0xC0000095 : 0;
                    if ( v123 < v122 )
                      break;
                    if ( (unsigned int)++v118 >= *(_DWORD *)a4 )
                    {
                      v114 = v170;
                      goto LABEL_275;
                    }
                  }
                }
                else
                {
LABEL_275:
                  v125 = -1LL;
                  if ( v119 + 4 >= v119 )
                    v125 = (__int64)(v119 + 4);
                  v18 = v119 + 4 < v119 ? 0xC0000095 : 0;
                  if ( v119 + 4 >= v119 )
                  {
                    if ( v119 + 8 > &v113[*(unsigned int *)(a4 + 4)] )
                    {
                      v18 = -1073741789;
                      goto LABEL_353;
                    }
                    *(_DWORD *)v119 = 4;
                    *(_DWORD *)v125 = v114;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v115 = *(_DWORD *)(a4 + 4);
                v116 = -1;
                v117 = v115 + 8;
                if ( v115 + 8 >= v115 )
                  v116 = v115 + 8;
                v18 = v117 < v115 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v116;
                if ( v117 >= v115 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_282;
                }
              }
              if ( v18 < 0 )
                goto LABEL_353;
LABEL_282:
              v6 = v164;
              if ( v164 )
              {
                if ( !v45 )
                  goto LABEL_284;
              }
              else if ( v45 )
              {
LABEL_284:
                v18 = -1073741811;
                goto LABEL_311;
              }
              v126 = *(_QWORD *)(a4 + 8);
              if ( v126 )
              {
                v132 = 0;
                v133 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v134 = -1;
                    if ( *(_DWORD *)v133 < 0xFFFFFFFC )
                      v134 = *(_DWORD *)v133 + 4;
                    v18 = *(_DWORD *)v133 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v133 + 4) < 4 )
                      break;
                    v135 = v134;
                    v136 = v133;
                    v137 = &v133[v134];
                    v138 = -1LL;
                    if ( v137 >= v133 )
                      v138 = (__int64)&v133[v135];
                    v133 = (char *)v138;
                    v18 = v137 < v136 ? 0xC0000095 : 0;
                    if ( v137 < v136 )
                      break;
                    if ( (unsigned int)++v132 >= *(_DWORD *)a4 )
                      goto LABEL_302;
                  }
                }
                else
                {
LABEL_302:
                  v139 = -1LL;
                  if ( v133 + 4 >= v133 )
                    v139 = (__int64)(v133 + 4);
                  v18 = v133 + 4 < v133 ? 0xC0000095 : 0;
                  if ( v133 + 4 >= v133 )
                  {
                    v6 = v164;
                    if ( (unsigned __int64)&v133[v45 + 4] > v126 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      v18 = -1073741789;
                      goto LABEL_354;
                    }
                    *(_DWORD *)v133 = v45;
                    if ( v164 )
                      memmove((void *)v139, v164, v45);
                    ++*(_DWORD *)a4;
                    goto LABEL_311;
                  }
                }
                v6 = v164;
              }
              else
              {
                v127 = -1;
                if ( v182 >= 4 )
                  v127 = v182;
                v18 = v183;
                if ( v182 >= 4 )
                {
                  v128 = v127;
                  v129 = *(_DWORD *)(a4 + 4);
                  v130 = -1;
                  v131 = v129 + v128;
                  if ( v131 >= v129 )
                    v130 = v131;
                  v18 = v131 < v129 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v130;
                  if ( v131 >= v129 )
                  {
                    ++*(_DWORD *)a4;
                    goto LABEL_312;
                  }
                }
              }
LABEL_311:
              if ( v18 < 0 )
                goto LABEL_354;
LABEL_312:
              v140 = *(_QWORD *)(a4 + 8);
              v141 = Size;
              if ( v140 )
              {
                v145 = 0;
                v146 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v147 = -1;
                    if ( *(_DWORD *)v146 < 0xFFFFFFFC )
                      v147 = *(_DWORD *)v146 + 4;
                    v18 = *(_DWORD *)v146 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v146 + 4) < 4 )
                      break;
                    v148 = v147;
                    v149 = v146;
                    v150 = &v146[v147];
                    v151 = -1LL;
                    if ( v150 >= v146 )
                      v151 = (__int64)&v146[v148];
                    v146 = (char *)v151;
                    v18 = v150 < v149 ? 0xC0000095 : 0;
                    if ( v150 < v149 )
                      break;
                    if ( (unsigned int)++v145 >= *(_DWORD *)a4 )
                      goto LABEL_325;
                  }
                }
                else
                {
LABEL_325:
                  v152 = -1LL;
                  if ( v146 + 4 >= v146 )
                    v152 = (__int64)(v146 + 4);
                  v18 = v146 + 4 < v146 ? 0xC0000095 : 0;
                  if ( v146 + 4 >= v146 )
                  {
                    if ( (unsigned __int64)(v146 + 8) > v140 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      v18 = -1073741789;
                      goto LABEL_353;
                    }
                    *(_DWORD *)v146 = 4;
                    *(_DWORD *)v152 = v141;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v142 = *(_DWORD *)(a4 + 4);
                v143 = -1;
                v144 = v142 + 8;
                if ( v142 + 8 >= v142 )
                  v143 = v142 + 8;
                v18 = v144 < v142 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v143;
                if ( v144 >= v142 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_332;
                }
              }
              if ( v18 < 0 )
                goto LABEL_353;
LABEL_332:
              v153 = *(_QWORD *)(a4 + 8);
              v154 = NumberOfBytes_4;
              if ( v153 )
              {
                v157 = 0;
                v158 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v159 = -1;
                    if ( *(_DWORD *)v158 < 0xFFFFFFFC )
                      v159 = *(_DWORD *)v158 + 4;
                    v18 = *(_DWORD *)v158 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v158 + 4) < 4 )
                      break;
                    v160 = v159;
                    v161 = v158;
                    v162 = &v158[v159];
                    v163 = -1LL;
                    if ( v162 >= v158 )
                      v163 = (__int64)&v158[v160];
                    v158 = (char *)v163;
                    v18 = v162 < v161 ? 0xC0000095 : 0;
                    if ( v162 < v161 )
                      break;
                    if ( (unsigned int)++v157 >= *(_DWORD *)a4 )
                      goto LABEL_345;
                  }
                }
                else
                {
LABEL_345:
                  if ( v158 + 4 >= v158 )
                    v9 = (__int64)(v158 + 4);
                  v18 = v158 + 4 < v158 ? 0xC0000095 : 0;
                  if ( v158 + 4 >= v158 )
                  {
                    if ( (unsigned __int64)(v158 + 8) > v153 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      v18 = -1073741789;
                      goto LABEL_353;
                    }
                    *(_DWORD *)v158 = 4;
                    *(_DWORD *)v9 = v154;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v155 = *(_DWORD *)(a4 + 4);
                v156 = v155 + 8;
                if ( v155 + 8 >= v155 )
                  v51 = v155 + 8;
                v18 = v156 < v155 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v51;
                if ( v156 >= v155 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_352;
                }
              }
              if ( v18 < 0 )
                goto LABEL_353;
LABEL_352:
              v18 = 0;
              goto LABEL_353;
            }
          }
          else
          {
            if ( v47 < 0 )
            {
              v18 = v47;
              goto LABEL_353;
            }
            v49 = Size;
            if ( Size )
            {
              v18 = -2147418113;
              goto LABEL_353;
            }
            v46 = 0;
          }
          v48 = 0;
          v45 = v49;
          if ( !v46 )
            goto LABEL_136;
LABEL_127:
          v164 = ExAllocatePoolWithTag(PagedPool, v45, 0x20534C53u);
          v6 = v164;
          if ( !v164 )
          {
            v18 = -1073741801;
            goto LABEL_354;
          }
          v50 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, PVOID, _QWORD, unsigned int *))qword_14096E440)(
                  &DestinationString,
                  &v169,
                  v164,
                  v45,
                  &Size);
          v48 = v50;
          if ( v50 == -1073741789 || (v18 = v50, v50 >= 0) )
          {
            if ( v45 >= Size )
              v45 = Size;
            goto LABEL_136;
          }
LABEL_353:
          v6 = v164;
          goto LABEL_354;
        }
      }
      else
      {
        v18 = -1073741811;
      }
      v45 = v171;
      goto LABEL_114;
    }
  }
LABEL_354:
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x20534C53u);
  return (unsigned int)v18;
}
