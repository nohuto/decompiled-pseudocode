/*
 * XREFs of ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18003BEA4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000C6AC (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001F010 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000CF68 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18002B820 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowPositionChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        struct tagPOINT a3,
        bool *a4)
{
  CAnimationScheduler *v8; // rcx
  int v9; // edi
  __int64 v10; // rsi
  const struct CStoryboard *v12; // r12
  _QWORD *v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  void *v16; // [rsp+28h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+98h] [rbp+20h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v10 = 0LL;
  for ( *a4 = 0; (unsigned int)v10 < *((_DWORD *)this + 10); v10 = (unsigned int)(v10 + 1) )
  {
    v12 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v10);
    if ( CAnimationScheduler::_ShouldTrack(v8, (HWND *)a2, v12, 0) )
    {
      v19 = &CDesktopManager::s_csDwmInstance;
      v13 = (_QWORD *)((char *)this + 48);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v14 = CWindowPropertyTracker::_EnsureRecordExists((CAnimationScheduler *)((char *)this + 48), v12, a2, &v18);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v15 = (unsigned int)v18;
        *(struct tagPOINT *)(*(_QWORD *)(*v13 + 8LL * (unsigned int)v18) + 104LL) = a3;
        *(_DWORD *)(*(_QWORD *)(*v13 + 8 * v15) + 40LL) |= 4u;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x35u, v16);
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
      LOBYTE(v8) = v9 >= 0;
      *a4 |= v9 >= 0;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return (unsigned int)v9;
}
