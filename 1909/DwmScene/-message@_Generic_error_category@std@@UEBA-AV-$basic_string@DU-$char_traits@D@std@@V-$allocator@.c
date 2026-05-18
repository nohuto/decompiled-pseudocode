/*
 * XREFs of ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18002C040
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_113 @ 0x18000F724 (unknown_libname_113.c)
 *     ?_Syserror_map@std@@YAPEBDH@Z @ 0x180127544 (-_Syserror_map@std@@YAPEBDH@Z.c)
 */

__int64 *__fastcall std::_Generic_error_category::message(__int64 a1, __int64 *a2, int a3)
{
  char *v4; // rax

  v4 = (char *)std::_Syserror_map(a3);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  unknown_libname_113(a2, v4);
  return a2;
}
