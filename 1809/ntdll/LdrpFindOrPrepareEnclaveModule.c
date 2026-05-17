/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800CF658
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CF448 (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x180071EA0 (RtlPrefixUnicodeString.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF100 (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned int v7; // edi
  const void **v9; // rsi
  char v11; // al
  const void **v12; // rcx
  _QWORD *i; // rbx

  v7 = 0;
  v9 = (const void **)a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_1801192E0, a2, 1) )
    {
      if ( a5 == a1[14] || a5 == a1[15] )
        v9 = (const void **)&unk_180119320;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", (__int64)v9, 1);
      v12 = (const void **)&unk_180119320;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (_QWORD *)a1[11]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 11 )
      return (unsigned int)LdrpCreatePendingEnclaveModule(a1, v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString((unsigned __int16 *)v9, i[22], 1) )
      break;
  }
  *a6 = i;
  return v7;
}
