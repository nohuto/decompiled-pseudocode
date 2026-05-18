/*
 * XREFs of sub_18000A694 @ 0x18000A694
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A720 @ 0x18000A720 (sub_18000A720.c)
 *     _o___std_exception_copy @ 0x180125AC3 (_o___std_exception_copy.c)
 */

_QWORD *__fastcall sub_18000A694(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v4; // rax
  __int64 v5; // rcx

  *a1 = &std::exception::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  o___std_exception_copy(a2 + 8);
  *a1 = &wil::ResultException::`vftable';
  sub_18000A720(a1 + 3, a2 + 24);
  a1[23] = 0LL;
  a1[24] = 0LL;
  v4 = *(volatile signed __int32 **)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 192);
  if ( v4 )
  {
    a1[23] = v4;
    a1[24] = v5;
    _InterlockedIncrement(v4);
  }
  return a1;
}
