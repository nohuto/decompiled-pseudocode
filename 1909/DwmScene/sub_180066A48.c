/*
 * XREFs of sub_180066A48 @ 0x180066A48
 * Callers:
 *     sub_180066AE4 @ 0x180066AE4 (sub_180066AE4.c)
 * Callees:
 *     sub_18006314C @ 0x18006314C (sub_18006314C.c)
 *     sub_1800634F4 @ 0x1800634F4 (sub_1800634F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180066A48(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // eax
  volatile signed __int32 *v5; // rbx

  v4 = sub_1800634F4(*a2 + 24LL);
  sub_18006314C((__int64)(a1 + 1), v4);
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
