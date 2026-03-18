/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C01219EC
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C012112C (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     UmfdLoadFontFileView @ 0x1C0121224 (UmfdLoadFontFileView.c)
 *     cMapRemoteFonts @ 0x1C0286E5C (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C02989AC (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C02B3244 (GreMakeFontDir.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02BA5D0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0122B04 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0123C38 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  char v0; // bl
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v3,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = 0;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    if ( v3 )
    {
      GreReleasePushLockShared(v3);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    if ( v3 )
    {
      GreReleasePushLockShared(v3);
      KeLeaveCriticalRegion();
    }
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v3, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
      if ( UmfdHostLifeTimeManager::s_Launched )
      {
LABEL_6:
        v0 = 1;
LABEL_7:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v3);
        return v0;
      }
      KeClearEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
      if ( gpidLogon )
        v2 = PostWinlogonMessage(1033LL, 0LL);
      else
        v2 = -1073741271;
      if ( v2 >= 0 )
      {
        if ( !KeWaitForSingleObject(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, Executive, 0, 0, 0LL)
          && UmfdHostLifeTimeManager::s_UmfdHostProcess )
        {
          goto LABEL_6;
        }
        if ( hProvider <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
          goto LABEL_7;
      }
      else if ( hProvider <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        goto LABEL_7;
      }
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9426, 0LL, 0LL, 2u, &pData);
      goto LABEL_7;
    }
    return 0;
  }
}
