/*
 * XREFs of ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x18003AE0C
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180014770 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180035C60 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampPkgFindOrInsertApplication(
        struct _HAM_PACKAGE *a1,
        struct _HAM_APPLICATION *a2,
        struct _HAM_APPLICATION **a3)
{
  struct _HAM_APPLICATION *v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h]
  struct _HAM_APPLICATION *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  CemRcTableFindOrInsertEx(
    (__int64)a1 + 40,
    (__int64)a2 + 96,
    (__int64 (__fastcall *)(__int64, unsigned __int64))HampAppCompareByIdentity,
    (unsigned __int64)a2,
    v5,
    (unsigned __int64 *)&v6);
  if ( v6 != v3 )
    v3 = v6;
  *a3 = v3;
}
