/*
 * XREFs of ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18006D6E4
 * Callers:
 *     ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18006D7C0 (-HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18006D840 (-HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
      {
        v7 = v3;
        v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        v6 = (char *)a1 + 88;
        TlgCreateWsz(&pDesc, (LPCWSTR)(v4 + 48));
        TlgCreateWsz(&v9, (LPCWSTR)a1 + 48);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BEF8, 0LL, 0LL, 5u, &pData);
      }
    }
    CemRcObjectDereference(a1);
  }
}
