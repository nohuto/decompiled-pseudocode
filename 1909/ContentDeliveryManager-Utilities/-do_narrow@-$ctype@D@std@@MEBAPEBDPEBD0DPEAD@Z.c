/*
 * XREFs of ?do_narrow@?$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z @ 0x1800B4970
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800CB1E8 (memcpy_0.c)
 */

__int64 __fastcall std::ctype<char>::do_narrow(__int64 a1, const void *a2, __int64 a3, __int64 a4, void *a5)
{
  memcpy_0(a5, a2, a3 - (_QWORD)a2);
  return a3;
}
