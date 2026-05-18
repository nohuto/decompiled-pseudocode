/*
 * XREFs of sub_18008954C @ 0x18008954C
 * Callers:
 *     ?dtor$1@?0???1_ExceptionHolder@details@Concurrency@@QEAA@XZ@4HA @ 0x18012E84A (-dtor$1@-0---1_ExceptionHolder@details@Concurrency@@QEAA@XZ@4HA.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x18012E9D4 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012E9D4.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_4 @ 0x180131230 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_180131230.c)
 *     sub_1801322DD @ 0x1801322DD (sub_1801322DD.c)
 *     sub_180132468 @ 0x180132468 (sub_180132468.c)
 *     sub_180132729 @ 0x180132729 (sub_180132729.c)
 *     sub_180132C02 @ 0x180132C02 (sub_180132C02.c)
 *     unknown_libname_161 @ 0x180132C32 (unknown_libname_161.c)
 *     sub_180133093 @ 0x180133093 (sub_180133093.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18008954C(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800895A8LL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
