/*
 * XREFs of sub_1800171D4 @ 0x1800171D4
 * Callers:
 *     sub_1800187A0 @ 0x1800187A0 (sub_1800187A0.c)
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_180022370 @ 0x180022370 (sub_180022370.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     sub_18002C760 @ 0x18002C760 (sub_18002C760.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800332B0 @ 0x1800332B0 (sub_1800332B0.c)
 *     sub_180033590 @ 0x180033590 (sub_180033590.c)
 *     sub_180033730 @ 0x180033730 (sub_180033730.c)
 *     sub_180034280 @ 0x180034280 (sub_180034280.c)
 *     sub_180037040 @ 0x180037040 (sub_180037040.c)
 *     sub_180039D40 @ 0x180039D40 (sub_180039D40.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800171D4(_QWORD *a1, __int64 *a2)
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
