/*
 * XREFs of ?DwmClientShutdown@@YAJXZ @ 0x180085650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18007FB30 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
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
