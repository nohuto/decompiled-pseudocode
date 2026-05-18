/*
 * XREFs of sub_18000D458 @ 0x18000D458
 * Callers:
 *     sub_18000A4E4 @ 0x18000A4E4 (sub_18000A4E4.c)
 *     sub_18000A584 @ 0x18000A584 (sub_18000A584.c)
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 *     sub_18000D1BC @ 0x18000D1BC (sub_18000D1BC.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_1800389A0 @ 0x1800389A0 (sub_1800389A0.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x180125A19 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     memset @ 0x1801271C8 (memset.c)
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
