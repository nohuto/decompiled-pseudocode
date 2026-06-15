/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18002BFE0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180033B50 (AudioSessionManagerGetCurrentSession.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800CDB80 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800CDC1C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800CDFBC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180028914 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18002B5E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18002CF40 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002CF60 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002D020 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  wchar_t *v2; // rbx
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // r13d
  wchar_t *v7; // rdx
  wchar_t *v8; // rsi
  wchar_t *v9; // r15
  wchar_t *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  const wchar_t *v14; // rsi
  wchar_t *v15; // r13
  wchar_t *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  wchar_t *v20; // rcx
  wchar_t *v21; // rsi
  wchar_t *v22; // r13
  wchar_t *v23; // rax
  __int64 v24; // rax
  int v25; // r12d
  __int64 v26; // rbx
  __int64 v27; // rdi
  int v28; // r13d
  const wchar_t *v29; // rsi
  wchar_t *v30; // r12
  wchar_t *v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  wchar_t *v34; // r8
  __int64 v35; // rsi
  int v36; // r12d
  signed int v37; // edx
  wchar_t *v38; // rax
  const wchar_t *v39; // rsi
  wchar_t *v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rdi
  wchar_t *v43; // rcx
  wchar_t *v44; // rsi
  wchar_t *v45; // r13
  wchar_t *v46; // rax
  __int64 v47; // rax
  int v48; // r12d
  __int64 v49; // rbx
  __int64 v50; // rdi
  int v51; // r12d
  const wchar_t *v52; // rsi
  wchar_t *v53; // r13
  wchar_t *v54; // rax
  __int64 v55; // r14
  __int64 v56; // rax
  wchar_t *v57; // rcx
  __int64 v58; // r13
  int v59; // r14d
  signed int v60; // edx
  wchar_t *v61; // rax
  const wchar_t *v62; // rsi
  wchar_t *v63; // rax
  wchar_t *v64; // r12
  __int64 v65; // rax
  wchar_t *v66; // rax
  wchar_t *v67; // r13
  __int64 v68; // rax
  __int64 v69; // rcx
  wchar_t *v70; // rdx
  __int64 v71; // rcx
  int v72; // r13d
  wchar_t *v73; // rdx
  wchar_t *v74; // rdx
  wchar_t *v75; // rdx
  wchar_t *v77; // r8
  __int64 v78; // r13
  int v79; // r12d
  signed int v80; // edx
  wchar_t *v81; // rax
  const wchar_t *v82; // rsi
  wchar_t *v83; // rax
  wchar_t *v84; // r15
  __int64 v85; // rcx
  wchar_t *v86; // rdx
  wchar_t *v87; // r8
  __int64 v88; // rsi
  int v89; // r13d
  signed int v90; // edx
  wchar_t *v91; // rax
  const wchar_t *v92; // rsi
  wchar_t *v93; // rax
  wchar_t *v94; // r12
  __int64 v95; // rcx
  wchar_t *v96; // rdx
  wchar_t *v97; // r8
  __int64 v98; // rsi
  int v99; // r13d
  signed int v100; // edx
  wchar_t *v101; // rax
  const wchar_t *v102; // rsi
  wchar_t *v103; // rax
  wchar_t *v104; // r12
  __int64 v105; // rcx
  wchar_t *v106; // rdx
  __int64 v107; // r12
  __int64 v108; // r12
  __int64 v109; // r12
  __int64 v110; // r12
  wchar_t *v111; // r9
  __int64 v112; // r13
  signed int v113; // edx
  wchar_t *v114; // rax
  const wchar_t *v115; // rsi
  wchar_t *v116; // rax
  wchar_t *v117; // r12
  __int64 v118; // rcx
  wchar_t *v119; // rdx
  wchar_t *v120; // [rsp+30h] [rbp-78h] BYREF
  wchar_t *v121; // [rsp+38h] [rbp-70h] BYREF
  wchar_t *Str; // [rsp+40h] [rbp-68h] BYREF
  wchar_t *v123; // [rsp+48h] [rbp-60h]
  wchar_t *v124; // [rsp+50h] [rbp-58h]
  __int64 v125; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v126; // [rsp+60h] [rbp-48h] BYREF
  int v128; // [rsp+B8h] [rbp+10h]
  int v129; // [rsp+B8h] [rbp+10h]
  int v130; // [rsp+B8h] [rbp+10h]
  wchar_t *v131; // [rsp+B8h] [rbp+10h]
  int v132; // [rsp+B8h] [rbp+10h]
  int v133; // [rsp+B8h] [rbp+10h]
  int v134; // [rsp+B8h] [rbp+10h]
  int v135; // [rsp+B8h] [rbp+10h]
  int v136; // [rsp+B8h] [rbp+10h]
  int v137; // [rsp+B8h] [rbp+10h]
  int v138; // [rsp+B8h] [rbp+10h]
  int v139; // [rsp+C0h] [rbp+18h]
  int v140; // [rsp+C0h] [rbp+18h]
  int v141; // [rsp+C0h] [rbp+18h]
  int v142; // [rsp+C0h] [rbp+18h]
  int v143; // [rsp+C8h] [rbp+20h]

  v125 = -2LL;
  Str = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v121 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v2 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v120 = v2;
  v3 = CAudioEndpointId::ToString(this, &Str);
  if ( v3 < 0 )
    goto LABEL_237;
  v3 = CAppAudioSessionId::ToString((char *)this + 8, &v121);
  if ( v3 < 0 )
    goto LABEL_237;
  v3 = CAppInstanceId::ToString((unsigned int *)this + 14, (__int64)&v120);
  v143 = v3;
  if ( v3 < 0 )
  {
    v2 = v120;
LABEL_237:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 1018, v3);
    goto LABEL_129;
  }
  v4 = -1LL;
  do
    ++v4;
  while ( SubStr[v4] );
  try
  {
    if ( (_DWORD)v4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( asc_18015EFDC[v5] );
      v6 = 0;
      v128 = 0;
      v7 = Str;
      v8 = Str;
      v9 = &Str[*((int *)Str - 4)];
      if ( Str >= v9 )
      {
LABEL_18:
        v12 = -1LL;
        do
          ++v12;
        while ( Control[v12] );
        if ( (_DWORD)v12 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( aB[v13] );
          v129 = 0;
          v14 = v7;
          v15 = &v7[*((int *)v7 - 4)];
          if ( v7 < v15 )
          {
            do
            {
              v16 = wcsstr(v14, L"|");
              if ( v16 )
              {
                v110 = (int)v12;
                do
                {
                  ++v129;
                  v14 = &v16[v110];
                  v16 = wcsstr(&v16[v110], L"|");
                }
                while ( v16 );
              }
              if ( v14 )
              {
                v17 = -1LL;
                do
                  ++v17;
                while ( v14[v17] );
              }
              else
              {
                LODWORD(v17) = 0;
              }
              v14 += (int)v17 + 1;
            }
            while ( v14 < v15 );
            if ( v129 > 0 )
            {
              v111 = Str;
              v112 = *((int *)Str - 4);
              v142 = v112 + v129 * (v13 - v12);
              v113 = v142;
              if ( v142 <= (int)v112 )
                v113 = *((_DWORD *)Str - 4);
              if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v113)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v113);
                v111 = Str;
              }
              v114 = &v111[v112];
              v124 = v114;
              v115 = v111;
              while ( v115 < v114 )
              {
                v123 = (wchar_t *)(int)v13;
                while ( 1 )
                {
                  v116 = wcsstr(v115, L"|");
                  v117 = v116;
                  if ( !v116 )
                    break;
                  v118 = v116 - Str;
                  v138 = v112 - v118 - v12;
                  v119 = &v116[(int)v12];
                  v115 = &v116[(_QWORD)v123];
                  if ( 2LL * v138 )
                  {
                    if ( !v115 || !v119 )
                    {
                      *(_DWORD *)_o__errno(v118) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v116[(_QWORD)v123], v119, 2LL * v138);
                  }
                  if ( 2LL * (int)v13 )
                    memcpy_0(v117, L"%b", 2LL * (int)v13);
                  v117[(int)v13 + v138] = 0;
                  LODWORD(v112) = v13 - v12 + v112;
                }
                v115 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v115) + 1);
                v114 = v124;
              }
              ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v142);
            }
          }
        }
        v18 = -1LL;
        do
          ++v18;
        while ( SubStr[v18] );
        if ( (_DWORD)v18 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( asc_18015EFDC[v19] );
          v130 = 0;
          v20 = v121;
          v21 = v121;
          v22 = &v121[*((int *)v121 - 4)];
          if ( v121 >= v22 )
            goto LABEL_43;
          do
          {
            v23 = wcsstr(v21, L"%");
            if ( v23 )
            {
              v108 = (int)v18;
              do
              {
                ++v130;
                v21 = &v23[v108];
                v23 = wcsstr(&v23[v108], L"%");
              }
              while ( v23 );
            }
            if ( v21 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( v21[v24] );
            }
            else
            {
              LODWORD(v24) = 0;
            }
            v21 += (int)v24 + 1;
          }
          while ( v21 < v22 );
          v25 = v130;
          if ( v130 > 0 )
          {
            v87 = v121;
            v88 = *((int *)v121 - 4);
            v136 = v88;
            v89 = v88 + v25 * (v19 - v18);
            if ( v89 <= (int)v88 )
              v90 = *((_DWORD *)v121 - 4);
            else
              v90 = v88 + v25 * (v19 - v18);
            if ( ((1 - *((_DWORD *)v121 - 2)) | (*((_DWORD *)v121 - 3) - v90)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v121, v90);
              v87 = v121;
            }
            v91 = &v87[v88];
            v123 = v91;
            v92 = v87;
            while ( v92 < v91 )
            {
              v124 = (wchar_t *)(int)v19;
              while ( 1 )
              {
                v93 = wcsstr(v92, L"%");
                v94 = v93;
                if ( !v93 )
                  break;
                v95 = v93 - v121;
                v140 = v136 - v95 - v18;
                v96 = &v93[(int)v18];
                v92 = &v93[(_QWORD)v124];
                if ( 2LL * v140 )
                {
                  if ( !v92 || !v96 )
                  {
                    *(_DWORD *)_o__errno(v95) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove_0(&v93[(_QWORD)v124], v96, 2LL * v140);
                }
                if ( 2LL * (int)v19 )
                  memcpy_0(v94, L"%%", 2LL * (int)v19);
                v94[(int)v19 + v140] = 0;
                v136 += v19 - v18;
              }
              v92 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v92) + 1);
              v91 = v123;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v121, v89);
          }
        }
        v20 = v121;
LABEL_43:
        v26 = -1LL;
        do
          ++v26;
        while ( Control[v26] );
        if ( (_DWORD)v26 )
        {
          v27 = -1LL;
          do
            ++v27;
          while ( aB[v27] );
          v28 = 0;
          v29 = v20;
          v30 = &v20[*((int *)v20 - 4)];
          v131 = v30;
          if ( v20 < v30 )
          {
            do
            {
              v31 = wcsstr(v29, L"|");
              if ( v31 )
              {
                v32 = (int)v26;
                do
                {
                  ++v28;
                  v29 = &v31[v32];
                  v31 = wcsstr(&v31[v32], L"|");
                }
                while ( v31 );
                v30 = v131;
              }
              if ( v29 )
              {
                v33 = -1LL;
                do
                  ++v33;
                while ( v29[v33] );
              }
              else
              {
                LODWORD(v33) = 0;
              }
              v29 += (int)v33 + 1;
            }
            while ( v29 < v30 );
            if ( v28 > 0 )
            {
              v34 = v121;
              v35 = *((int *)v121 - 4);
              v132 = v35;
              v36 = v35 + v28 * (v27 - v26);
              if ( v36 <= (int)v35 )
                v37 = *((_DWORD *)v121 - 4);
              else
                v37 = v35 + v28 * (v27 - v26);
              if ( ((1 - *((_DWORD *)v121 - 2)) | (*((_DWORD *)v121 - 3) - v37)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v121, v37);
                v34 = v121;
              }
              v38 = &v34[v35];
              v123 = v38;
              v39 = v34;
              while ( v39 < v38 )
              {
                v124 = (wchar_t *)(int)v27;
                while ( 1 )
                {
                  v66 = wcsstr(v39, L"|");
                  v67 = v66;
                  if ( !v66 )
                    break;
                  v69 = v66 - v121;
                  v139 = v132 - v69 - v26;
                  v70 = &v66[(int)v26];
                  v39 = &v66[(_QWORD)v124];
                  if ( 2LL * v139 )
                  {
                    if ( !v39 || !v70 )
                    {
                      *(_DWORD *)_o__errno(v69) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v66[(_QWORD)v124], v70, 2LL * v139);
                  }
                  if ( 2LL * (int)v27 )
                    memcpy_0(v67, L"%b", 2LL * (int)v27);
                  v67[(int)v27 + v139] = 0;
                  v132 += v27 - v26;
                }
                if ( v39 )
                {
                  v68 = -1LL;
                  do
                    ++v68;
                  while ( v39[v68] );
                }
                else
                {
                  LODWORD(v68) = 0;
                }
                v39 += (int)v68 + 1;
                v38 = v123;
              }
              if ( v36 < 0 || (v40 = v121, v36 > *((_DWORD *)v121 - 3)) )
                ATL::AtlThrowImpl(-2147024809);
              *((_DWORD *)v121 - 4) = v36;
              v40[v36] = 0;
            }
          }
        }
        v41 = -1LL;
        do
          ++v41;
        while ( SubStr[v41] );
        if ( (_DWORD)v41 )
        {
          v42 = -1LL;
          do
            ++v42;
          while ( asc_18015EFDC[v42] );
          v133 = 0;
          v43 = v120;
          v44 = v120;
          v45 = &v120[*((int *)v120 - 4)];
          if ( v120 < v45 )
          {
            do
            {
              v46 = wcsstr(v44, L"%");
              if ( v46 )
              {
                v109 = (int)v41;
                do
                {
                  ++v133;
                  v44 = &v46[v109];
                  v46 = wcsstr(&v46[v109], L"%");
                }
                while ( v46 );
              }
              if ( v44 )
              {
                v47 = -1LL;
                do
                  ++v47;
                while ( v44[v47] );
              }
              else
              {
                LODWORD(v47) = 0;
              }
              v44 += (int)v47 + 1;
            }
            while ( v44 < v45 );
            v48 = v133;
            if ( v133 > 0 )
            {
              v97 = v120;
              v98 = *((int *)v120 - 4);
              v137 = v98;
              v99 = v98 + v48 * (v42 - v41);
              if ( v99 <= (int)v98 )
                v100 = *((_DWORD *)v120 - 4);
              else
                v100 = v98 + v48 * (v42 - v41);
              if ( ((1 - *((_DWORD *)v120 - 2)) | (*((_DWORD *)v120 - 3) - v100)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v120, v100);
                v97 = v120;
              }
              v101 = &v97[v98];
              v123 = v101;
              v102 = v97;
              while ( v102 < v101 )
              {
                v124 = (wchar_t *)(int)v42;
                while ( 1 )
                {
                  v103 = wcsstr(v102, L"%");
                  v104 = v103;
                  if ( !v103 )
                    break;
                  v105 = v103 - v120;
                  v141 = v137 - v105 - v41;
                  v106 = &v103[(int)v41];
                  v102 = &v103[(_QWORD)v124];
                  if ( 2LL * v141 )
                  {
                    if ( !v102 || !v106 )
                    {
                      *(_DWORD *)_o__errno(v105) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v103[(_QWORD)v124], v106, 2LL * v141);
                  }
                  if ( 2LL * (int)v42 )
                    memcpy_0(v104, L"%%", 2LL * (int)v42);
                  v104[(int)v42 + v141] = 0;
                  v137 += v42 - v41;
                }
                v102 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v102) + 1);
                v101 = v123;
              }
              ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v120, v99);
            }
            v43 = v120;
          }
        }
        else
        {
          v43 = v120;
        }
        v49 = -1LL;
        do
          ++v49;
        while ( Control[v49] );
        if ( (_DWORD)v49 )
        {
          v50 = -1LL;
          do
            ++v50;
          while ( aB[v50] );
          v51 = 0;
          v52 = v43;
          v53 = &v43[*((int *)v43 - 4)];
          if ( v43 < v53 )
          {
            do
            {
              v54 = wcsstr(v52, L"|");
              if ( v54 )
              {
                v55 = (int)v49;
                do
                {
                  ++v51;
                  v52 = &v54[v55];
                  v54 = wcsstr(&v54[v55], L"|");
                }
                while ( v54 );
              }
              if ( v52 )
              {
                v56 = -1LL;
                do
                  ++v56;
                while ( v52[v56] );
              }
              else
              {
                LODWORD(v56) = 0;
              }
              v52 += (int)v56 + 1;
            }
            while ( v52 < v53 );
            if ( v51 > 0 )
            {
              v57 = v120;
              v58 = *((int *)v120 - 4);
              v134 = v58;
              v59 = v58 + v51 * (v50 - v49);
              if ( v59 <= (int)v58 )
                v60 = *((_DWORD *)v120 - 4);
              else
                v60 = v58 + v51 * (v50 - v49);
              if ( ((1 - *((_DWORD *)v120 - 2)) | (*((_DWORD *)v120 - 3) - v60)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v120, v60);
                v57 = v120;
              }
              v61 = &v57[v58];
              v124 = v61;
              v62 = v57;
              while ( v62 < v61 )
              {
                while ( 1 )
                {
                  v63 = wcsstr(v62, L"|");
                  v64 = v63;
                  if ( !v63 )
                    break;
                  v71 = v63 - v120;
                  v72 = v58 - v71 - v49;
                  v73 = &v63[(int)v49];
                  v62 = &v63[(int)v50];
                  if ( 2LL * v72 )
                  {
                    if ( !v62 || !v73 )
                    {
                      *(_DWORD *)_o__errno(v71) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v63[(int)v50], v73, 2LL * v72);
                  }
                  if ( 2LL * (int)v50 )
                    memcpy_0(v64, L"%b", 2LL * (int)v50);
                  v64[(int)v50 + v72] = 0;
                  LODWORD(v58) = v50 - v49 + v134;
                  v134 = v58;
                }
                if ( v62 )
                {
                  v65 = -1LL;
                  do
                    ++v65;
                  while ( v62[v65] );
                }
                else
                {
                  LODWORD(v65) = 0;
                }
                v62 += (int)v65 + 1;
                v61 = v124;
              }
              ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v120, v59);
            }
          }
        }
        v2 = v120;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          (wchar_t **)this + 9,
          L"%s|%s|%s",
          Str,
          v121,
          v120);
        goto LABEL_240;
      }
      do
      {
        v10 = wcsstr(v8, L"%");
        if ( v10 )
        {
          v107 = (int)v4;
          do
          {
            v128 = ++v6;
            v8 = &v10[v107];
            v10 = wcsstr(&v10[v107], L"%");
          }
          while ( v10 );
        }
        if ( v8 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v8[v11] );
        }
        else
        {
          LODWORD(v11) = 0;
        }
        v8 += (int)v11 + 1;
      }
      while ( v8 < v9 );
      if ( v6 > 0 )
      {
        v77 = Str;
        v78 = *((int *)Str - 4);
        v79 = v78 + v128 * (v5 - v4);
        if ( v79 <= (int)v78 )
          v80 = *((_DWORD *)Str - 4);
        else
          v80 = v78 + v128 * (v5 - v4);
        if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v80)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v80);
          v77 = Str;
        }
        v81 = &v77[v78];
        v123 = v81;
        v82 = v77;
        while ( v82 < v81 )
        {
          while ( 1 )
          {
            v83 = wcsstr(v82, L"%");
            v84 = v83;
            if ( !v83 )
              break;
            v85 = v83 - Str;
            v135 = v78 - v85 - v4;
            v86 = &v83[(int)v4];
            v82 = &v83[(int)v5];
            if ( 2LL * v135 )
            {
              if ( !v82 || !v86 )
              {
                *(_DWORD *)_o__errno(v85) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v83[(int)v5], v86, 2LL * v135);
            }
            if ( 2LL * (int)v5 )
              memcpy_0(v84, L"%%", 2LL * (int)v5);
            v84[(int)v5 + v135] = 0;
            LODWORD(v78) = v5 - v4 + v78;
          }
          v82 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v82) + 1);
          v81 = v123;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v79);
      }
    }
    v7 = Str;
    goto LABEL_18;
  }
  catch ( ATL::CAtlException *v126 )
  {
    v3 = *(_DWORD *)v126;
    v2 = v120;
    goto LABEL_128;
  }
LABEL_240:
  v3 = v143;
LABEL_128:
  if ( v3 < 0 )
    goto LABEL_237;
LABEL_129:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3));
  v74 = v121 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v121 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v74 + 8LL))(*(_QWORD *)v74);
  v75 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v75 + 8LL))(*(_QWORD *)v75);
  return (unsigned int)v3;
}
