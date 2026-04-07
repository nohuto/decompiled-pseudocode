/*
 * XREFs of ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800401EC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DFD0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180032F40 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowClientContentRectChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  const struct tagRECT *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  void *v15; // [rsp+28h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = a5;
  v10 = 0;
  if ( a4 || a5 )
  {
    v11 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4Au, v15);
    }
    else
    {
      if ( a4 )
      {
        v12 = (unsigned int)v17;
        *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v17) + 120LL) = *a4;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v12) + 40LL) |= 8u;
      }
      if ( v9 )
      {
        v13 = (unsigned int)v17;
        *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v17) + 136LL) = *v9;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v13) + 40LL) |= 0x10u;
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v10;
}
