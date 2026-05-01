/*
 * XREFs of ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000EAC4
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180010ACC (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x18000EB30 (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKG.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

int __fastcall HampPkgQueryBackgroundAccessState(struct _HAM_PACKAGE *a1)
{
  int result; // eax
  int v3; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = HampSessionCheckBackgroundAccessAllowed(
             *(struct _HAM_SESSION **)(*((_QWORD *)a1 + 11) + 160LL),
             (struct _HAM_PACKAGE *)((char *)a1 + 96),
             (enum BACKGROUND_ACCESS_STATE *)&v4);
  if ( result >= 0 )
  {
    HampPkgAcquireLockExclusive(a1);
    v3 = v4;
    *((_DWORD *)a1 + 85) |= 4u;
    *((_DWORD *)a1 + 87) = v3;
    HampPkgReleaseLockExclusive(a1);
    RtlWakeAddressAll((char *)a1 + 340);
    return 0;
  }
  return result;
}
