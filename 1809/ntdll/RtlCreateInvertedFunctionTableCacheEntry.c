/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E2034
 * Callers:
 *     LdrpInitializeExceptionTable @ 0x1800D3090 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180076BEC (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlCreateInvertedFunctionTableCacheEntry(PVOID BaseAddress, int a2)
{
  int v3; // edi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp+8h]

  v3 = 0;
  if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_180178500 + 1)
    || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_180178500 + 1)
                                      + (unsigned __int64)(unsigned int)qword_180178510 )
  {
    v5 = RtlpxLookupFunctionTable(BaseAddress, (__int64)&v7);
  }
  else
  {
    v5 = xmmword_180178500;
    v7 = xmmword_180178500;
    v8 = qword_180178510;
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v7 + 1);
    v3 = HIDWORD(v8);
  }
  else
  {
    v6 = v9;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_180178500 = v5;
  HIDWORD(qword_180178510) = v3;
  *((_QWORD *)&xmmword_180178500 + 1) = v6;
  LODWORD(qword_180178510) = a2;
  RtlRemoveInvertedFunctionTable((__int64)BaseAddress);
  LdrProtectMrdata(1);
}
