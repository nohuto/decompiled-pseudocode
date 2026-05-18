/*
 * XREFs of sub_18000D458 @ 0x18000D458
 * Callers:
 *     sub_18000A4E4 @ 0x18000A4E4 (sub_18000A4E4.c)
 *     sub_18000A584 @ 0x18000A584 (sub_18000A584.c)
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 *     sub_18000D1BC @ 0x18000D1BC (sub_18000D1BC.c)
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_180037810 @ 0x180037810 (sub_180037810.c)
 *     sub_1800380A0 @ 0x1800380A0 (sub_1800380A0.c)
 *     sub_180038AB0 @ 0x180038AB0 (sub_180038AB0.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x180125B29 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

__int64 __fastcall sub_18000D458(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
