/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002B8C0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180033B50 (AudioSessionManagerGetCurrentSession.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800CD160 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800CD280 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memmove_s @ 0x18000B768 (memmove_s.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800202E8 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18002B5E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18002CF40 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800BEAA8 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800C113C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(CAppAudioSessionId *this)
{
  const void *v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  wchar_t *v5; // rcx
  BSTR v6; // rbx
  __int64 v7; // rax
  unsigned __int16 v8; // dx
  wchar_t *v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  wchar_t *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdi
  wchar_t *v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rdi
  wchar_t *v21; // r14
  wchar_t *v22; // r15
  wchar_t *v23; // rcx
  __int64 v24; // rax
  wchar_t **v25; // rcx
  wchar_t *v26; // rdx
  int v27; // ebx
  __int64 v29; // rbx
  __int64 v30; // rdi
  wchar_t *v31; // r13
  const wchar_t *v32; // rsi
  wchar_t *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rdi
  const wchar_t *v38; // rsi
  wchar_t *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  wchar_t *v42; // r8
  __int64 v43; // rsi
  int v44; // r12d
  signed int v45; // edx
  wchar_t *v46; // rax
  const wchar_t *v47; // rsi
  wchar_t *v48; // rax
  wchar_t *v49; // r13
  wchar_t *v50; // r8
  __int64 v51; // rsi
  signed int v52; // edx
  wchar_t *v53; // rax
  const wchar_t *v54; // rsi
  wchar_t *v55; // rax
  wchar_t *v56; // r9
  __int64 v57; // r12
  __int64 v58; // rax
  _DWORD *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  wchar_t *v63; // rdx
  __int64 v64; // rcx
  wchar_t *v65; // rdx
  HINSTANCE StringResourceInstance; // rax
  __int64 v67; // rax
  wchar_t *v68; // r9
  __int64 v69; // rsi
  signed int v70; // edx
  wchar_t *v71; // rax
  const wchar_t *v72; // rsi
  wchar_t *v73; // rax
  wchar_t *v74; // r9
  __int64 v75; // rcx
  wchar_t *v76; // rdx
  __int64 v77; // r14
  __int64 v78; // r15
  signed int v79; // edx
  wchar_t *v80; // r14
  wchar_t *v81; // rax
  const wchar_t *v82; // rsi
  wchar_t *v83; // rax
  wchar_t *v84; // r14
  __int64 v85; // rcx
  wchar_t *v86; // rdx
  int v87; // [rsp+20h] [rbp-118h]
  int v88; // [rsp+20h] [rbp-118h]
  int v89; // [rsp+20h] [rbp-118h]
  int v90; // [rsp+20h] [rbp-118h]
  int v91; // [rsp+20h] [rbp-118h]
  int v92; // [rsp+20h] [rbp-118h]
  int v93; // [rsp+20h] [rbp-118h]
  wchar_t *Str; // [rsp+28h] [rbp-110h] BYREF
  unsigned int v95; // [rsp+30h] [rbp-108h]
  int v96; // [rsp+34h] [rbp-104h]
  wchar_t *v97; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int64 v98; // [rsp+40h] [rbp-F8h]
  __int64 v99; // [rsp+48h] [rbp-F0h]
  wchar_t *v100; // [rsp+50h] [rbp-E8h]
  CAppAudioSessionId *v101; // [rsp+58h] [rbp-E0h]
  __int64 v102; // [rsp+60h] [rbp-D8h]
  BSTR v103; // [rsp+68h] [rbp-D0h]
  ATL::CAtlException *v104; // [rsp+70h] [rbp-C8h] BYREF
  OLECHAR sz[64]; // [rsp+80h] [rbp-B8h] BYREF

  v102 = -2LL;
  try
  {
    v101 = this;
    v2 = *(const void **)this;
    v3 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
    if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
    {
      _InterlockedIncrement(v3 + 4);
    }
    else
    {
      v59 = v3 + 2;
      v60 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
      v3 = (volatile signed __int32 *)v60;
      if ( !v60 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v61);
      *(_DWORD *)(v60 + 8) = *v59;
      memcpy_s((void *const)(v60 + 24), 2LL * (*v59 + 1), v2, 2LL * (*v59 + 1));
    }
    v5 = (wchar_t *)(v3 + 6);
    v97 = (wchar_t *)(v3 + 6);
    if ( !*((_DWORD *)this + 10) )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( SubStr[v29] );
      if ( (_DWORD)v29 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( asc_18015EFDC[v30] );
        v89 = 0;
        v31 = &v5[*((int *)v5 - 4)];
        if ( v5 < v31 )
        {
          v32 = v5;
          do
          {
            v33 = wcsstr(v32, L"%");
            if ( v33 )
            {
              v57 = (int)v29;
              do
              {
                ++v89;
                v32 = &v33[v57];
                v33 = wcsstr(&v33[v57], L"%");
              }
              while ( v33 );
            }
            if ( v32 )
            {
              v34 = -1LL;
              do
                ++v34;
              while ( v32[v34] );
            }
            else
            {
              LODWORD(v34) = 0;
            }
            v32 += (int)v34 + 1;
          }
          while ( v32 < v31 );
          v35 = v89;
          if ( v89 > 0 )
          {
            v42 = v97;
            v43 = *((int *)v97 - 4);
            v91 = v43;
            v44 = v43 + v35 * (v30 - v29);
            if ( v44 <= (int)v43 )
              v45 = *((_DWORD *)v97 - 4);
            else
              v45 = v43 + v35 * (v30 - v29);
            if ( ((1 - *((_DWORD *)v97 - 2)) | (*((_DWORD *)v97 - 3) - v45)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v97, v45);
              v42 = v97;
            }
            v46 = &v42[v43];
            Str = v46;
            v47 = v42;
            while ( v47 < v46 )
            {
              v98 = (int)v30;
              while ( 1 )
              {
                v48 = wcsstr(v47, L"%");
                v49 = v48;
                if ( !v48 )
                  break;
                v62 = v48 - v97;
                v96 = v91 - v62 - v29;
                v63 = &v48[(int)v29];
                v47 = &v48[v98];
                if ( 2LL * v96 )
                {
                  if ( !v47 || !v63 )
                  {
                    *(_DWORD *)_o__errno(v62) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove_0(&v48[v98], v63, 2LL * v96);
                }
                if ( 2LL * (int)v30 )
                  memcpy_0(v49, L"%%", 2LL * (int)v30);
                v49[(int)v30 + v96] = 0;
                v91 += v30 - v29;
              }
              v47 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v47) + 1);
              v46 = Str;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v97, v44);
          }
          v5 = v97;
        }
      }
      v36 = -1LL;
      do
        ++v36;
      while ( Control[v36] );
      if ( (_DWORD)v36 )
      {
        v37 = -1LL;
        do
          ++v37;
        while ( aB[v37] );
        v90 = 0;
        v38 = v5;
        Str = &v5[*((int *)v5 - 4)];
        if ( v5 < Str )
        {
          do
          {
            v39 = wcsstr(v38, L"|");
            if ( v39 )
            {
              v58 = 2LL * (int)v36;
              v98 = v58;
              do
              {
                ++v90;
                v38 = (wchar_t *)((char *)v39 + v58);
                v39 = wcsstr((wchar_t *)((char *)v39 + v58), L"|");
                v58 = v98;
              }
              while ( v39 );
            }
            if ( v38 )
            {
              v40 = -1LL;
              do
                ++v40;
              while ( v38[v40] );
            }
            else
            {
              LODWORD(v40) = 0;
            }
            v38 += (int)v40 + 1;
          }
          while ( v38 < Str );
          v41 = v90;
          if ( v90 > 0 )
          {
            v50 = v97;
            v51 = *((int *)v97 - 4);
            v92 = v51;
            v52 = v51 + v41 * (v37 - v36);
            v95 = v52;
            if ( v52 <= (int)v51 )
              v52 = v51;
            if ( ((1 - *((_DWORD *)v97 - 2)) | (*((_DWORD *)v97 - 3) - v52)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v97, v52);
              v50 = v97;
            }
            v53 = &v50[v51];
            v99 = (__int64)v53;
            v54 = v50;
            while ( v54 < v53 )
            {
              v98 = (int)v37;
              while ( 1 )
              {
                v55 = wcsstr(v54, L"|");
                v56 = v55;
                Str = v55;
                if ( !v55 )
                  break;
                v64 = v55 - v97;
                v96 = v92 - v64 - v36;
                v65 = &v55[(int)v36];
                v54 = &v55[v98];
                if ( 2LL * v96 )
                {
                  if ( !v54 || !v65 )
                  {
                    *(_DWORD *)_o__errno(v64) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove_0(&v55[v98], v65, 2LL * v96);
                  v56 = Str;
                }
                if ( 2LL * (int)v37 )
                {
                  memcpy_0(v56, L"%b", 2LL * (int)v37);
                  v56 = Str;
                }
                v56[(int)v37 + v96] = 0;
                v92 += v37 - v36;
              }
              v54 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v54) + 1);
              v53 = (wchar_t *)v99;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v97, v95);
          }
        }
      }
    }
    StringFromGUID2((const GUID *const)v101 + 1, sz, 64);
    v6 = SysAllocString(sz);
    v103 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
    v9 = (wchar_t *)(v7 + 24);
    Str = (wchar_t *)(v7 + 24);
    if ( (unsigned __int64)v6 < 0x10000 )
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v6, v8);
      if ( StringResourceInstance )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &Str,
          StringResourceInstance,
          (unsigned __int16)v6);
        v13 = Str;
        goto LABEL_20;
      }
    }
    else
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v6[v10] );
      if ( (_DWORD)v10 )
      {
        v95 = *(_DWORD *)(v7 + 8);
        v11 = v6 - v9;
        if ( ((1 - *(_DWORD *)(v7 + 16)) | (*(_DWORD *)(v7 + 12) - (int)v10)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v10);
          v9 = Str;
        }
        v12 = 2LL * (int)v10;
        if ( v11 <= v95 )
        {
          memmove_s(v9, 2LL * (int)v10, &v9[v11], 2LL * (int)v10);
        }
        else if ( v12 )
        {
          if ( v9 )
          {
            memcpy_0(v9, v6, 2LL * (int)v10);
          }
          else
          {
            *(_DWORD *)_o__errno(v12) = 22;
            invalid_parameter_noinfo();
          }
        }
        if ( (int)v10 < 0 || (v13 = Str, (int)v10 > *((_DWORD *)Str - 3)) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)Str - 4) = v10;
        v13[(int)v10] = 0;
        goto LABEL_20;
      }
      ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&Str);
    }
    v13 = Str;
LABEL_20:
    SysFreeString(v6);
    v14 = -1LL;
    do
      ++v14;
    while ( SubStr[v14] );
    if ( (_DWORD)v14 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( asc_18015EFDC[v15] );
      v87 = 0;
      v98 = (unsigned __int64)&v13[*((int *)Str - 4)];
      if ( (unsigned __int64)v13 < v98 )
      {
        do
        {
          v16 = wcsstr(v13, L"%");
          if ( v16 )
          {
            v67 = 2LL * (int)v14;
            v99 = v67;
            do
            {
              ++v87;
              v13 = (wchar_t *)((char *)v16 + v67);
              v16 = wcsstr((wchar_t *)((char *)v16 + v67), L"%");
              v67 = v99;
            }
            while ( v16 );
          }
          if ( v13 )
          {
            v17 = -1LL;
            do
              ++v17;
            while ( v13[v17] );
          }
          else
          {
            LODWORD(v17) = 0;
          }
          v13 += (int)v17 + 1;
        }
        while ( (unsigned __int64)v13 < v98 );
        v18 = v87;
        if ( v87 > 0 )
        {
          v68 = Str;
          v69 = *((int *)Str - 4);
          v93 = v69;
          v96 = v69 + v18 * (v15 - v14);
          v70 = v96;
          if ( v96 <= (int)v69 )
            v70 = v69;
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v70)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v70);
            v68 = Str;
          }
          v71 = &v68[v69];
          v100 = v71;
          v72 = v68;
          while ( v72 < v71 )
          {
            v99 = (int)v15;
            while ( 1 )
            {
              v73 = wcsstr(v72, L"%");
              v74 = v73;
              v98 = (unsigned __int64)v73;
              if ( !v73 )
                break;
              v75 = v73 - Str;
              v95 = v93 - v75 - v14;
              v76 = &v73[(int)v14];
              v72 = &v73[v99];
              if ( 2LL * (int)v95 )
              {
                if ( !v72 || !v76 )
                {
                  *(_DWORD *)_o__errno(v75) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v73[v99], v76, 2LL * (int)v95);
                v74 = (wchar_t *)v98;
              }
              if ( 2LL * (int)v15 )
              {
                memcpy_0(v74, L"%%", 2LL * (int)v15);
                v74 = (wchar_t *)v98;
              }
              v74[(int)(v15 + v95)] = 0;
              v93 += v15 - v14;
            }
            v72 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v72) + 1);
            v71 = v100;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v96);
        }
      }
      v13 = Str;
    }
    v19 = -1LL;
    do
      ++v19;
    while ( Control[v19] );
    if ( (_DWORD)v19 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( aB[v20] );
      v88 = 0;
      v21 = Str;
      v22 = &v13[*((int *)Str - 4)];
      if ( v13 < v22 )
      {
        do
        {
          v23 = wcsstr(v13, L"|");
          if ( v23 )
          {
            v77 = (int)v19;
            do
            {
              ++v88;
              v13 = &v23[v77];
              v23 = wcsstr(&v23[v77], L"|");
            }
            while ( v23 );
          }
          if ( v13 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( v13[v24] );
          }
          else
          {
            LODWORD(v24) = 0;
          }
          v13 += (int)v24 + 1;
        }
        while ( v13 < v22 );
        if ( v88 > 0 )
        {
          v78 = *((int *)Str - 4);
          v96 = v78 + v88 * (v20 - v19);
          v79 = v96;
          if ( v96 <= (int)v78 )
            v79 = v78;
          v80 = Str;
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - v79)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v79);
            v80 = Str;
          }
          v81 = &v80[v78];
          v99 = (__int64)v81;
          v82 = v80;
          while ( v82 < v81 )
          {
            v100 = (wchar_t *)(int)v20;
            while ( 1 )
            {
              v83 = wcsstr(v82, L"|");
              v84 = v83;
              if ( !v83 )
                break;
              v85 = v83 - Str;
              v95 = v78 - v85 - v19;
              v86 = &v83[(int)v19];
              v82 = &v83[(_QWORD)v100];
              if ( 2LL * (int)v95 )
              {
                if ( !v82 || !v86 )
                {
                  *(_DWORD *)_o__errno(v85) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v83[(_QWORD)v100], v86, 2LL * (int)v95);
              }
              if ( 2LL * (int)v20 )
                memcpy_0(v84, L"%b", 2LL * (int)v20);
              v84[(int)(v20 + v95)] = 0;
              LODWORD(v78) = v20 - v19 + v78;
            }
            v82 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v82) + 1);
            v81 = (wchar_t *)v99;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v96);
        }
        v21 = Str;
      }
    }
    else
    {
      v21 = Str;
    }
    v25 = (wchar_t **)((char *)v101 + 32);
    if ( *((_DWORD *)v101 + 10) )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v25,
        L"#|%s",
        v21);
    else
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v25,
        L"%s|%s",
        v97,
        v21);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v21 - 3) + 8LL))(*((_QWORD *)v21 - 3));
    v26 = v97 - 12;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v97 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26);
    v27 = 0;
  }
  catch ( ATL::CAtlException *v104 )
  {
    v95 = *(_DWORD *)v104;
    v27 = v95;
  }
  if ( v27 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 331, v27);
  return (unsigned int)v27;
}
