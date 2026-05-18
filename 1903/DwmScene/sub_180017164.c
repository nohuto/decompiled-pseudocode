/*
 * XREFs of sub_180017164 @ 0x180017164
 * Callers:
 *     sub_180018730 @ 0x180018730 (sub_180018730.c)
 *     sub_180021B70 @ 0x180021B70 (sub_180021B70.c)
 *     sub_180022260 @ 0x180022260 (sub_180022260.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_1800331A0 @ 0x1800331A0 (sub_1800331A0.c)
 *     sub_180033480 @ 0x180033480 (sub_180033480.c)
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 *     sub_180034170 @ 0x180034170 (sub_180034170.c)
 *     sub_180036F30 @ 0x180036F30 (sub_180036F30.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180017164(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx

  v3 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *a1 = v3;
  a1[1] = a2[1];
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
