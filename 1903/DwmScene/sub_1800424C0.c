/*
 * XREFs of sub_1800424C0 @ 0x1800424C0
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x180129657 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     sub_18012FF53 @ 0x18012FF53 (sub_18012FF53.c)
 *     sub_180130DED @ 0x180130DED (sub_180130DED.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_1800424C0(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = a1[4];
  if ( v1 >= 0x10 )
  {
    v3 = a1[1];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x18004251DLL);
      }
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[3] = 0LL;
  a1[4] = 15LL;
  *((_BYTE *)a1 + 8) = 0;
}
