/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180033170
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033378 @ 0x180033378 (sub_180033378.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall std::stringbuf::`scalar deleting destructor'(void *a1, char a2)
{
  sub_180033378();
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
