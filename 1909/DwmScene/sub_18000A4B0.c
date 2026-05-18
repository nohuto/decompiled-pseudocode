/*
 * XREFs of sub_18000A4B0 @ 0x18000A4B0
 * Callers:
 *     sub_1800736A0 @ 0x1800736A0 (sub_1800736A0.c)
 *     sub_180103A14 @ 0x180103A14 (sub_180103A14.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall sub_18000A4B0(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // rdx

  result = (__int64 *)operator new(0x10uLL);
  v3 = qword_18026CA08;
  qword_18026CA08 = (__int64)result;
  *result = v3;
  result[1] = a1;
  return result;
}
