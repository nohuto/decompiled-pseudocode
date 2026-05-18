/*
 * XREFs of sub_180066938 @ 0x180066938
 * Callers:
 *     sub_1800669D4 @ 0x1800669D4 (sub_1800669D4.c)
 * Callees:
 *     sub_18006303C @ 0x18006303C (sub_18006303C.c)
 *     sub_1800633E4 @ 0x1800633E4 (sub_1800633E4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180066938(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // eax
  volatile signed __int32 *v5; // rbx

  v4 = sub_1800633E4(*a2 + 24LL);
  sub_18006303C((__int64)(a1 + 1), v4);
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
