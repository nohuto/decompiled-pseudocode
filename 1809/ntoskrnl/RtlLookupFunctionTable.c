/*
 * XREFs of RtlLookupFunctionTable @ 0x1401375E0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14019F868 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14098E324 (CcInitializeBcbProfiler.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A18B0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_140558020 + 1) || a1 >= *(&xmmword_140558020 + 1) + (unsigned int)qword_140558030 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64)&v6);
  }
  else
  {
    result = (PVOID)xmmword_140558020;
    v6 = *(_OWORD *)&xmmword_140558020;
    v7 = qword_140558030;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
