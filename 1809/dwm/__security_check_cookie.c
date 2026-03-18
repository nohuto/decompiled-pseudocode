/*
 * XREFs of __security_check_cookie @ 0x140002E30
 * Callers:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400021E0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400025B0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002680 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     __GSHandlerCheckCommon @ 0x14000432C (__GSHandlerCheckCommon.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004F68 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     McTemplateU0 @ 0x1400050C0 (McTemplateU0.c)
 *     McTemplateU0q @ 0x140005108 (McTemplateU0q.c)
 *     McTemplateU0qqq @ 0x140005170 (McTemplateU0qqq.c)
 *     ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x1400052B8 (-GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400055C0 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
