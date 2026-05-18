/*
 * XREFs of sub_180076510 @ 0x180076510
 * Callers:
 *     sub_1800765AC @ 0x1800765AC (sub_1800765AC.c)
 * Callees:
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     sub_18006EB30 @ 0x18006EB30 (sub_18006EB30.c)
 *     sub_180089E74 @ 0x180089E74 (sub_180089E74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180076510(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180089E74(a2, a1);
  sub_18006EB30(*a2);
  v4 = *(_QWORD *)(a1 + 712);
  if ( *(_QWORD *)(a1 + 720) == v4 )
  {
    sub_18000FBE0((char **)(a1 + 704), (char *)v4, a2);
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
