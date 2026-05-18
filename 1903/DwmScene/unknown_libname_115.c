/*
 * XREFs of unknown_libname_115 @ 0x1800100A8
 * Callers:
 *     sub_180011054 @ 0x180011054 (sub_180011054.c)
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_18006CEA0 @ 0x18006CEA0 (sub_18006CEA0.c)
 *     sub_18006D6F0 @ 0x18006D6F0 (sub_18006D6F0.c)
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_180074528 @ 0x180074528 (sub_180074528.c)
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 *     sub_18007F898 @ 0x18007F898 (sub_18007F898.c)
 *     sub_180080260 @ 0x180080260 (sub_180080260.c)
 *     sub_180080378 @ 0x180080378 (sub_180080378.c)
 *     sub_180080790 @ 0x180080790 (sub_180080790.c)
 *     sub_1800808D0 @ 0x1800808D0 (sub_1800808D0.c)
 *     sub_1800817C8 @ 0x1800817C8 (sub_1800817C8.c)
 *     sub_1800A9604 @ 0x1800A9604 (sub_1800A9604.c)
 *     sub_18010B418 @ 0x18010B418 (sub_18010B418.c)
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 *     sub_18010B838 @ 0x18010B838 (sub_18010B838.c)
 *     sub_18010B948 @ 0x18010B948 (sub_18010B948.c)
 *     sub_18010BCA0 @ 0x18010BCA0 (sub_18010BCA0.c)
 *     sub_18011212C @ 0x18011212C (sub_18011212C.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 *     sub_18011E310 @ 0x18011E310 (sub_18011E310.c)
 *     sub_18011E7B0 @ 0x18011E7B0 (sub_18011E7B0.c)
 *     sub_18011EB44 @ 0x18011EB44 (sub_18011EB44.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_115(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
