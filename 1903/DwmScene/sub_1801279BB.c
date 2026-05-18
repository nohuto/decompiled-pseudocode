/*
 * XREFs of sub_1801279BB @ 0x1801279BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801279BB(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = *(_QWORD **)(a2 + 64);
  *v3 = &std::exception::`vftable';
  return o___std_exception_destroy((__int64)(v3 + 1));
}
