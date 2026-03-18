/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0018B48
 * Callers:
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0132100 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C013D954 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(DXGSESSIONDATA *this)
{
  char *v1; // r8
  bool v2; // zf
  char *v3; // rcx

  v1 = (char *)this + 18528;
  v2 = *((_QWORD *)this + 2317) == (_QWORD)KeGetCurrentThread();
  v3 = (char *)this + 18528;
  if ( v2 )
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
}
