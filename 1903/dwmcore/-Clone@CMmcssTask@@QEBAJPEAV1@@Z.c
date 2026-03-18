/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800D0AF4
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800E2518 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800D0964 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800D0B88 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800D0BA8 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D0BD4 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800D0CD8 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMmcssTask::Clone(CMmcssTask *this, LPCWCH *a2)
{
  unsigned int v4; // esi
  char IsActive; // al
  CMmcssTask *v6; // rcx
  char v7; // r8
  char v9; // al
  signed int v10; // eax
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)this;
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( CMmcssTask::AreEqualMmTask(*((LPCWCH *)this + 5), a2[5]) )
  {
    CMmcssTask::IsActive((CMmcssTask *)a2);
    IsActive = CMmcssTask::IsActive(this);
    if ( v7 != IsActive )
    {
      if ( CMmcssTask::IsActive(v6) )
        CMmcssTask::Apply((CMmcssTask *)a2, 0);
      else
        CMmcssTask::Revert((CMmcssTask *)a2);
    }
  }
  else
  {
    v9 = CMmcssTask::IsActive(this);
    v10 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)a2, *((const struct DWM_MMTASK **)this + 5), v9);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v4;
}
