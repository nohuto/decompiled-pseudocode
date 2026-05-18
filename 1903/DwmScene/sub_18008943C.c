/*
 * XREFs of sub_18008943C @ 0x18008943C
 * Callers:
 *     ?dtor$1@?0???1_ExceptionHolder@details@Concurrency@@QEAA@XZ@4HA @ 0x18012E73A (-dtor$1@-0---1_ExceptionHolder@details@Concurrency@@QEAA@XZ@4HA.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x18012E8C4 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012E8C4.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_4 @ 0x180131120 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_180131120.c)
 *     sub_1801321CD @ 0x1801321CD (sub_1801321CD.c)
 *     sub_180132358 @ 0x180132358 (sub_180132358.c)
 *     sub_180132619 @ 0x180132619 (sub_180132619.c)
 *     sub_180132AF2 @ 0x180132AF2 (sub_180132AF2.c)
 *     unknown_libname_161 @ 0x180132B22 (unknown_libname_161.c)
 *     sub_180132F83 @ 0x180132F83 (sub_180132F83.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18008943C(__int64 *a1)
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
        JUMPOUT(0x180089498LL);
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
