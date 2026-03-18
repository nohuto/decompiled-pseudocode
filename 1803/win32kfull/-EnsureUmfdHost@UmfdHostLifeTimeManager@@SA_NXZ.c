/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007DA90
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00BE990 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     UmfdLoadFontFileView @ 0x1C00BEA68 (UmfdLoadFontFileView.c)
 *     cMapRemoteFonts @ 0x1C025B3FC (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C0270A40 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02901F0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007F030 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00815C8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  char v0; // bl
  int v2; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v5,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = 0;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    if ( v5 )
    {
      GreReleasePushLockShared(v5);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    if ( v5 )
    {
      GreReleasePushLockShared(v5);
      KeLeaveCriticalRegion();
    }
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v5,
        (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
      if ( UmfdHostLifeTimeManager::s_Launched )
      {
LABEL_6:
        v0 = 1;
LABEL_7:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
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
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E4621, v3, v4, 2u, &pData);
      goto LABEL_7;
    }
    return 0;
  }
}
