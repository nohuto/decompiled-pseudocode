/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180020370
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18001BD20 (AudioSessionManagerGetCurrentSession.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800DB734 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800DB808 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800233A0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023450 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180023658 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180040CD8 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memmove_s @ 0x180044954 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180044DE4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C1A88 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800CD2D8 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800CF8DC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
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
  rsize_t v13; // rsi
  wchar_t *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  wchar_t *v17; // rsi
  wchar_t *v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rdi
  wchar_t *v23; // r14
  wchar_t *v24; // rsi
  wchar_t *v25; // r15
  wchar_t *v26; // rcx
  __int64 v27; // rax
  char *v28; // rcx
  wchar_t *v29; // rdx
  int v30; // ebx
  __int64 v32; // rbx
  __int64 v33; // rdi
  wchar_t *v34; // r13
  const wchar_t *v35; // rsi
  wchar_t *v36; // rcx
  __int64 v37; // rax
  int v38; // r12d
  __int64 v39; // rbx
  __int64 v40; // rdi
  const wchar_t *v41; // rsi
  wchar_t *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  wchar_t *v45; // r8
  __int64 v46; // rsi
  unsigned int v47; // r13d
  __int64 v48; // rdx
  wchar_t *v49; // rax
  const wchar_t *v50; // rsi
  wchar_t *v51; // rax
  wchar_t *v52; // r12
  __int64 v53; // rax
  wchar_t *v54; // r9
  __int64 v55; // rsi
  int v56; // r8d
  __int64 v57; // rdx
  wchar_t *v58; // rax
  const wchar_t *v59; // rsi
  wchar_t *v60; // rax
  wchar_t *v61; // r9
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // rax
  _DWORD *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  wchar_t *v68; // rdx
  __int64 v69; // rcx
  wchar_t *v70; // rdx
  HINSTANCE StringResourceInstance; // rax
  wchar_t *v72; // r8
  __int64 v73; // rax
  wchar_t *v74; // r9
  __int64 v75; // rsi
  __int64 v76; // rdx
  wchar_t *v77; // rax
  const wchar_t *v78; // rsi
  wchar_t *v79; // rax
  void *v80; // r9
  __int64 v81; // rcx
  wchar_t *v82; // rdx
  __int64 v83; // r14
  __int64 v84; // r15
  __int64 v85; // rdx
  wchar_t *v86; // rax
  const wchar_t *v87; // rsi
  wchar_t *v88; // rax
  wchar_t *v89; // r14
  __int64 v90; // rcx
  wchar_t *v91; // rdx
  int v92; // [rsp+20h] [rbp-118h]
  int v93; // [rsp+20h] [rbp-118h]
  int v94; // [rsp+20h] [rbp-118h]
  int v95; // [rsp+20h] [rbp-118h]
  int v96; // [rsp+20h] [rbp-118h]
  int v97; // [rsp+20h] [rbp-118h]
  int v98; // [rsp+20h] [rbp-118h]
  wchar_t *Str; // [rsp+28h] [rbp-110h] BYREF
  int v100; // [rsp+30h] [rbp-108h]
  int v101; // [rsp+34h] [rbp-104h]
  wchar_t *v102; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int64 v103; // [rsp+40h] [rbp-F8h]
  __int64 v104; // [rsp+48h] [rbp-F0h]
  wchar_t *v105; // [rsp+50h] [rbp-E8h]
  CAppAudioSessionId *v106; // [rsp+58h] [rbp-E0h]
  __int64 v107; // [rsp+60h] [rbp-D8h]
  BSTR v108; // [rsp+68h] [rbp-D0h]
  ATL::CAtlException *v109; // [rsp+70h] [rbp-C8h] BYREF
  OLECHAR sz[64]; // [rsp+80h] [rbp-B8h] BYREF

  v107 = -2LL;
  try
  {
    v106 = this;
    v2 = *(const void **)this;
    v3 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
    if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
    {
      _InterlockedIncrement(v3 + 4);
    }
    else
    {
      v65 = v3 + 2;
      v66 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
      v3 = (volatile signed __int32 *)v66;
      if ( !v66 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v66 + 8) = *v65;
      memcpy_s((void *const)(v66 + 24), 2LL * (*v65 + 1), v2, 2LL * (*v65 + 1));
    }
    v5 = (wchar_t *)(v3 + 6);
    v102 = (wchar_t *)(v3 + 6);
    if ( !*((_DWORD *)this + 10) )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( SubStr[v32] );
      if ( (_DWORD)v32 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( asc_180162FDC[v33] );
        v94 = 0;
        v34 = &v5[*((int *)v5 - 4)];
        if ( v5 < v34 )
        {
          v35 = v5;
          do
          {
            v36 = wcsstr(v35, L"%");
            if ( v36 )
            {
              v63 = (int)v32;
              do
              {
                ++v94;
                v35 = &v36[v63];
                v36 = wcsstr(&v36[v63], L"%");
              }
              while ( v36 );
            }
            if ( v35 )
            {
              v37 = -1LL;
              do
                ++v37;
              while ( v35[v37] );
            }
            else
            {
              LODWORD(v37) = 0;
            }
            v35 += (int)v37 + 1;
          }
          while ( v35 < v34 );
          v38 = v94;
          if ( v94 > 0 )
          {
            v45 = v102;
            v46 = *((int *)v102 - 4);
            v96 = v46;
            v47 = v46 + v38 * (v33 - v32);
            if ( (int)v47 <= (int)v46 )
              v48 = (unsigned int)v46;
            else
              v48 = v47;
            if ( ((1 - *((_DWORD *)v102 - 2)) | (*((_DWORD *)v102 - 3) - (int)v48)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v102, v48);
              v45 = v102;
            }
            v49 = &v45[v46];
            Str = v49;
            v50 = v45;
            while ( v50 < v49 )
            {
              v103 = (int)v33;
              while ( 1 )
              {
                v51 = wcsstr(v50, L"%");
                v52 = v51;
                if ( !v51 )
                  break;
                v67 = v51 - v102;
                v101 = v96 - v67 - v32;
                v68 = &v51[(int)v32];
                v50 = &v51[v103];
                if ( 2LL * v101 )
                {
                  if ( !v50 || !v68 )
                  {
                    *(_DWORD *)_o__errno(v67) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove_0(&v51[v103], v68, 2LL * v101);
                }
                if ( 2LL * (int)v33 )
                  memcpy_0(v52, L"%%", 2LL * (int)v33);
                v52[(int)v33 + v101] = 0;
                v96 += v33 - v32;
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
              v49 = Str;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength(&v102, v47);
          }
          v5 = v102;
        }
      }
      v39 = -1LL;
      do
        ++v39;
      while ( Control[v39] );
      if ( (_DWORD)v39 )
      {
        v40 = -1LL;
        do
          ++v40;
        while ( aB[v40] );
        v95 = 0;
        v41 = v5;
        Str = &v5[*((int *)v5 - 4)];
        if ( v5 < Str )
        {
          do
          {
            v42 = wcsstr(v41, L"|");
            if ( v42 )
            {
              v64 = 2LL * (int)v39;
              v103 = v64;
              do
              {
                ++v95;
                v41 = (wchar_t *)((char *)v42 + v64);
                v42 = wcsstr((wchar_t *)((char *)v42 + v64), L"|");
                v64 = v103;
              }
              while ( v42 );
            }
            if ( v41 )
            {
              v43 = -1LL;
              do
                ++v43;
              while ( v41[v43] );
            }
            else
            {
              LODWORD(v43) = 0;
            }
            v41 += (int)v43 + 1;
          }
          while ( v41 < Str );
          v44 = v95;
          if ( v95 > 0 )
          {
            v54 = v102;
            v55 = *((int *)v102 - 4);
            v97 = v55;
            v56 = v55 + v44 * (v40 - v39);
            v100 = v56;
            if ( v56 <= (int)v55 )
              v57 = (unsigned int)v55;
            else
              v57 = (unsigned int)v56;
            if ( ((1 - *((_DWORD *)v102 - 2)) | (*((_DWORD *)v102 - 3) - (int)v57)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v102, v57);
              v54 = v102;
            }
            v58 = &v54[v55];
            v104 = (__int64)v58;
            v59 = v54;
            while ( v59 < v58 )
            {
              v103 = (int)v40;
              while ( 1 )
              {
                v60 = wcsstr(v59, L"|");
                v61 = v60;
                Str = v60;
                if ( !v60 )
                  break;
                v69 = v60 - v102;
                v101 = v97 - v69 - v39;
                v70 = &v60[(int)v39];
                v59 = &v60[v103];
                if ( 2LL * v101 )
                {
                  if ( !v59 || !v70 )
                  {
                    *(_DWORD *)_o__errno(v69) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove_0(&v60[v103], v70, 2LL * v101);
                  v61 = Str;
                }
                if ( 2LL * (int)v40 )
                {
                  memcpy_0(v61, L"%b", 2LL * (int)v40);
                  v61 = Str;
                }
                v61[(int)v40 + v101] = 0;
                v97 += v40 - v39;
              }
              if ( v59 )
              {
                v62 = -1LL;
                do
                  ++v62;
                while ( v59[v62] );
              }
              else
              {
                LODWORD(v62) = 0;
              }
              v59 += (int)v62 + 1;
              v58 = (wchar_t *)v104;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength(&v102, (unsigned int)v100);
          }
        }
      }
    }
    StringFromGUID2((const GUID *const)v106 + 1, sz, 64);
    v6 = SysAllocString(sz);
    v108 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
    v9 = (wchar_t *)(v7 + 24);
    Str = (wchar_t *)(v7 + 24);
    if ( (unsigned __int64)v6 < 0x10000 )
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v6, v8);
      if ( StringResourceInstance )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &Str,
          StringResourceInstance,
          (unsigned __int16)v6);
    }
    else
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v6[v10] );
      if ( (_DWORD)v10 )
      {
        v100 = *(_DWORD *)(v7 + 8);
        v11 = v6 - v9;
        v12 = (unsigned int)(1 - *(_DWORD *)(v7 + 16));
        if ( (int)(v12 | (*(_DWORD *)(v7 + 12) - v10)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, (unsigned int)v10);
          v9 = Str;
        }
        if ( v11 <= (unsigned int)v100 )
        {
          v72 = &v9[v11];
          v13 = 2LL * (int)v10;
          memmove_s(v9, v13, v72, v13);
        }
        else
        {
          v13 = 2LL * (int)v10;
          if ( v13 )
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
        }
        if ( (int)v10 < 0 || (v14 = Str, (int)v10 > *((_DWORD *)Str - 3)) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)Str - 4) = v10;
        v14[v13 / 2] = 0;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::Empty(&Str);
      }
    }
    SysFreeString(v6);
    v15 = -1LL;
    do
      ++v15;
    while ( SubStr[v15] );
    if ( (_DWORD)v15 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( asc_180162FDC[v16] );
      v92 = 0;
      v17 = Str;
      v103 = (unsigned __int64)&Str[*((int *)Str - 4)];
      if ( (unsigned __int64)Str < v103 )
      {
        do
        {
          v18 = wcsstr(v17, L"%");
          if ( v18 )
          {
            v73 = 2LL * (int)v15;
            v104 = v73;
            do
            {
              ++v92;
              v17 = (wchar_t *)((char *)v18 + v73);
              v18 = wcsstr((wchar_t *)((char *)v18 + v73), L"%");
              v73 = v104;
            }
            while ( v18 );
          }
          if ( v17 )
          {
            v19 = -1LL;
            do
              ++v19;
            while ( v17[v19] );
          }
          else
          {
            LODWORD(v19) = 0;
          }
          v17 += (int)v19 + 1;
        }
        while ( (unsigned __int64)v17 < v103 );
        v20 = v92;
        if ( v92 > 0 )
        {
          v74 = Str;
          v75 = *((int *)Str - 4);
          v98 = v75;
          v101 = v75 + v20 * (v16 - v15);
          v76 = (unsigned int)v101;
          if ( v101 <= (int)v75 )
            v76 = (unsigned int)v75;
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v76)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v76);
            v74 = Str;
          }
          v77 = &v74[v75];
          v105 = v77;
          v78 = v74;
          while ( v78 < v77 )
          {
            v104 = (int)v16;
            while ( 1 )
            {
              v79 = wcsstr(v78, L"%");
              v80 = v79;
              v103 = (unsigned __int64)v79;
              if ( !v79 )
                break;
              v81 = v79 - Str;
              v100 = v98 - v81 - v15;
              v82 = &v79[(int)v15];
              v78 = &v79[v104];
              if ( 2LL * v100 )
              {
                if ( !v78 || !v82 )
                {
                  *(_DWORD *)_o__errno(v81) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v79[v104], v82, 2LL * v100);
                v80 = (void *)v103;
              }
              if ( 2LL * (int)v16 )
              {
                memcpy_0(v80, L"%%", 2LL * (int)v16);
                v80 = (void *)v103;
              }
              *((_WORD *)v80 + (int)v16 + v100) = 0;
              v98 += v16 - v15;
            }
            v78 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v78) + 1);
            v77 = v105;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, (unsigned int)v101);
        }
      }
    }
    v21 = -1LL;
    do
      ++v21;
    while ( Control[v21] );
    if ( (_DWORD)v21 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( aB[v22] );
      v93 = 0;
      v23 = Str;
      v24 = Str;
      v25 = &Str[*((int *)Str - 4)];
      if ( Str < v25 )
      {
        do
        {
          v26 = wcsstr(v24, L"|");
          if ( v26 )
          {
            v83 = (int)v21;
            do
            {
              ++v93;
              v24 = &v26[v83];
              v26 = wcsstr(&v26[v83], L"|");
            }
            while ( v26 );
          }
          if ( v24 )
          {
            v27 = -1LL;
            do
              ++v27;
            while ( v24[v27] );
          }
          else
          {
            LODWORD(v27) = 0;
          }
          v24 += (int)v27 + 1;
        }
        while ( v24 < v25 );
        v23 = Str;
        if ( v93 > 0 )
        {
          v84 = *((int *)Str - 4);
          v101 = v84 + (v22 - v21) * v93;
          v85 = (unsigned int)v101;
          if ( v101 <= (int)v84 )
            v85 = (unsigned int)v84;
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v85)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v85);
            v23 = Str;
          }
          v86 = &v23[v84];
          v104 = (__int64)v86;
          v87 = v23;
          while ( v87 < v86 )
          {
            v105 = (wchar_t *)(int)v22;
            while ( 1 )
            {
              v88 = wcsstr(v87, L"|");
              v89 = v88;
              if ( !v88 )
                break;
              v90 = v88 - Str;
              v100 = v84 - v90 - v21;
              v91 = &v88[(int)v21];
              v87 = &v88[(_QWORD)v105];
              if ( 2LL * v100 )
              {
                if ( !v87 || !v91 )
                {
                  *(_DWORD *)_o__errno(v90) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v88[(_QWORD)v105], v91, 2LL * v100);
              }
              if ( 2LL * (int)v22 )
                memcpy_0(v89, L"%b", 2LL * (int)v22);
              v89[(int)v22 + v100] = 0;
              LODWORD(v84) = v22 - v21 + v84;
            }
            v87 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v87) + 1);
            v86 = (wchar_t *)v104;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, (unsigned int)v101);
          v23 = Str;
        }
      }
    }
    else
    {
      v23 = Str;
    }
    v28 = (char *)v106 + 32;
    if ( *((_DWORD *)v106 + 10) )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v28,
        L"#|%s",
        v23);
    else
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        v28,
        L"%s|%s",
        v102,
        v23);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v23 - 3) + 8LL))(*((_QWORD *)v23 - 3));
    v29 = v102 - 12;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v102 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
    v30 = 0;
  }
  catch ( ATL::CAtlException *v109 )
  {
    v100 = *(_DWORD *)v109;
    v30 = v100;
  }
  if ( v30 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 0x14Bu, v30);
  return (unsigned int)v30;
}
