/*
 * XREFs of xxxSetNCFonts @ 0x1C00E4B34
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00E4788 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     _GetTextMetricsW @ 0x1C003E0A8 (_GetTextMetricsW.c)
 *     GreCreateFontIndirectW @ 0x1C004BB3C (GreCreateFontIndirectW.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00E3E80 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00E4B04 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C00E5570 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C00E5658 (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00E5820 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1C00E5B2C (GreMarkDeletableFont.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  HDC v3; // rdi
  __int64 SessionDpiServerInfo; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 SessionDpiMetrics; // r15
  __int64 *v9; // rbx
  __int64 v10; // rsi
  _DWORD *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r13d
  int v15; // ebx
  __int64 DPIServerInfo; // rax
  __m128i v17; // xmm2
  __int64 v18; // xmm1_8
  __int128 v19; // xmm0
  __int64 v20; // rbx
  _DWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r13d
  int v25; // ebx
  __int64 v26; // rax
  __m128i v27; // xmm2
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  struct _UNICODE_STRING *v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r13d
  int v36; // ebx
  __int64 v37; // rax
  __m128i v38; // xmm2
  __int64 v39; // xmm1_8
  __int128 v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r13d
  int v44; // ebx
  __int64 v45; // rax
  __m128i v46; // xmm2
  __int64 v47; // xmm1_8
  __int128 v48; // xmm0
  struct _UNICODE_STRING *v49; // rcx
  __int64 v50; // rax
  __int64 *DPIMetrics; // rax
  int *v52; // r13
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // r12d
  int v56; // ebx
  __int64 v57; // rax
  __m128i v58; // xmm2
  __int64 v59; // xmm1_8
  __int128 v60; // xmm0
  int v61; // ecx
  int v62; // edx
  int v63; // eax
  int v64; // ebx
  int *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // r13d
  int v69; // ebx
  __int64 v70; // rax
  __m128i v71; // xmm2
  __int64 v72; // xmm1_8
  __int128 v73; // xmm0
  int v74; // ecx
  int v75; // edx
  int v76; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v78; // rcx
  LONG lfWeight; // eax
  struct HLFONT__ *v80; // rcx
  LONG v81; // eax
  __int64 FontIndirectW; // rax
  struct _UNICODE_STRING *v83; // rbx
  __int64 v84; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v86; // edx
  __int128 v87; // xmm3
  __int128 v88; // xmm4
  __int128 v89; // xmm5
  __int128 v90; // xmm6
  __int64 v91; // xmm0_8
  struct _POINTL v93; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v94[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING *v96; // [rsp+88h] [rbp-80h]
  __int64 v97; // [rsp+90h] [rbp-78h]
  __int64 v98; // [rsp+98h] [rbp-70h]
  __int64 v99; // [rsp+A0h] [rbp-68h]
  struct tagLOGFONTW v100; // [rsp+A8h] [rbp-60h] BYREF

  v96 = a1;
  memset(&v100, 0, sizeof(v100));
  v3 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v98 = SessionDpiServerInfo;
  v97 = Get96DpiServerInfo(v6, v5, v7);
  SessionDpiMetrics = GetSessionDpiMetrics();
  v9 = (__int64 *)(SessionDpiServerInfo + 8);
  v10 = Get96DpiMetrics();
  v95 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(v96, v95, 139LL, SessionDpiServerInfo + 8) || !(unsigned int)UserSetAltScaleFont(*v9) )
    return 0LL;
  v99 = GreSelectFont((__int64)v3, *v9);
  v11 = (_DWORD *)(SessionDpiServerInfo + 20);
  memset(v94, 0, 0x3CuLL);
  v14 = GreTextInitialized(v13, v12);
  if ( v14 && (unsigned int)GetTextMetricsW(v3, (__int64)v94) )
  {
    v15 = DWORD1(v94[1]);
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo();
    v17 = *(__m128i *)(DPIServerInfo + 56);
    v18 = *(_QWORD *)(DPIServerInfo + 88);
    v94[0] = *(_OWORD *)(DPIServerInfo + 40);
    v19 = *(_OWORD *)(DPIServerInfo + 72);
    DWORD2(v94[3]) = *(_DWORD *)(DPIServerInfo + 96);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
    v94[2] = v19;
    if ( !v17.m128i_i32[1] )
      v15 = 8;
    *(_QWORD *)&v94[3] = v18;
  }
  if ( v11 )
    *v11 = v94[0];
  if ( v14 )
  {
    if ( (BYTE7(v94[3]) & 1) != 0 )
    {
      v93 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v93, 1) )
        v15 = (int)(((int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 31))
            / 2;
    }
  }
  *(_DWORD *)(v98 + 16) = v15;
  v20 = v97;
  GreSelectFont((__int64)v3, *(_QWORD *)(v97 + 8));
  v21 = (_DWORD *)(v20 + 20);
  memset(v94, 0, 0x3CuLL);
  v24 = GreTextInitialized(v23, v22);
  if ( v24 && (unsigned int)GetTextMetricsW(v3, (__int64)v94) )
  {
    v25 = DWORD1(v94[1]);
  }
  else
  {
    v26 = GetDPIServerInfo();
    v27 = *(__m128i *)(v26 + 56);
    v28 = *(_QWORD *)(v26 + 88);
    v94[0] = *(_OWORD *)(v26 + 40);
    v29 = *(_OWORD *)(v26 + 72);
    DWORD2(v94[3]) = *(_DWORD *)(v26 + 96);
    v25 = _mm_cvtsi128_si32(_mm_srli_si128(v27, 4));
    v94[2] = v29;
    if ( !v27.m128i_i32[1] )
      v25 = 8;
    *(_QWORD *)&v94[3] = v28;
  }
  if ( v21 )
    *v21 = v94[0];
  if ( v24 )
  {
    if ( (BYTE7(v94[3]) & 1) != 0 )
    {
      v93 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v93, 1) )
        v25 = (int)(((int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 31))
            / 2;
    }
  }
  v30 = v96;
  *(_DWORD *)(v97 + 16) = v25;
  v31 = a2 + 124;
  if ( !a2 )
    v31 = v95;
  v32 = (__int64 *)(SessionDpiMetrics + 32);
  v95 = v31;
  if ( !(unsigned int)UserSetFont(v30, v31, 142LL, SessionDpiMetrics + 32) || !(unsigned int)UserSetAltScaleFont(*v32) )
    return 0LL;
  GreSelectFont((__int64)v3, *v32);
  memset(v94, 0, 0x3CuLL);
  v35 = GreTextInitialized(v34, v33);
  if ( v35 && (unsigned int)GetTextMetricsW(v3, (__int64)v94) )
  {
    v36 = DWORD1(v94[1]);
  }
  else
  {
    v37 = GetDPIServerInfo();
    v38 = *(__m128i *)(v37 + 56);
    v39 = *(_QWORD *)(v37 + 88);
    v94[0] = *(_OWORD *)(v37 + 40);
    v40 = *(_OWORD *)(v37 + 72);
    DWORD2(v94[3]) = *(_DWORD *)(v37 + 96);
    v36 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
    v94[2] = v40;
    if ( !v38.m128i_i32[1] )
      v36 = 8;
    *(_QWORD *)&v94[3] = v39;
  }
  if ( SessionDpiMetrics != -44 )
    *(_DWORD *)(SessionDpiMetrics + 44) = v94[0];
  if ( v35 )
  {
    if ( (BYTE7(v94[3]) & 1) != 0 )
    {
      v93 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v93, 1) )
        v36 = (int)(((int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 31))
            / 2;
    }
  }
  *(_DWORD *)(SessionDpiMetrics + 40) = v36;
  GreSelectFont((__int64)v3, *(_QWORD *)(v10 + 32));
  memset(v94, 0, 0x3CuLL);
  v43 = GreTextInitialized(v42, v41);
  if ( v43 && (unsigned int)GetTextMetricsW(v3, (__int64)v94) )
  {
    v44 = DWORD1(v94[1]);
  }
  else
  {
    v45 = GetDPIServerInfo();
    v46 = *(__m128i *)(v45 + 56);
    v47 = *(_QWORD *)(v45 + 88);
    v94[0] = *(_OWORD *)(v45 + 40);
    v48 = *(_OWORD *)(v45 + 72);
    DWORD2(v94[3]) = *(_DWORD *)(v45 + 96);
    v44 = _mm_cvtsi128_si32(_mm_srli_si128(v46, 4));
    v94[2] = v48;
    if ( !v46.m128i_i32[1] )
      v44 = 8;
    *(_QWORD *)&v94[3] = v47;
  }
  if ( v10 != -44 )
    *(_DWORD *)(v10 + 44) = v94[0];
  if ( v43 )
  {
    if ( (BYTE7(v94[3]) & 1) != 0 )
    {
      v93 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v93, 1) )
        v44 = (int)(((int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 31))
            / 2;
    }
  }
  v49 = v96;
  v50 = a2 + 224;
  *(_DWORD *)(v10 + 40) = v44;
  if ( !a2 )
    v50 = v95;
  v95 = v50;
  if ( !(unsigned int)UserSetFont(v49, v50, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    DPIMetrics = (__int64 *)GetDPIMetrics();
    GreSelectFont(gMenuState[17], *DPIMetrics);
  }
  GreSelectFont((__int64)v3, *(_QWORD *)SessionDpiMetrics);
  v52 = (int *)(SessionDpiMetrics + 12);
  memset(v94, 0, 0x3CuLL);
  v55 = GreTextInitialized(v54, v53);
  if ( v55 && (unsigned int)GetTextMetricsW(v3, (__int64)v94) )
  {
    v56 = DWORD1(v94[1]);
  }
  else
  {
    v57 = GetDPIServerInfo();
    v58 = *(__m128i *)(v57 + 56);
    v59 = *(_QWORD *)(v57 + 88);
    v94[0] = *(_OWORD *)(v57 + 40);
    v60 = *(_OWORD *)(v57 + 72);
    DWORD2(v94[3]) = *(_DWORD *)(v57 + 96);
    *(_QWORD *)&v94[3] = v59;
    v94[1] = v58;
    v56 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
    v94[2] = v60;
    if ( !v58.m128i_i32[1] )
      v56 = 8;
  }
  if ( SessionDpiMetrics != -12 )
    *v52 = v94[0];
  if ( v55 )
  {
    if ( (BYTE7(v94[3]) & 1) != 0 )
    {
      v93 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v93, 1) )
        v56 = (int)(((int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 31))
            / 2;
    }
  }
  v61 = v94[1];
  v62 = *v52;
  v63 = v94[2];
  *(_DWORD *)(SessionDpiMetrics + 8) = v56;
  *(_DWORD *)(SessionDpiMetrics + 16) = v63;
  *(_DWORD *)(SessionDpiMetrics + 20) = v61;
  v64 = ((_WORD)v62 + (_WORD)v61 + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v62 + v61 + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = DWORD1(v94[0]);
  SetDpiDepSysMet(27LL, (unsigned int)(v64 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v64 - 1));
  GreSelectFont((__int64)v3, *(_QWORD *)v10);
  v65 = (int *)(v10 + 12);
  memset(v94, 0, 0x3CuLL);
  v68 = GreTextInitialized(v67, v66);
  if ( !v68 )
    goto LABEL_75;
  if ( (unsigned int)GetTextMetricsW(v3, (__int64)v94) )
  {
    v69 = DWORD1(v94[1]);
  }
  else
  {
LABEL_75:
    v70 = GetDPIServerInfo();
    v71 = *(__m128i *)(v70 + 56);
    v72 = *(_QWORD *)(v70 + 88);
    v94[0] = *(_OWORD *)(v70 + 40);
    v73 = *(_OWORD *)(v70 + 72);
    *(_QWORD *)&v94[3] = v72;
    v94[1] = v71;
    v69 = _mm_cvtsi128_si32(_mm_srli_si128(v71, 4));
    v94[2] = v73;
    if ( !v71.m128i_i32[1] )
      v69 = 8;
  }
  if ( v10 != -12 )
    *v65 = v94[0];
  if ( v68 )
  {
    if ( (BYTE7(v94[3]) & 1) != 0 )
    {
      v93 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v3, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v93, 1) )
        v69 = (int)(((int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v93.x) >> 32) >> 31))
            / 2;
    }
  }
  v74 = v94[1];
  v75 = *v65;
  *(_DWORD *)(v10 + 16) = v94[2];
  *(_DWORD *)(v10 + 20) = v74;
  *(_DWORD *)(v10 + 8) = v69;
  *(_DWORD *)(v10 + 28) = v75 + v74 + 2;
  *(_DWORD *)(v10 + 24) = DWORD1(v94[0]);
  v76 = (((_WORD)v75 + (_WORD)v74 + 1) & 0xFFFE) - 1;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v76;
  GreSelectFont((__int64)v3, v99);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v10 + 24);
  v78 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v78 && v78 != *(struct HLFONT__ **)(v98 + 24) )
  {
    GreMarkDeletableFont(v78);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)SessionDpiMetrics, 92LL, (char *)&v100) )
    return 0LL;
  lfWeight = v100.lfWeight;
  if ( v100.lfWeight <= 700 )
    lfWeight = 700;
  v100.lfWeight = lfWeight;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW((__int64)&v100, 0x88u);
  v80 = *(struct HLFONT__ **)(v10 + 48);
  if ( v80 && v80 != *(struct HLFONT__ **)(v97 + 24) )
  {
    GreMarkDeletableFont(v80);
    GreDeleteObject(*(_QWORD *)(v10 + 48));
    *(_QWORD *)(v10 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v10, 92LL, (char *)&v100) )
    return 0LL;
  v81 = v100.lfWeight;
  if ( v100.lfWeight <= 700 )
    v81 = 700;
  v100.lfWeight = v81;
  FontIndirectW = GreCreateFontIndirectW((__int64)&v100, 0x88u);
  v83 = v96;
  v84 = a2 + 316;
  *(_QWORD *)(v10 + 48) = FontIndirectW;
  if ( !a2 )
    v84 = v95;
  if ( !(unsigned int)UserSetFont(v83, v84, 156LL, SessionDpiMetrics + 56)
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
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v100, v83, 0x9Du);
    v86 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v87 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v88 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v89 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v90 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v91 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v87;
    *(_OWORD *)(gpsi + 5036LL) = v88;
    *(_OWORD *)(gpsi + 5052LL) = v89;
    *(_OWORD *)(gpsi + 5068LL) = v90;
    *(_QWORD *)(gpsi + 5084LL) = v91;
    *(_DWORD *)(gpsi + 5092LL) = v86;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
