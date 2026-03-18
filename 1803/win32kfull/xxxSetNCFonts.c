/*
 * XREFs of xxxSetNCFonts @ 0x1C0054100
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C0053960 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00540D0 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C00545A4 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C005466C (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00547E0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1C0054A2C (GreMarkDeletableFont.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     GreCreateFontIndirectW @ 0x1C00CA7E0 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C00FABFC (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  HDC v4; // r15
  __int64 SessionDpiServerInfo; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 SessionDpiMetrics; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  int CharDimensionsInternal; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  LONG lfWeight; // ecx
  int v22; // edx
  int v23; // eax
  LONG v24; // ecx
  int v25; // edx
  int v26; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v28; // rcx
  LONG v29; // eax
  struct HLFONT__ *v30; // rcx
  LONG v31; // eax
  __int64 v32; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v34; // edx
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int64 v39; // xmm0_8
  __int64 v41; // [rsp+28h] [rbp-79h]
  __int64 v42; // [rsp+28h] [rbp-79h]
  struct tagLOGFONTW v44; // [rsp+48h] [rbp-59h] BYREF

  v4 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo(gpDispInfo, a2, a3);
  v10 = Get96DpiServerInfo(v7, v6, v8, v9);
  SessionDpiMetrics = GetSessionDpiMetrics(v12, v11, v13);
  v15 = Get96DpiMetrics();
  v16 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v16, 139LL, SessionDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiServerInfo + 8), v10 + 8) )
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
  CharDimensionsInternal = GetCharDimensionsInternal(v4, 0LL, (int *)(v10 + 20), gbGreTextReady);
  v18 = a2 + 124;
  *(_DWORD *)(v10 + 16) = CharDimensionsInternal;
  if ( !a2 )
    v18 = v16;
  v41 = v18;
  if ( !(unsigned int)UserSetFont(a1, v18, 142LL, SessionDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 32), v15 + 32) )
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
  *(_DWORD *)(v15 + 40) = GetCharDimensionsInternal(v4, 0LL, (int *)(v15 + 44), gbGreTextReady);
  v19 = a2 + 224;
  if ( !a2 )
    v19 = v41;
  v42 = v19;
  if ( !(unsigned int)UserSetFont(a1, v19, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics, v15) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics();
    GreSelectFont(gMenuState[17]);
  }
  GreSelectFont(v4);
  v20 = GetCharDimensionsInternal(v4, (struct tagTEXTMETRICW *)&v44, (int *)(SessionDpiMetrics + 12), gbGreTextReady);
  lfWeight = v44.lfWeight;
  v22 = *(_DWORD *)(SessionDpiMetrics + 12);
  *(_DWORD *)(SessionDpiMetrics + 8) = v20;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v44.lfFaceName[2];
  *(_DWORD *)(SessionDpiMetrics + 20) = lfWeight;
  *(_DWORD *)(SessionDpiMetrics + 28) = v22 + lfWeight + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = v44.lfWidth;
  SetDpiDepSysMet(27LL);
  SetDpiDepSysMet(28LL);
  GreSelectFont(v4);
  v23 = GetCharDimensionsInternal(v4, (struct tagTEXTMETRICW *)&v44, (int *)(v15 + 12), gbGreTextReady);
  v24 = v44.lfWeight;
  v25 = *(_DWORD *)(v15 + 12);
  *(_DWORD *)(v15 + 8) = v23;
  *(_DWORD *)(v15 + 16) = *(_DWORD *)&v44.lfFaceName[2];
  *(_DWORD *)(v15 + 20) = v24;
  *(_DWORD *)(v15 + 28) = v25 + v24 + 2;
  v26 = (((_WORD)v25 + (_WORD)v24 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v15 + 24) = v44.lfWidth;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v26;
  GreSelectFont(v4);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v15 + 24);
  v28 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v28 && v28 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v28);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)SessionDpiMetrics, 92LL, (char *)&v44) )
    return 0LL;
  v29 = v44.lfWeight;
  if ( v44.lfWeight <= 700 )
    v29 = 700;
  v44.lfWeight = v29;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW(&v44, 136LL);
  v30 = *(struct HLFONT__ **)(v15 + 48);
  if ( v30 && v30 != *(struct HLFONT__ **)(v10 + 24) )
  {
    GreMarkDeletableFont(v30);
    GreDeleteObject(*(_QWORD *)(v15 + 48));
    *(_QWORD *)(v15 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v15, 92LL, (char *)&v44) )
    return 0LL;
  v31 = v44.lfWeight;
  if ( v44.lfWeight <= 700 )
    v31 = 700;
  v44.lfWeight = v31;
  *(_QWORD *)(v15 + 48) = GreCreateFontIndirectW(&v44, 136LL);
  v32 = a2 + 316;
  if ( !a2 )
    v32 = v42;
  if ( !(unsigned int)UserSetFont(a1, v32, 156LL, SessionDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 56), v15 + 56) )
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
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v44, a1, 0x9Du);
    v34 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v35 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v36 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v37 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v38 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v39 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v35;
    *(_OWORD *)(gpsi + 5036LL) = v36;
    *(_OWORD *)(gpsi + 5052LL) = v37;
    *(_OWORD *)(gpsi + 5068LL) = v38;
    *(_QWORD *)(gpsi + 5084LL) = v39;
    *(_DWORD *)(gpsi + 5092LL) = v34;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
