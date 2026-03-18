/*
 * XREFs of xxxSetNCFonts @ 0x1C00BF664
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00BF2F4 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C007DE28 (GreCreateFontIndirectW.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00BEEB0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00BF634 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C00BFB38 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C00BFC0C (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00BFDA0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1C00BFFF8 (GreMarkDeletableFont.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  HDC v4; // r15
  __int64 SessionDpiServerInfo; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 SessionDpiMetrics; // r14
  __int64 v14; // rsi
  __int64 v15; // rbx
  int CharDimensionsInternal; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  LONG lfWeight; // ecx
  int v23; // edx
  int v24; // ebx
  int v25; // eax
  LONG v26; // ecx
  int v27; // edx
  int v28; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v30; // rcx
  LONG v31; // eax
  struct HLFONT__ *v32; // rcx
  LONG v33; // eax
  __int64 v34; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v36; // edx
  __int128 v37; // xmm3
  __int128 v38; // xmm4
  __int128 v39; // xmm5
  __int128 v40; // xmm6
  __int64 v41; // xmm0_8
  __int64 v43; // [rsp+28h] [rbp-79h]
  __int64 v44; // [rsp+28h] [rbp-79h]
  struct tagLOGFONTW v46; // [rsp+48h] [rbp-59h] BYREF

  v4 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo(gpDispInfo, a2, a3);
  v9 = Get96DpiServerInfo(v7, v6, v8);
  SessionDpiMetrics = GetSessionDpiMetrics(v11, v10, v12);
  v14 = Get96DpiMetrics();
  v15 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v15, 139LL, SessionDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiServerInfo + 8), v9 + 8) )
  {
    return 0LL;
  }
  GreSelectFont(v4);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensionsInternal(
                                             v4,
                                             0LL,
                                             (int *)(SessionDpiServerInfo + 20),
                                             gbGreTextReady);
  GreSelectFont(v4);
  CharDimensionsInternal = GetCharDimensionsInternal(v4, 0LL, (int *)(v9 + 20), gbGreTextReady);
  v17 = a2 + 124;
  *(_DWORD *)(v9 + 16) = CharDimensionsInternal;
  if ( !a2 )
    v17 = v15;
  v43 = v17;
  if ( !(unsigned int)UserSetFont(a1, v17, 142LL, SessionDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 32), v14 + 32) )
  {
    return 0LL;
  }
  GreSelectFont(v4);
  *(_DWORD *)(SessionDpiMetrics + 40) = GetCharDimensionsInternal(
                                          v4,
                                          0LL,
                                          (int *)(SessionDpiMetrics + 44),
                                          gbGreTextReady);
  GreSelectFont(v4);
  *(_DWORD *)(v14 + 40) = GetCharDimensionsInternal(v4, 0LL, (int *)(v14 + 44), gbGreTextReady);
  v18 = a2 + 224;
  if ( !a2 )
    v18 = v43;
  v44 = v18;
  if ( !(unsigned int)UserSetFont(a1, v18, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics, v14) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics(v20, v19);
    GreSelectFont(gMenuState[17]);
  }
  GreSelectFont(v4);
  v21 = GetCharDimensionsInternal(v4, (struct tagTEXTMETRICW *)&v46, (int *)(SessionDpiMetrics + 12), gbGreTextReady);
  lfWeight = v46.lfWeight;
  v23 = *(_DWORD *)(SessionDpiMetrics + 12);
  *(_DWORD *)(SessionDpiMetrics + 8) = v21;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v46.lfFaceName[2];
  *(_DWORD *)(SessionDpiMetrics + 20) = lfWeight;
  v24 = ((_WORD)v23 + (_WORD)lfWeight + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v23 + lfWeight + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = v46.lfWidth;
  SetDpiDepSysMet(27LL, (unsigned int)(v24 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v24 - 1));
  GreSelectFont(v4);
  v25 = GetCharDimensionsInternal(v4, (struct tagTEXTMETRICW *)&v46, (int *)(v14 + 12), gbGreTextReady);
  v26 = v46.lfWeight;
  v27 = *(_DWORD *)(v14 + 12);
  *(_DWORD *)(v14 + 8) = v25;
  *(_DWORD *)(v14 + 16) = *(_DWORD *)&v46.lfFaceName[2];
  *(_DWORD *)(v14 + 20) = v26;
  *(_DWORD *)(v14 + 28) = v27 + v26 + 2;
  v28 = (((_WORD)v27 + (_WORD)v26 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v14 + 24) = v46.lfWidth;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v28;
  GreSelectFont(v4);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v14 + 24);
  v30 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v30 && v30 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v30);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HSURF *)SessionDpiMetrics, 92LL, (char *)&v46) )
    return 0LL;
  v31 = v46.lfWeight;
  if ( v46.lfWeight <= 700 )
    v31 = 700;
  v46.lfWeight = v31;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW((__int64)&v46, 0x88u);
  v32 = *(struct HLFONT__ **)(v14 + 48);
  if ( v32 && v32 != *(struct HLFONT__ **)(v9 + 24) )
  {
    GreMarkDeletableFont(v32);
    GreDeleteObject(*(_QWORD *)(v14 + 48));
    *(_QWORD *)(v14 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HSURF *)v14, 92LL, (char *)&v46) )
    return 0LL;
  v33 = v46.lfWeight;
  if ( v46.lfWeight <= 700 )
    v33 = 700;
  v46.lfWeight = v33;
  *(_QWORD *)(v14 + 48) = GreCreateFontIndirectW((__int64)&v46, 0x88u);
  v34 = a2 + 316;
  if ( !a2 )
    v34 = v44;
  if ( !(unsigned int)UserSetFont(a1, v34, 156LL, SessionDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 56), v14 + 56) )
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
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v46, a1, 0x9Du);
    v36 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v37 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v38 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v39 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v40 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v41 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v37;
    *(_OWORD *)(gpsi + 5036LL) = v38;
    *(_OWORD *)(gpsi + 5052LL) = v39;
    *(_OWORD *)(gpsi + 5068LL) = v40;
    *(_QWORD *)(gpsi + 5084LL) = v41;
    *(_DWORD *)(gpsi + 5092LL) = v36;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
