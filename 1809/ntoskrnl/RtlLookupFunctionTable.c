/*
 * XREFs of RtlLookupFunctionTable @ 0x1401376E0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14019F9A8 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A17F0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_140559020 + 1) || a1 >= *(&xmmword_140559020 + 1) + (unsigned int)qword_140559030 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64)&v6);
  }
  else
  {
    result = (PVOID)xmmword_140559020;
    v6 = *(_OWORD *)&xmmword_140559020;
    v7 = qword_140559030;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
