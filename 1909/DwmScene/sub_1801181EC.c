/*
 * XREFs of sub_1801181EC @ 0x1801181EC
 * Callers:
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 * Callees:
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 */

char __fastcall sub_1801181EC(unsigned int a1, const char *a2)
{
  if ( a1 > 0x4000000 )
  {
    sub_18011DA98(&unk_18025EE00, 3LL, "%s cannot process more than %u vertices (requested: %u)", a2, 0x4000000, a1);
    return 0;
  }
  if ( !a1 )
  {
    sub_18011DA98(&unk_18025EE00, 3LL, "%s cannot process zero vertices", a2);
    return 0;
  }
  return 1;
}
