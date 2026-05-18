/*
 * XREFs of sub_18002E27C @ 0x18002E27C
 * Callers:
 *     sub_180128E3D @ 0x180128E3D (sub_180128E3D.c)
 *     unknown_libname_34 @ 0x180128EB5 (unknown_libname_34.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_4 @ 0x180129743 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_4.c)
 *     sub_18012974F @ 0x18012974F (sub_18012974F.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_2 @ 0x18012F546 (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_18012F546.c)
 *     sub_18012F552 @ 0x18012F552 (sub_18012F552.c)
 *     sub_18012F5B8 @ 0x18012F5B8 (sub_18012F5B8.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E27C(__int64 *a1)
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
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18002E2D8LL);
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
