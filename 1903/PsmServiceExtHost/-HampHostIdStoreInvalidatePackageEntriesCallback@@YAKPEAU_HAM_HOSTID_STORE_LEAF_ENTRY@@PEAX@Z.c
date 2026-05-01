/*
 * XREFs of ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18007B750
 * Callers:
 *     <none>
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x18001B0B0 (CempPackageFamilyNameFromPsmKey.c)
 *     ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18003DC8C (-HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostIdStoreInvalidatePackageEntriesCallback(struct _HAM_HOSTID_STORE_LEAF_ENTRY *a1, _QWORD *a2)
{
  struct _HAM_HOSTID_STORE_LEAF_ENTRY *v3; // rdi
  unsigned __int64 v4; // rbx
  wchar_t String1[72]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1;
  v4 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 40;
  if ( v4 == a2[1] )
    goto LABEL_4;
  CempPackageFamilyNameFromPsmKey(v4 + 88, (__int64)String1);
  if ( !_wcsicmp(String1, (const wchar_t *)(*a2 + 96LL)) )
  {
    a2[1] = v4;
    a1 = v3;
LABEL_4:
    HampHostIdStoreInvalidateEntry(a1);
  }
  return 1LL;
}
