/*
 * XREFs of xxxSetNCFonts @ 0x1C013D3B0
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C013D004 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0090888 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     _GetTextMetricsW @ 0x1C0107DCC (_GetTextMetricsW.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C013CBA0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C013D380 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C013DDEC (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C013DED4 (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C013E09C (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1C013E3A8 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  HDC v3; // rdi
  __int64 SessionDpiServerInfo; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 SessionDpiMetrics; // r15
  __int64 v9; // rsi
  _DWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r13d
  int v17; // ebx
  __int64 DPIServerInfo; // rax
  __m128i v19; // xmm2
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int64 v22; // rbx
  _DWORD *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r13d
  int v30; // ebx
  __int64 v31; // rax
  __m128i v32; // xmm2
  __int64 v33; // xmm1_8
  __int128 v34; // xmm0
  struct _UNICODE_STRING *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r13d
  int v43; // ebx
  __int64 v44; // rax
  __m128i v45; // xmm2
  __int64 v46; // xmm1_8
  __int128 v47; // xmm0
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r13d
  int v54; // ebx
  __int64 v55; // rax
  __m128i v56; // xmm2
  __int64 v57; // xmm1_8
  __int128 v58; // xmm0
  struct _UNICODE_STRING *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // r12d
  int v71; // ebx
  __int64 v72; // rax
  __m128i v73; // xmm2
  __int64 v74; // xmm1_8
  __int128 v75; // xmm0
  int v76; // ecx
  int v77; // edx
  int v78; // eax
  int v79; // ebx
  int *v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // r13d
  int v87; // ebx
  __int64 v88; // rax
  __m128i v89; // xmm2
  __int64 v90; // xmm1_8
  __int128 v91; // xmm0
  int v92; // ecx
  int v93; // edx
  int v94; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v96; // rcx
  LONG lfWeight; // eax
  struct HLFONT__ *v98; // rcx
  LONG v99; // eax
  __int64 FontIndirectW; // rax
  struct _UNICODE_STRING *v101; // rbx
  __int64 v102; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v104; // edx
  __int128 v105; // xmm3
  __int128 v106; // xmm4
  __int128 v107; // xmm5
  __int128 v108; // xmm6
  __int64 v109; // xmm0_8
  struct tagSIZE v111; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v112[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING *v114; // [rsp+88h] [rbp-80h]
  __int64 v115; // [rsp+90h] [rbp-78h]
  __int64 v116; // [rsp+98h] [rbp-70h]
  __int64 v117; // [rsp+A0h] [rbp-68h]
  struct tagLOGFONTW v118; // [rsp+A8h] [rbp-60h] BYREF

  v114 = a1;
  memset(&v118, 0, sizeof(v118));
  v3 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v116 = SessionDpiServerInfo;
  v115 = Get96DpiServerInfo(v6, v5, v7);
  SessionDpiMetrics = GetSessionDpiMetrics();
  v9 = Get96DpiMetrics();
  v113 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(v114, v113, 139LL, SessionDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiServerInfo + 8)) )
  {
    return 0LL;
  }
  v117 = GreSelectFont(v3);
  v10 = (_DWORD *)(SessionDpiServerInfo + 20);
  memset(v112, 0, 0x3CuLL);
  v16 = GreTextInitialized(v12, v11);
  if ( v16 && (unsigned int)GetTextMetricsW(v3, (__int64)v112) )
  {
    v17 = DWORD1(v112[1]);
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo(v14, v13, v15);
    v19 = *(__m128i *)(DPIServerInfo + 56);
    v20 = *(_QWORD *)(DPIServerInfo + 88);
    v112[0] = *(_OWORD *)(DPIServerInfo + 40);
    v21 = *(_OWORD *)(DPIServerInfo + 72);
    DWORD2(v112[3]) = *(_DWORD *)(DPIServerInfo + 96);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
    v112[2] = v21;
    if ( !v19.m128i_i32[1] )
      v17 = 8;
    *(_QWORD *)&v112[3] = v20;
  }
  if ( v10 )
    *v10 = v112[0];
  if ( v16 )
  {
    if ( (BYTE7(v112[3]) & 1) != 0 )
    {
      v111 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v111, 1) )
        v17 = (int)(((int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 31))
            / 2;
    }
  }
  *(_DWORD *)(v116 + 16) = v17;
  v22 = v115;
  GreSelectFont(v3);
  v23 = (_DWORD *)(v22 + 20);
  memset(v112, 0, 0x3CuLL);
  v29 = GreTextInitialized(v25, v24);
  if ( v29 && (unsigned int)GetTextMetricsW(v3, (__int64)v112) )
  {
    v30 = DWORD1(v112[1]);
  }
  else
  {
    v31 = GetDPIServerInfo(v27, v26, v28);
    v32 = *(__m128i *)(v31 + 56);
    v33 = *(_QWORD *)(v31 + 88);
    v112[0] = *(_OWORD *)(v31 + 40);
    v34 = *(_OWORD *)(v31 + 72);
    DWORD2(v112[3]) = *(_DWORD *)(v31 + 96);
    v30 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 4));
    v112[2] = v34;
    if ( !v32.m128i_i32[1] )
      v30 = 8;
    *(_QWORD *)&v112[3] = v33;
  }
  if ( v23 )
    *v23 = v112[0];
  if ( v29 )
  {
    if ( (BYTE7(v112[3]) & 1) != 0 )
    {
      v111 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v111, 1) )
        v30 = (int)(((int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 31))
            / 2;
    }
  }
  v35 = v114;
  *(_DWORD *)(v115 + 16) = v30;
  v36 = a2 + 124;
  if ( !a2 )
    v36 = v113;
  v113 = v36;
  if ( !(unsigned int)UserSetFont(v35, v36, 142LL, SessionDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 32)) )
  {
    return 0LL;
  }
  GreSelectFont(v3);
  memset(v112, 0, 0x3CuLL);
  v42 = GreTextInitialized(v38, v37);
  if ( v42 && (unsigned int)GetTextMetricsW(v3, (__int64)v112) )
  {
    v43 = DWORD1(v112[1]);
  }
  else
  {
    v44 = GetDPIServerInfo(v40, v39, v41);
    v45 = *(__m128i *)(v44 + 56);
    v46 = *(_QWORD *)(v44 + 88);
    v112[0] = *(_OWORD *)(v44 + 40);
    v47 = *(_OWORD *)(v44 + 72);
    DWORD2(v112[3]) = *(_DWORD *)(v44 + 96);
    v43 = _mm_cvtsi128_si32(_mm_srli_si128(v45, 4));
    v112[2] = v47;
    if ( !v45.m128i_i32[1] )
      v43 = 8;
    *(_QWORD *)&v112[3] = v46;
  }
  if ( SessionDpiMetrics != -44 )
    *(_DWORD *)(SessionDpiMetrics + 44) = v112[0];
  if ( v42 )
  {
    if ( (BYTE7(v112[3]) & 1) != 0 )
    {
      v111 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v111, 1) )
        v43 = (int)(((int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 31))
            / 2;
    }
  }
  *(_DWORD *)(SessionDpiMetrics + 40) = v43;
  GreSelectFont(v3);
  memset(v112, 0, 0x3CuLL);
  v53 = GreTextInitialized(v49, v48);
  if ( v53 && (unsigned int)GetTextMetricsW(v3, (__int64)v112) )
  {
    v54 = DWORD1(v112[1]);
  }
  else
  {
    v55 = GetDPIServerInfo(v51, v50, v52);
    v56 = *(__m128i *)(v55 + 56);
    v57 = *(_QWORD *)(v55 + 88);
    v112[0] = *(_OWORD *)(v55 + 40);
    v58 = *(_OWORD *)(v55 + 72);
    DWORD2(v112[3]) = *(_DWORD *)(v55 + 96);
    v54 = _mm_cvtsi128_si32(_mm_srli_si128(v56, 4));
    v112[2] = v58;
    if ( !v56.m128i_i32[1] )
      v54 = 8;
    *(_QWORD *)&v112[3] = v57;
  }
  if ( v9 != -44 )
    *(_DWORD *)(v9 + 44) = v112[0];
  if ( v53 )
  {
    if ( (BYTE7(v112[3]) & 1) != 0 )
    {
      v111 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v111, 1) )
        v54 = (int)(((int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 31))
            / 2;
    }
  }
  v59 = v114;
  v60 = a2 + 224;
  *(_DWORD *)(v9 + 40) = v54;
  if ( !a2 )
    v60 = v113;
  v113 = v60;
  if ( !(unsigned int)UserSetFont(v59, v60, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics(v62, v61, v63);
    GreSelectFont(gMenuState[17]);
  }
  GreSelectFont(v3);
  v64 = (int *)(SessionDpiMetrics + 12);
  memset(v112, 0, 0x3CuLL);
  v70 = GreTextInitialized(v66, v65);
  if ( v70 && (unsigned int)GetTextMetricsW(v3, (__int64)v112) )
  {
    v71 = DWORD1(v112[1]);
  }
  else
  {
    v72 = GetDPIServerInfo(v68, v67, v69);
    v73 = *(__m128i *)(v72 + 56);
    v74 = *(_QWORD *)(v72 + 88);
    v112[0] = *(_OWORD *)(v72 + 40);
    v75 = *(_OWORD *)(v72 + 72);
    DWORD2(v112[3]) = *(_DWORD *)(v72 + 96);
    *(_QWORD *)&v112[3] = v74;
    v112[1] = v73;
    v71 = _mm_cvtsi128_si32(_mm_srli_si128(v73, 4));
    v112[2] = v75;
    if ( !v73.m128i_i32[1] )
      v71 = 8;
  }
  if ( SessionDpiMetrics != -12 )
    *v64 = v112[0];
  if ( v70 )
  {
    if ( (BYTE7(v112[3]) & 1) != 0 )
    {
      v111 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v111, 1) )
        v71 = (int)(((int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 31))
            / 2;
    }
  }
  v76 = v112[1];
  v77 = *v64;
  v78 = v112[2];
  *(_DWORD *)(SessionDpiMetrics + 8) = v71;
  *(_DWORD *)(SessionDpiMetrics + 16) = v78;
  *(_DWORD *)(SessionDpiMetrics + 20) = v76;
  v79 = ((_WORD)v77 + (_WORD)v76 + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v77 + v76 + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = DWORD1(v112[0]);
  SetDpiDepSysMet(27LL, (unsigned int)(v79 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v79 - 1));
  GreSelectFont(v3);
  v80 = (int *)(v9 + 12);
  memset(v112, 0, 0x3CuLL);
  v86 = GreTextInitialized(v82, v81);
  if ( !v86 )
    goto LABEL_75;
  if ( (unsigned int)GetTextMetricsW(v3, (__int64)v112) )
  {
    v87 = DWORD1(v112[1]);
  }
  else
  {
LABEL_75:
    v88 = GetDPIServerInfo(v84, v83, v85);
    v89 = *(__m128i *)(v88 + 56);
    v90 = *(_QWORD *)(v88 + 88);
    v112[0] = *(_OWORD *)(v88 + 40);
    v91 = *(_OWORD *)(v88 + 72);
    *(_QWORD *)&v112[3] = v90;
    v112[1] = v89;
    v87 = _mm_cvtsi128_si32(_mm_srli_si128(v89, 4));
    v112[2] = v91;
    if ( !v89.m128i_i32[1] )
      v87 = 8;
  }
  if ( v9 != -12 )
    *v80 = v112[0];
  if ( v86 )
  {
    if ( (BYTE7(v112[3]) & 1) != 0 )
    {
      v111 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v111, 1) )
        v87 = (int)(((int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v111.cx) >> 32) >> 31))
            / 2;
    }
  }
  v92 = v112[1];
  v93 = *v80;
  *(_DWORD *)(v9 + 16) = v112[2];
  *(_DWORD *)(v9 + 20) = v92;
  *(_DWORD *)(v9 + 8) = v87;
  *(_DWORD *)(v9 + 28) = v93 + v92 + 2;
  *(_DWORD *)(v9 + 24) = DWORD1(v112[0]);
  v94 = (((_WORD)v93 + (_WORD)v92 + 1) & 0xFFFE) - 1;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v94;
  GreSelectFont(v3);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v9 + 24);
  v96 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v96 && v96 != *(struct HLFONT__ **)(v116 + 24) )
  {
    GreMarkDeletableFont(v96);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)SessionDpiMetrics, 92LL, (char *)&v118) )
    return 0LL;
  lfWeight = v118.lfWeight;
  if ( v118.lfWeight <= 700 )
    lfWeight = 700;
  v118.lfWeight = lfWeight;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW((__int64)&v118, 0x88u);
  v98 = *(struct HLFONT__ **)(v9 + 48);
  if ( v98 && v98 != *(struct HLFONT__ **)(v115 + 24) )
  {
    GreMarkDeletableFont(v98);
    GreDeleteObject(*(_QWORD *)(v9 + 48));
    *(_QWORD *)(v9 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v9, 92LL, (char *)&v118) )
    return 0LL;
  v99 = v118.lfWeight;
  if ( v118.lfWeight <= 700 )
    v99 = 700;
  v118.lfWeight = v99;
  FontIndirectW = GreCreateFontIndirectW((__int64)&v118, 0x88u);
  v101 = v114;
  v102 = a2 + 316;
  *(_QWORD *)(v9 + 48) = FontIndirectW;
  if ( !a2 )
    v102 = v113;
  if ( !(unsigned int)UserSetFont(v101, v102, 156LL, SessionDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 56)) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(gpsi + 5020LL) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(gpsi + 5036LL) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(gpsi + 5052LL) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(gpsi + 5068LL) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(gpsi + 5084LL) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(gpsi + 5092LL) = *(_DWORD *)(a2 + 496);
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v118, v101, 0x9Du);
    v104 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v105 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v106 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v107 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v108 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v109 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v105;
    *(_OWORD *)(gpsi + 5036LL) = v106;
    *(_OWORD *)(gpsi + 5052LL) = v107;
    *(_OWORD *)(gpsi + 5068LL) = v108;
    *(_QWORD *)(gpsi + 5084LL) = v109;
    *(_DWORD *)(gpsi + 5092LL) = v104;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
