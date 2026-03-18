/*
 * XREFs of RtlLookupFunctionTable @ 0x14013B260
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1401AA888 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001B800 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0uLL;
  v7 = 0LL;
  if ( a1 < *((_QWORD *)&xmmword_140589020 + 1)
    || a1 >= *((_QWORD *)&xmmword_140589020 + 1) + (unsigned __int64)(unsigned int)qword_140589030 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64)&v6);
  }
  else
  {
    result = (PVOID)xmmword_140589020;
    v6 = xmmword_140589020;
    v7 = qword_140589030;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
