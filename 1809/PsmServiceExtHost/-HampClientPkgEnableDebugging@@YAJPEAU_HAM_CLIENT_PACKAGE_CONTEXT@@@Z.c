/*
 * XREFs of ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18006C07C
 * Callers:
 *     ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180066A18 (-HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006BB5C (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgEnableDebugging(struct _HAM_CLIENT_PACKAGE_CONTEXT *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx

  v1 = *((_QWORD *)a1 + 7);
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v1);
  if ( (*((_BYTE *)a1 + 64) & 4) != 0 )
  {
    v3 = -1073741431;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 64) & 2) == 0 && (*(_BYTE *)(v1 + 340) & 2) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 7) + 340LL) |= 2u;
      *((_DWORD *)a1 + 16) |= 2u;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v1);
      HampPkgNotifyDebugModeChanged((struct _HAM_PACKAGE *)v1);
      return 0;
    }
    v3 = -1073700861;
  }
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v1);
  return v3;
}
