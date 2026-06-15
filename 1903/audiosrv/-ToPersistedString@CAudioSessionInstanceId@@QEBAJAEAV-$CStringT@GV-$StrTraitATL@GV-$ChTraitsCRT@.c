/*
 * XREFs of ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18002C84C
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180039588 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004CEAC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE730 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800233A0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023450 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023680 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023740 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180025330 (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180040CD8 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionInstanceId::ToPersistedString(__int64 *a1, wchar_t **a2, int a3)
{
  wchar_t *v5; // rsi
  int v6; // eax
  int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // r15d
  wchar_t *v11; // r12
  wchar_t *v12; // rbx
  wchar_t *v13; // r13
  wchar_t *i; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  int v18; // r14d
  const wchar_t *v19; // rbx
  wchar_t *v20; // r13
  wchar_t *j; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r12
  int v25; // r13d
  wchar_t *v26; // rbx
  wchar_t *v27; // r15
  wchar_t *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  int v32; // r12d
  const wchar_t *v33; // rbx
  wchar_t *v34; // r13
  wchar_t *v35; // rax
  __int64 v36; // rax
  wchar_t *v37; // rbx
  __int64 v39; // r13
  int v40; // edx
  wchar_t *v41; // rax
  const wchar_t *v42; // rbx
  wchar_t *v43; // rax
  wchar_t *v44; // r15
  __int64 v45; // rax
  wchar_t *v46; // r12
  __int64 v47; // r13
  int v48; // edx
  wchar_t *v49; // rax
  const wchar_t *v50; // rbx
  wchar_t *v51; // rax
  wchar_t *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rbx
  int v55; // edx
  wchar_t *v56; // rax
  const wchar_t *v57; // rbx
  wchar_t *v58; // rax
  wchar_t *v59; // r15
  __int64 v60; // rax
  __int64 v61; // r13
  int v62; // edx
  wchar_t *v63; // rax
  const wchar_t *v64; // rbx
  wchar_t *v65; // rax
  wchar_t *v66; // r12
  __int64 v67; // rax
  __int64 v68; // rcx
  int v69; // r12d
  wchar_t *v70; // rdx
  __int64 v71; // rcx
  int v72; // r12d
  wchar_t *v73; // rdx
  __int64 v74; // rcx
  int v75; // r13d
  wchar_t *v76; // rdx
  __int64 v77; // rcx
  int v78; // r13d
  wchar_t *v79; // rdx
  wchar_t *Str; // [rsp+20h] [rbp-68h] BYREF
  wchar_t *v81; // [rsp+28h] [rbp-60h] BYREF
  wchar_t *v82; // [rsp+30h] [rbp-58h]
  wchar_t *v83; // [rsp+38h] [rbp-50h]
  int v84; // [rsp+40h] [rbp-48h]
  wchar_t *v85; // [rsp+48h] [rbp-40h]
  __int64 v86; // [rsp+50h] [rbp-38h]
  ATL::CAtlException *v87; // [rsp+58h] [rbp-30h] BYREF
  wchar_t *v89; // [rsp+A8h] [rbp+20h]
  wchar_t *v90; // [rsp+A8h] [rbp+20h]
  int v91; // [rsp+A8h] [rbp+20h]
  int v92; // [rsp+A8h] [rbp+20h]
  int v93; // [rsp+A8h] [rbp+20h]
  int v94; // [rsp+A8h] [rbp+20h]

  v86 = -2LL;
  Str = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v5 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v81 = v5;
  if ( a3 )
    v6 = CAudioEndpointId::ToMigratedString(a1, (__int64 *)&Str);
  else
    v6 = CAudioEndpointId::ToString((void **)a1, (void **)&Str);
  v7 = v6;
  if ( v6 < 0 )
    goto LABEL_161;
  v7 = CAppAudioSessionId::ToString((__int64)(a1 + 1), (void **)&v81);
  v84 = v7;
  if ( v7 < 0 )
  {
    v5 = v81;
LABEL_161:
    v37 = Str;
LABEL_162:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToPersistedString", 1125, v7);
    goto LABEL_56;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( SubStr[v8] );
  try
  {
    if ( (_DWORD)v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( asc_180162FDC[v9] );
      v10 = 0;
      v11 = Str;
      v12 = Str;
      v13 = &Str[*((int *)Str - 4)];
      if ( Str < v13 )
      {
        do
        {
          for ( i = wcsstr(v12, L"%"); i; i = wcsstr(v12, L"%") )
          {
            ++v10;
            v12 = &i[(int)v8];
          }
          if ( v12 )
          {
            v15 = -1LL;
            do
              ++v15;
            while ( v12[v15] );
          }
          else
          {
            LODWORD(v15) = 0;
          }
          v12 += (int)v15 + 1;
        }
        while ( v12 < v13 );
        v11 = Str;
        if ( v10 > 0 )
        {
          v39 = *((int *)Str - 4);
          v91 = v39 + v10 * (v9 - v8);
          v40 = v91;
          if ( v91 <= (int)v39 )
            v40 = *((_DWORD *)Str - 4);
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v40)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v40);
            v11 = Str;
          }
          v41 = &v11[v39];
          v83 = v41;
          v42 = v11;
          while ( v42 < v41 )
          {
            v82 = (wchar_t *)(int)v9;
            while ( 1 )
            {
              v43 = wcsstr(v42, L"%");
              v44 = v43;
              if ( !v43 )
                break;
              v68 = v43 - v11;
              v69 = v39 - v68 - v8;
              v70 = &v43[(int)v8];
              v42 = &v43[(_QWORD)v82];
              if ( 2LL * v69 )
              {
                if ( !v42 || !v70 )
                {
                  *(_DWORD *)_o__errno(v68) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v43[(_QWORD)v82], v70, 2LL * v69);
              }
              if ( 2LL * (int)v9 )
                memcpy_0(v44, L"%%", 2LL * (int)v9);
              v44[v69 + (int)v9] = 0;
              LODWORD(v39) = v9 - v8 + v39;
              v11 = Str;
            }
            if ( v42 )
            {
              v45 = -1LL;
              do
                ++v45;
              while ( v42[v45] );
            }
            else
            {
              LODWORD(v45) = 0;
            }
            v42 += (int)v45 + 1;
            v41 = v83;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, (unsigned int)v91);
        }
      }
    }
    else
    {
      v11 = Str;
    }
    v16 = -1LL;
    do
      ++v16;
    while ( Control[v16] );
    if ( (_DWORD)v16 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( aB[v17] );
      v18 = 0;
      v19 = v11;
      v20 = &v11[*((int *)v11 - 4)];
      if ( v11 < v20 )
      {
        do
        {
          for ( j = wcsstr(v19, L"|"); j; j = wcsstr(v19, L"|") )
          {
            ++v18;
            v19 = &j[(int)v16];
          }
          if ( v19 )
          {
            v22 = -1LL;
            do
              ++v22;
            while ( v19[v22] );
          }
          else
          {
            LODWORD(v22) = 0;
          }
          v19 += (int)v22 + 1;
        }
        while ( v19 < v20 );
        if ( v18 > 0 )
        {
          v46 = Str;
          v47 = *((int *)Str - 4);
          v92 = v47 + v18 * (v17 - v16);
          v48 = v92;
          if ( v92 <= (int)v47 )
            v48 = *((_DWORD *)Str - 4);
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v48)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v48);
            v46 = Str;
          }
          v49 = &v46[v47];
          v82 = v49;
          v50 = v46;
          while ( v50 < v49 )
          {
            v83 = (wchar_t *)(int)v17;
            while ( 1 )
            {
              v51 = wcsstr(v50, L"|");
              v52 = v51;
              if ( !v51 )
                break;
              v71 = v51 - v46;
              v72 = v47 - v71 - v16;
              v73 = &v51[(int)v16];
              v50 = &v51[(_QWORD)v83];
              if ( 2LL * v72 )
              {
                if ( !v50 || !v73 )
                {
                  *(_DWORD *)_o__errno(v71) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v51[(_QWORD)v83], v73, 2LL * v72);
              }
              if ( 2LL * (int)v17 )
                memcpy_0(v52, L"%b", 2LL * (int)v17);
              v52[v72 + (int)v17] = 0;
              LODWORD(v47) = v17 - v16 + v47;
              v46 = Str;
            }
            if ( v50 )
            {
              v53 = -1LL;
              do
                ++v53;
              while ( v50[v53] );
            }
            else
            {
              LODWORD(v53) = 0;
            }
            v50 += (int)v53 + 1;
            v49 = v82;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, (unsigned int)v92);
        }
      }
    }
    v23 = -1LL;
    do
      ++v23;
    while ( SubStr[v23] );
    if ( (_DWORD)v23 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( asc_180162FDC[v24] );
      v25 = 0;
      v5 = v81;
      v26 = v81;
      v27 = &v81[*((int *)v81 - 4)];
      v89 = v27;
      if ( v81 < v27 )
      {
        do
        {
          v28 = wcsstr(v26, L"%");
          if ( v28 )
          {
            do
            {
              ++v25;
              v26 = &v28[(int)v23];
              v28 = wcsstr(v26, L"%");
            }
            while ( v28 );
            v27 = v89;
          }
          if ( v26 )
          {
            v29 = -1LL;
            do
              ++v29;
            while ( v26[v29] );
          }
          else
          {
            LODWORD(v29) = 0;
          }
          v26 += (int)v29 + 1;
        }
        while ( v26 < v27 );
        if ( v25 > 0 )
        {
          v54 = *((int *)v5 - 4);
          v93 = v54;
          LODWORD(v82) = v54 + v25 * (v24 - v23);
          v55 = (int)v82;
          if ( (int)v82 <= (int)v54 )
            v55 = v54;
          if ( ((1 - *((_DWORD *)v5 - 2)) | (*((_DWORD *)v5 - 3) - v55)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v81, v55);
            v5 = v81;
          }
          v56 = &v5[v54];
          v85 = v56;
          v57 = v5;
          while ( v57 < v56 )
          {
            v83 = (wchar_t *)(int)v24;
            while ( 1 )
            {
              v58 = wcsstr(v57, L"%");
              v59 = v58;
              if ( !v58 )
                break;
              v74 = v58 - v5;
              v75 = v93 - v74 - v23;
              v76 = &v58[(int)v23];
              v57 = &v58[(_QWORD)v83];
              if ( 2LL * v75 )
              {
                if ( !v57 || !v76 )
                {
                  *(_DWORD *)_o__errno(v74) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v58[(_QWORD)v83], v76, 2LL * v75);
              }
              if ( 2LL * (int)v24 )
                memcpy_0(v59, L"%%", 2LL * (int)v24);
              v59[(int)v24 + v75] = 0;
              v93 += v24 - v23;
            }
            if ( v57 )
            {
              v60 = -1LL;
              do
                ++v60;
              while ( v57[v60] );
            }
            else
            {
              LODWORD(v60) = 0;
            }
            v57 += (int)v60 + 1;
            v56 = v85;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&v81, (unsigned int)v82);
        }
      }
    }
    else
    {
      v5 = v81;
    }
    v30 = -1LL;
    do
      ++v30;
    while ( Control[v30] );
    if ( (_DWORD)v30 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( aB[v31] );
      v32 = 0;
      v33 = v5;
      v34 = &v5[*((int *)v5 - 4)];
      v90 = v34;
      if ( v5 < v34 )
      {
        do
        {
          v35 = wcsstr(v33, L"|");
          if ( v35 )
          {
            do
            {
              ++v32;
              v33 = &v35[(int)v30];
              v35 = wcsstr(v33, L"|");
            }
            while ( v35 );
            v34 = v90;
          }
          if ( v33 )
          {
            v36 = -1LL;
            do
              ++v36;
            while ( v33[v36] );
          }
          else
          {
            LODWORD(v36) = 0;
          }
          v33 += (int)v36 + 1;
        }
        while ( v33 < v34 );
        if ( v32 > 0 )
        {
          v61 = *((int *)v5 - 4);
          v94 = v61;
          LODWORD(v82) = v61 + v32 * (v31 - v30);
          v62 = (int)v82;
          if ( (int)v82 <= (int)v61 )
            v62 = v61;
          if ( ((1 - *((_DWORD *)v5 - 2)) | (*((_DWORD *)v5 - 3) - v62)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v81, v62);
            v5 = v81;
          }
          v63 = &v5[v61];
          v83 = v63;
          v64 = v5;
          while ( v64 < v63 )
          {
            v85 = (wchar_t *)(int)v31;
            while ( 1 )
            {
              v65 = wcsstr(v64, L"|");
              v66 = v65;
              if ( !v65 )
                break;
              v77 = v65 - v5;
              v78 = v61 - v77 - v30;
              v79 = &v65[(int)v30];
              v64 = &v65[(_QWORD)v85];
              if ( 2LL * v78 )
              {
                if ( !v64 || !v79 )
                {
                  *(_DWORD *)_o__errno(v77) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v65[(_QWORD)v85], v79, 2LL * v78);
              }
              if ( 2LL * (int)v31 )
                memcpy_0(v66, L"%b", 2LL * (int)v31);
              v66[(int)v31 + v78] = 0;
              LODWORD(v61) = v31 - v30 + v94;
              v94 = v61;
            }
            if ( v64 )
            {
              v67 = -1LL;
              do
                ++v67;
              while ( v64[v67] );
            }
            else
            {
              LODWORD(v67) = 0;
            }
            v64 += (int)v67 + 1;
            v63 = v83;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&v81, (unsigned int)v82);
        }
      }
    }
    v37 = Str;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%s|%s",
      Str,
      v5);
    v7 = v84;
  }
  catch ( ATL::CAtlException *v87 )
  {
    v5 = v81;
    v7 = *(_DWORD *)v87;
    v37 = Str;
  }
  if ( v7 < 0 )
    goto LABEL_162;
LABEL_56:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v37 - 12));
  return (unsigned int)v7;
}
