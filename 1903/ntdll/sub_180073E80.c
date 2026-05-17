/*
 * XREFs of sub_180073E80 @ 0x180073E80
 * Callers:
 *     sub_1800A0870 @ 0x1800A0870 (sub_1800A0870.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x180073EF0 (RtlLocateExtendedFeature2.c)
 */

_QWORD *__fastcall sub_180073E80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *result; // rax
  __int64 v6; // rcx

  v2 = *(int *)(a1 + 1248);
  *(_QWORD *)(v2 + a1 + 1232) = 0LL;
  *(_QWORD *)(v2 + a1 + 1240) &= 0x8000000000000800uLL;
  result = (_QWORD *)RtlLocateExtendedFeature2(a1 + 1232, 11LL, 2147353560LL);
  if ( result )
  {
    v6 = *(_QWORD *)(v2 + a1 + 1232);
    if ( a2 )
    {
      *(_QWORD *)(v2 + a1 + 1232) = v6 | 0x800;
      *result = 1LL;
      result[1] = a2;
    }
    else
    {
      *(_QWORD *)(v2 + a1 + 1232) = v6 & 0xFFFFFFFFFFFFF7FFuLL;
      *result = 0LL;
      result[1] = 0LL;
    }
  }
  return result;
}
