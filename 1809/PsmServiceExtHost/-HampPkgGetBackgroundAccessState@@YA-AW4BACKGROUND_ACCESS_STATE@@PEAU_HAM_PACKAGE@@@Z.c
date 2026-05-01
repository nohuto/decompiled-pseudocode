/*
 * XREFs of ?HampPkgGetBackgroundAccessState@@YA?AW4BACKGROUND_ACCESS_STATE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006B95C
 * Callers:
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z @ 0x18006CC10 (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180003E9C (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010A58 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgGetBackgroundAccessState(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx

  HampPkgAcquireLockShared((struct _HAM_PACKAGE *)a1);
  v2 = *(_DWORD *)(a1 + 360);
  HampPkgReleaseLockShared((struct _HAM_PACKAGE *)a1, v3);
  return v2;
}
