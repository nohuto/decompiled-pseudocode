/*
 * XREFs of GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00C22CC
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C57C0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0079C40 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0079C8C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1C00C788C (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 */

__int64 __fastcall GreSfmRegisterLogicalSurfaceForSignaling(HLSURF a1, int a2)
{
  unsigned int v4; // ebx
  SFMLOGICALSURFACE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v6 = 0LL;
    v7 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v6, a1);
    if ( v6 )
      v4 = SFMLOGICALSURFACE::SignalOnDirty(v6, a2);
    else
      v4 = -1073741816;
    SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v6);
  }
  else
  {
    v4 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v4;
}
