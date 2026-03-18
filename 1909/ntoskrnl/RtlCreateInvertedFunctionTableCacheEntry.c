/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x140A149A0
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A14554 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001B800 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14017E7A8 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(unsigned __int64 a1, int a2)
{
  int v3; // edi
  PVOID v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v8 = 0uLL;
  v9 = 0LL;
  if ( a1 >= *((_QWORD *)&xmmword_140589020 + 1)
    && a1 < *((_QWORD *)&xmmword_140589020 + 1) + (unsigned __int64)(unsigned int)qword_140589030 )
  {
    v5 = (PVOID)xmmword_140589020;
    v8 = xmmword_140589020;
    v9 = qword_140589030;
  }
  else
  {
    v5 = RtlpxLookupFunctionTable(a1, (__int64)&v8);
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v8 + 1);
    v3 = HIDWORD(v9);
  }
  else
  {
    v6 = v10;
  }
  *(_QWORD *)&xmmword_140589020 = v5;
  HIDWORD(qword_140589030) = v3;
  *((_QWORD *)&xmmword_140589020 + 1) = v6;
  LODWORD(qword_140589030) = a2;
  return RtlRemoveInvertedFunctionTable(a1);
}
