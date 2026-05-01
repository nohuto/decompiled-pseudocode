/*
 * XREFs of ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000A044
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800148B4 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x18000A1B8 (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKG.c)
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
    *((_DWORD *)a1 + 90) = v3;
    HampPkgReleaseLockExclusive(a1);
    RtlWakeAddressAll((char *)a1 + 340);
    return 0;
  }
  return result;
}
