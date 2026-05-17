/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800DFC84
 * Callers:
 *     LdrpInitializeExceptionTable @ 0x1800D1760 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800704AC (RtlRemoveInvertedFunctionTable.c)
 */

signed __int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(
        unsigned __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18017A500 + 1)
    || a1 >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
  {
    v7 = RtlpxLookupFunctionTable(a1, (signed __int64)&v10, a3, a4);
  }
  else
  {
    v7 = xmmword_18017A500;
    v10 = xmmword_18017A500;
    v11 = qword_18017A510;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v10 + 1);
    v5 = HIDWORD(v11);
  }
  else
  {
    v8 = v12;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_18017A500 = v7;
  HIDWORD(qword_18017A510) = v5;
  *((_QWORD *)&xmmword_18017A500 + 1) = v8;
  LODWORD(qword_18017A510) = a2;
  RtlRemoveInvertedFunctionTable(a1);
  return LdrProtectMrdata(1);
}
