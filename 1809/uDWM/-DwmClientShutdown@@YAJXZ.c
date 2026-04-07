/*
 * XREFs of ?DwmClientShutdown@@YAJXZ @ 0x18007EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800793D0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 DwmClientShutdown(void)
{
  int v0; // eax
  int v1; // eax
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v0 = CDesktopManager::NotifyRedirectionShutdown(g_pdmInstance);
  if ( v0 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, 0x62u);
  v1 = DwmRedirectionManagerShutdown();
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x64u);
  if ( g_pdmInstance )
  {
    CBaseObject::Release(g_pdmInstance);
    g_pdmInstance = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
