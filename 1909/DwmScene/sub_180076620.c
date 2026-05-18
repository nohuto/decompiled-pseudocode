/*
 * XREFs of sub_180076620 @ 0x180076620
 * Callers:
 *     sub_1800766BC @ 0x1800766BC (sub_1800766BC.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_18006EC40 @ 0x18006EC40 (sub_18006EC40.c)
 *     sub_180089F84 @ 0x180089F84 (sub_180089F84.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180076620(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180089F84(a2, a1);
  sub_18006EC40(*a2);
  v4 = *(_QWORD *)(a1 + 712);
  if ( *(_QWORD *)(a1 + 720) == v4 )
  {
    sub_18000FC30((char **)(a1 + 704), (char *)v4, a2);
  }
  else
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *(_QWORD *)v4 = *a2;
    *(_QWORD *)(v4 + 8) = a2[1];
    *(_QWORD *)(a1 + 712) += 16LL;
  }
  return a2;
}
