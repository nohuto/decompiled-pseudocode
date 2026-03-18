/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x1801E0F28
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180145698 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_180308258 )
  {
    if ( *(_DWORD *)qword_180308258 == 1 && !dword_180308278 )
    {
      ReleaseInterface<CDisplaySet const>(&qword_180308258);
LABEL_7:
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_180308260);
    }
  }
  else if ( qword_180308260 && !dword_180308278 )
  {
    goto LABEL_7;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
