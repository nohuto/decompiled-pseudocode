/*
 * XREFs of ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800156B8
 * Callers:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180004504 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180015630 (-HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015730 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampPkgInfoInitialize(const unsigned __int16 *a1, PSID SourceSid, int a3, struct _HAM_PACKAGE_INFO *a4)
{
  memset_0(a4, 0, 0xCCuLL);
  StringCchCopyW((unsigned __int16 *)a4, 0x41uLL, a1);
  RtlCopySid(0x44u, (char *)a4 + 132, SourceSid);
  *((_DWORD *)a4 + 50) = a3;
}
