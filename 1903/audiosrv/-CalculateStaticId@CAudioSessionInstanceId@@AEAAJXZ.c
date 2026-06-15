/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180020AB0
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18001BD20 (AudioSessionManagerGetCurrentSession.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800DC0C4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC4D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180021A70 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800233A0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023450 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180023658 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023680 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023740 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180040CD8 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
  __int64 v37; // rdx
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
  unsigned int v59; // r14d
  __int64 v60; // rdx
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
  unsigned int v79; // r12d
  __int64 v80; // rdx
  wchar_t *v81; // rax
  const wchar_t *v82; // rsi
  wchar_t *v83; // rax
  wchar_t *v84; // r15
  __int64 v85; // rax
  wchar_t *v86; // r9
  __int64 v87; // r13
  int v88; // r8d
  __int64 v89; // rdx
  wchar_t *v90; // rax
  const wchar_t *v91; // rsi
  wchar_t *v92; // rax
  wchar_t *v93; // r12
  __int64 v94; // rax
  wchar_t *v95; // r9
  __int64 v96; // r13
  int v97; // r8d
  __int64 v98; // rdx
  wchar_t *v99; // rax
  const wchar_t *v100; // rsi
  wchar_t *v101; // rax
  wchar_t *v102; // r12
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // rcx
  int v106; // r13d
  wchar_t *v107; // rdx
  __int64 v108; // r12
  __int64 v109; // rcx
  int v110; // r13d
  wchar_t *v111; // rdx
  __int64 v112; // r12
  __int64 v113; // rcx
  int v114; // r13d
  wchar_t *v115; // rdx
  __int64 v116; // r12
  wchar_t *v117; // r9
  __int64 v118; // r13
  __int64 v119; // rdx
  wchar_t *v120; // rax
  const wchar_t *v121; // rsi
  wchar_t *v122; // rax
  wchar_t *v123; // r12
  __int64 v124; // rcx
  wchar_t *v125; // rdx
  wchar_t *v126; // [rsp+30h] [rbp-78h] BYREF
  wchar_t *v127; // [rsp+38h] [rbp-70h] BYREF
  wchar_t *Str; // [rsp+40h] [rbp-68h] BYREF
  wchar_t *v129; // [rsp+48h] [rbp-60h]
  wchar_t *v130; // [rsp+50h] [rbp-58h]
  __int64 v131; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v132; // [rsp+60h] [rbp-48h] BYREF
  int v134; // [rsp+B8h] [rbp+10h]
  int v135; // [rsp+B8h] [rbp+10h]
  int v136; // [rsp+B8h] [rbp+10h]
  wchar_t *v137; // [rsp+B8h] [rbp+10h]
  int v138; // [rsp+B8h] [rbp+10h]
  int v139; // [rsp+B8h] [rbp+10h]
  int v140; // [rsp+B8h] [rbp+10h]
  int v141; // [rsp+B8h] [rbp+10h]
  int v142; // [rsp+B8h] [rbp+10h]
  int v143; // [rsp+B8h] [rbp+10h]
  int v144; // [rsp+C0h] [rbp+18h]
  int v145; // [rsp+C0h] [rbp+18h]
  unsigned int v146; // [rsp+C0h] [rbp+18h]
  unsigned int v147; // [rsp+C0h] [rbp+18h]
  unsigned int v148; // [rsp+C0h] [rbp+18h]
  int v149; // [rsp+C8h] [rbp+20h]

  v131 = -2LL;
  Str = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v127 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v2 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v126 = v2;
  v3 = CAudioEndpointId::ToString(this, &Str);
  if ( v3 < 0 )
    goto LABEL_249;
  v3 = CAppAudioSessionId::ToString((char *)this + 8, &v127);
  if ( v3 < 0 )
    goto LABEL_249;
  v3 = CAppInstanceId::ToString((char *)this + 56, &v126);
  v149 = v3;
  if ( v3 < 0 )
  {
    v2 = v126;
LABEL_249:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 0x403u, v3);
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
      while ( asc_180162FDC[v5] );
      v6 = 0;
      v134 = 0;
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
          v135 = 0;
          v14 = v7;
          v15 = &v7[*((int *)v7 - 4)];
          if ( v7 < v15 )
          {
            do
            {
              v16 = wcsstr(v14, L"|");
              if ( v16 )
              {
                v116 = (int)v12;
                do
                {
                  ++v135;
                  v14 = &v16[v116];
                  v16 = wcsstr(&v16[v116], L"|");
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
            if ( v135 > 0 )
            {
              v117 = Str;
              v118 = *((int *)Str - 4);
              v148 = v118 + v135 * (v13 - v12);
              v119 = v148;
              if ( (int)v148 <= (int)v118 )
                v119 = (unsigned int)v118;
              if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v119)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v119);
                v117 = Str;
              }
              v120 = &v117[v118];
              v130 = v120;
              v121 = v117;
              while ( v121 < v120 )
              {
                v129 = (wchar_t *)(int)v13;
                while ( 1 )
                {
                  v122 = wcsstr(v121, L"|");
                  v123 = v122;
                  if ( !v122 )
                    break;
                  v124 = v122 - Str;
                  v143 = v118 - v124 - v12;
                  v125 = &v122[(int)v12];
                  v121 = &v122[(_QWORD)v129];
                  if ( 2LL * v143 )
                  {
                    if ( !v121 || !v125 )
                    {
                      *(_DWORD *)_o__errno(v124) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v122[(_QWORD)v129], v125, 2LL * v143);
                  }
                  if ( 2LL * (int)v13 )
                    memcpy_0(v123, L"%b", 2LL * (int)v13);
                  v123[(int)v13 + v143] = 0;
                  LODWORD(v118) = v13 - v12 + v118;
                }
                v121 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v121) + 1);
                v120 = v130;
              }
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v148);
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
          while ( asc_180162FDC[v19] );
          v136 = 0;
          v20 = v127;
          v21 = v127;
          v22 = &v127[*((int *)v127 - 4)];
          if ( v127 >= v22 )
            goto LABEL_43;
          do
          {
            v23 = wcsstr(v21, L"%");
            if ( v23 )
            {
              v108 = (int)v18;
              do
              {
                ++v136;
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
          v25 = v136;
          if ( v136 > 0 )
          {
            v86 = v127;
            v87 = *((int *)v127 - 4);
            v141 = v87;
            v88 = v87 + v25 * (v19 - v18);
            v146 = v88;
            if ( v88 <= (int)v87 )
              v89 = (unsigned int)v87;
            else
              v89 = (unsigned int)v88;
            if ( ((1 - *((_DWORD *)v127 - 2)) | (*((_DWORD *)v127 - 3) - (int)v89)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v127, v89);
              v86 = v127;
            }
            v90 = &v86[v87];
            v129 = v90;
            v91 = v86;
            while ( v91 < v90 )
            {
              v130 = (wchar_t *)(int)v19;
              while ( 1 )
              {
                v92 = wcsstr(v91, L"%");
                v93 = v92;
                if ( !v92 )
                  break;
                v109 = v92 - v127;
                v110 = v87 - v109 - v18;
                v111 = &v92[(int)v18];
                v91 = &v92[(_QWORD)v130];
                if ( 2LL * v110 )
                {
                  if ( !v91 || !v111 )
                  {
                    *(_DWORD *)_o__errno(v109) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove_0(&v92[(_QWORD)v130], v111, 2LL * v110);
                }
                if ( 2LL * (int)v19 )
                  memcpy_0(v93, L"%%", 2LL * (int)v19);
                v93[(int)v19 + v110] = 0;
                LODWORD(v87) = v19 - v18 + v141;
                v141 = v87;
              }
              if ( v91 )
              {
                v94 = -1LL;
                do
                  ++v94;
                while ( v91[v94] );
              }
              else
              {
                LODWORD(v94) = 0;
              }
              v91 += (int)v94 + 1;
              v90 = v129;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength(&v127, v146);
          }
        }
        v20 = v127;
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
          v137 = v30;
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
                v30 = v137;
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
              v34 = v127;
              v35 = *((int *)v127 - 4);
              v138 = v35;
              v36 = v35 + v28 * (v27 - v26);
              if ( v36 <= (int)v35 )
                v37 = (unsigned int)v35;
              else
                v37 = (unsigned int)v36;
              if ( ((1 - *((_DWORD *)v127 - 2)) | (*((_DWORD *)v127 - 3) - (int)v37)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v127, v37);
                v34 = v127;
              }
              v38 = &v34[v35];
              v129 = v38;
              v39 = v34;
              while ( v39 < v38 )
              {
                v130 = (wchar_t *)(int)v27;
                while ( 1 )
                {
                  v66 = wcsstr(v39, L"|");
                  v67 = v66;
                  if ( !v66 )
                    break;
                  v69 = v66 - v127;
                  v144 = v138 - v69 - v26;
                  v70 = &v66[(int)v26];
                  v39 = &v66[(_QWORD)v130];
                  if ( 2LL * v144 )
                  {
                    if ( !v39 || !v70 )
                    {
                      *(_DWORD *)_o__errno(v69) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v66[(_QWORD)v130], v70, 2LL * v144);
                  }
                  if ( 2LL * (int)v27 )
                    memcpy_0(v67, L"%b", 2LL * (int)v27);
                  v67[(int)v27 + v144] = 0;
                  v138 += v27 - v26;
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
                v38 = v129;
              }
              if ( v36 < 0 || (v40 = v127, v36 > *((_DWORD *)v127 - 3)) )
                ATL::AtlThrowImpl(-2147024809);
              *((_DWORD *)v127 - 4) = v36;
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
          while ( asc_180162FDC[v42] );
          v139 = 0;
          v43 = v126;
          v44 = v126;
          v45 = &v126[*((int *)v126 - 4)];
          if ( v126 < v45 )
          {
            do
            {
              v46 = wcsstr(v44, L"%");
              if ( v46 )
              {
                v112 = (int)v41;
                do
                {
                  ++v139;
                  v44 = &v46[v112];
                  v46 = wcsstr(&v46[v112], L"%");
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
            v48 = v139;
            if ( v139 > 0 )
            {
              v95 = v126;
              v96 = *((int *)v126 - 4);
              v142 = v96;
              v97 = v96 + v48 * (v42 - v41);
              v147 = v97;
              if ( v97 <= (int)v96 )
                v98 = (unsigned int)v96;
              else
                v98 = (unsigned int)v97;
              if ( ((1 - *((_DWORD *)v126 - 2)) | (*((_DWORD *)v126 - 3) - (int)v98)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v126, v98);
                v95 = v126;
              }
              v99 = &v95[v96];
              v129 = v99;
              v100 = v95;
              while ( v100 < v99 )
              {
                v130 = (wchar_t *)(int)v42;
                while ( 1 )
                {
                  v101 = wcsstr(v100, L"%");
                  v102 = v101;
                  if ( !v101 )
                    break;
                  v113 = v101 - v126;
                  v114 = v96 - v113 - v41;
                  v115 = &v101[(int)v41];
                  v100 = &v101[(_QWORD)v130];
                  if ( 2LL * v114 )
                  {
                    if ( !v100 || !v115 )
                    {
                      *(_DWORD *)_o__errno(v113) = 22;
                      invalid_parameter_noinfo();
                      ATL::AtlThrowImpl(-2147024809);
                    }
                    memmove_0(&v101[(_QWORD)v130], v115, 2LL * v114);
                  }
                  if ( 2LL * (int)v42 )
                    memcpy_0(v102, L"%%", 2LL * (int)v42);
                  v102[(int)v42 + v114] = 0;
                  LODWORD(v96) = v42 - v41 + v142;
                  v142 = v96;
                }
                if ( v100 )
                {
                  v103 = -1LL;
                  do
                    ++v103;
                  while ( v100[v103] );
                }
                else
                {
                  LODWORD(v103) = 0;
                }
                v100 += (int)v103 + 1;
                v99 = v129;
              }
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v126, v147);
              v43 = v126;
            }
            else
            {
              v43 = v126;
            }
          }
        }
        else
        {
          v43 = v126;
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
              v57 = v126;
              v58 = *((int *)v126 - 4);
              v140 = v58;
              v59 = v58 + v51 * (v50 - v49);
              if ( (int)v59 <= (int)v58 )
                v60 = (unsigned int)v58;
              else
                v60 = v59;
              if ( ((1 - *((_DWORD *)v126 - 2)) | (*((_DWORD *)v126 - 3) - (int)v60)) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v126, v60);
                v57 = v126;
              }
              v61 = &v57[v58];
              v130 = v61;
              v62 = v57;
              while ( v62 < v61 )
              {
                while ( 1 )
                {
                  v63 = wcsstr(v62, L"|");
                  v64 = v63;
                  if ( !v63 )
                    break;
                  v71 = v63 - v126;
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
                  LODWORD(v58) = v50 - v49 + v140;
                  v140 = v58;
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
                v61 = v130;
              }
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v126, v59);
            }
          }
        }
        v2 = v126;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          (char *)this + 72,
          L"%s|%s|%s",
          Str,
          v127,
          v126);
        goto LABEL_252;
      }
      do
      {
        v10 = wcsstr(v8, L"%");
        if ( v10 )
        {
          v104 = (int)v4;
          do
          {
            v134 = ++v6;
            v8 = &v10[v104];
            v10 = wcsstr(&v10[v104], L"%");
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
        v145 = v78;
        v79 = v78 + v134 * (v5 - v4);
        if ( (int)v79 <= (int)v78 )
          v80 = (unsigned int)v78;
        else
          v80 = v79;
        if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v80)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v80);
          v77 = Str;
        }
        v81 = &v77[v78];
        v129 = v81;
        v82 = v77;
        while ( v82 < v81 )
        {
          while ( 1 )
          {
            v83 = wcsstr(v82, L"%");
            v84 = v83;
            if ( !v83 )
              break;
            v105 = v83 - Str;
            v106 = v78 - v105 - v4;
            v107 = &v83[(int)v4];
            v82 = &v83[(int)v5];
            if ( 2LL * v106 )
            {
              if ( !v82 || !v107 )
              {
                *(_DWORD *)_o__errno(v105) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v83[(int)v5], v107, 2LL * v106);
            }
            if ( 2LL * (int)v5 )
              memcpy_0(v84, L"%%", 2LL * (int)v5);
            v84[(int)v5 + v106] = 0;
            LODWORD(v78) = v5 - v4 + v145;
            v145 = v78;
          }
          if ( v82 )
          {
            v85 = -1LL;
            do
              ++v85;
            while ( v82[v85] );
          }
          else
          {
            LODWORD(v85) = 0;
          }
          v82 += (int)v85 + 1;
          v81 = v129;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v79);
      }
    }
    v7 = Str;
    goto LABEL_18;
  }
  catch ( ATL::CAtlException *v132 )
  {
    v3 = *(_DWORD *)v132;
    v2 = v126;
    goto LABEL_128;
  }
LABEL_252:
  v3 = v149;
LABEL_128:
  if ( v3 < 0 )
    goto LABEL_249;
LABEL_129:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3));
  v74 = v127 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v127 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v74 + 8LL))(*(_QWORD *)v74);
  v75 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v75 + 8LL))(*(_QWORD *)v75);
  return (unsigned int)v3;
}
