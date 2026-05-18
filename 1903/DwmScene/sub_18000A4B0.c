/*
 * XREFs of sub_18000A4B0 @ 0x18000A4B0
 * Callers:
 *     sub_180073590 @ 0x180073590 (sub_180073590.c)
 *     sub_180103904 @ 0x180103904 (sub_180103904.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall sub_18000A4B0(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // rdx

  result = (__int64 *)operator new(0x10uLL);
  v3 = qword_18026BA08;
  qword_18026BA08 = (__int64)result;
  *result = v3;
  result[1] = a1;
  return result;
}
