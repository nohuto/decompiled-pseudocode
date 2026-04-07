/*
 * XREFs of ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022BF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_0ed26c2d60f45c7a306e72635e386859___ @ 0x18004B068 (CWindowList--ForEachSoftwareCursorListener__lambda_0ed26c2d60f45c7a306e72635e386859___.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18004B0C0 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::IsCursorChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  char v6; // al
  CVisual *v7; // rcx
  void *v9; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v11; // [rsp+60h] [rbp+18h] BYREF
  struct CWindowData **v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1AFCu, v9);
  }
  else if ( v11 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 368LL))(a2);
    *((_BYTE *)v11 + 608) ^= (v6 ^ *((_BYTE *)v11 + 608)) & 1;
    v7 = (CVisual *)*((_QWORD *)v11 + 50);
    if ( v7 )
    {
      CVisual::SetIsCursor(v7, *((_BYTE *)v11 + 608) & 1);
      wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
      v12 = &v11;
      CWindowList::ForEachSoftwareCursorListener__lambda_0ed26c2d60f45c7a306e72635e386859___(this, &v12);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
