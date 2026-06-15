/*
 * XREFs of sub_180003080 @ 0x180003080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800030BC @ 0x1800030BC (sub_1800030BC.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall sub_180003080(void *a1, char a2)
{
  sub_1800030BC();
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
