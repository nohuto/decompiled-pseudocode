/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800DFC84
 * Callers:
 *     LdrpInitializeExceptionTable @ 0x1800D1760 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800704AC (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlCreateInvertedFunctionTableCacheEntry(unsigned __int64 BaseAddress, int a2, char *a3, char *a4)
{
  int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( BaseAddress < *((_QWORD *)&xmmword_18017A500 + 1)
    || BaseAddress >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
  {
    v7 = RtlpxLookupFunctionTable(BaseAddress, (signed __int64)&v9, a3, a4);
  }
  else
  {
    v7 = xmmword_18017A500;
    v9 = xmmword_18017A500;
    v10 = qword_18017A510;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v9 + 1);
    v5 = HIDWORD(v10);
  }
  else
  {
    v8 = v11;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_18017A500 = v7;
  HIDWORD(qword_18017A510) = v5;
  *((_QWORD *)&xmmword_18017A500 + 1) = v8;
  LODWORD(qword_18017A510) = a2;
  RtlRemoveInvertedFunctionTable(BaseAddress);
  LdrProtectMrdata(1);
}
