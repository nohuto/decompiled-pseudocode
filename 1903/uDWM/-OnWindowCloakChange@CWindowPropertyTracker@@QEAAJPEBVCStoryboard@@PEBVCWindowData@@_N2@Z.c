/*
 * XREFs of ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x18002B768
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x1800101A0 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A508 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18002B820 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowCloakChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        CTopLevelWindow **a3,
        char a4,
        bool a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  CTopLevelWindow *v12; // rcx
  void *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+38h] [rbp-10h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, (const struct CWindowData *)a3, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFu, v14);
  }
  else
  {
    v11 = (unsigned int)v15;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v15) + 100LL) = a4;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 8 * v11) + 156LL) = a5;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v11) + 40LL) |= 1u;
    v12 = a3[50];
    if ( v12 )
      CTopLevelWindow::UpdateAccent(v12, a4 ^ 1);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v10;
}
