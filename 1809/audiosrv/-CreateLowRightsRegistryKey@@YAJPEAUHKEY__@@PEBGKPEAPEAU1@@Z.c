/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180007220
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18000706C (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180009AA0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18001F2CC (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800095FC (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180045F14 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800C38D4 (WPP_SF_Sq.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800D5C4C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateLowRightsRegistryKey(HKEY hKey, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  CAudioSessionManager *v11; // rcx
  int v13; // eax
  int v14; // eax
  signed int LastError; // eax
  __int64 v16; // rdx
  PSID Sid; // [rsp+50h] [rbp-20h] BYREF
  struct _SECURITY_ATTRIBUTES v18; // [rsp+58h] [rbp-18h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, a2);
  }
  memset(&v18.nLength + 1, 0, 20);
  v18.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(hKey, &v18.lpSecurityDescriptor);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    v10 = SafeRegCreateKeyEx(hKey, a2, 0, 0LL, 0, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &v18, a4, 0LL);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 > 0 )
        v9 = (unsigned __int16)v10 | 0x80070000;
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v16 = 15LL;
        goto LABEL_43;
      }
    }
    else
    {
      Sid = 0LL;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11,
          (unsigned int)&WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
          (_DWORD)a2,
          (char)*a4);
      }
      if ( ConvertStringSidToSidW(L"LW", &Sid) )
      {
        v13 = SetRegistryKeyIntegrityLevel(*a4, Sid);
        v9 = v13;
        if ( v13 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              12LL,
              &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
              (unsigned int)v13);
          }
          v14 = SetRegistryHandleIntegrityLevel(*a4, Sid);
          v9 = v14;
          if ( v14 < 0
            && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              13LL,
              &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
              (unsigned int)v14);
          }
        }
        if ( Sid )
          LocalFree(Sid);
      }
      else
      {
        LastError = GetLastError();
        v9 = LastError;
        if ( LastError > 0 )
          v9 = (unsigned __int16)LastError | 0x80070000;
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v16 = 14LL;
LABEL_43:
          WPP_SF_d(*((_QWORD *)v11 + 2), v16, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, v9);
        }
      }
    }
  }
  operator delete(v18.lpSecurityDescriptor);
  v18.lpSecurityDescriptor = 0LL;
  if ( (v9 & 0x80000000) != 0 )
  {
    if ( *a4 )
    {
      RegCloseKey(*a4);
      *a4 = 0LL;
    }
    AudSrvTraceLoggingErrorHelper("CreateLowRightsRegistryKey", 0x427u, v9);
  }
  return v9;
}
