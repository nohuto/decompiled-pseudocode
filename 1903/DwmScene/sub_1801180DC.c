/*
 * XREFs of sub_1801180DC @ 0x1801180DC
 * Callers:
 *     sub_1801166C4 @ 0x1801166C4 (sub_1801166C4.c)
 *     sub_180116BE8 @ 0x180116BE8 (sub_180116BE8.c)
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 * Callees:
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 */

char __fastcall sub_1801180DC(unsigned int a1, const char *a2)
{
  if ( a1 > 0x4000000 )
  {
    sub_18011D988(&unk_18025DE00, 3LL, "%s cannot process more than %u vertices (requested: %u)", a2, 0x4000000, a1);
    return 0;
  }
  if ( !a1 )
  {
    sub_18011D988(&unk_18025DE00, 3LL, "%s cannot process zero vertices", a2);
    return 0;
  }
  return 1;
}
