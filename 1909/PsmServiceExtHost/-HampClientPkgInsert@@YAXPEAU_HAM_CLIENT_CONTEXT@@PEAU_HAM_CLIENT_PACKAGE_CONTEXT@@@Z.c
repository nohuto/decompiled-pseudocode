/*
 * XREFs of ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18007A2D8
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180079FBC (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180036040 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampClientPkgInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_PACKAGE_CONTEXT *a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h]
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CemRcTableFindOrInsertEx(
    (__int64)a1 + 56,
    (__int64)a2 + 48,
    (int (__fastcall *)(__int64, unsigned __int64, __int64))HampClientPkgCompareByHandle,
    (unsigned __int64)a2,
    v3,
    &v4);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
    __fastfail(0xEu);
}
