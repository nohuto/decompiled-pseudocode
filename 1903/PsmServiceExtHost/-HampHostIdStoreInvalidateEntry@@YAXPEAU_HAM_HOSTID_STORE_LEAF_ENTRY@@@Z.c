/*
 * XREFs of ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18003DC8C
 * Callers:
 *     ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18003DC70 (-HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18007B750 (-HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampHostIdStoreInvalidateEntry(struct _HAM_HOSTID_STORE_LEAF_ENTRY *a1)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v6; // [rsp+50h] [rbp-48h]
  __int64 v7; // [rsp+58h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp-28h] BYREF

  v2 = *((_WORD *)a1 + 304);
  *((_WORD *)a1 + 304) = 1;
  if ( !v2 )
  {
    if ( dword_1800AB2C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
      {
        v7 = v3;
        v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        v6 = (char *)a1 + 88;
        TlgCreateWsz(&pDesc, (LPCWSTR)(v4 + 48));
        TlgCreateWsz(&v9, (LPCWSTR)a1 + 48);
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099DEE, 0LL, 0LL, 5u, &pData);
      }
    }
    CemRcObjectDereference(a1);
  }
}
