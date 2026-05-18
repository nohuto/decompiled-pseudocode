/*
 * XREFs of sub_180009B30 @ 0x180009B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111E98 @ 0x180111E98 (sub_180111E98.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

int sub_180009B30()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+38h] [rbp+10h] BYREF

  memset(&unk_18026ACD0, 0, 0x40uLL);
  v2 = 0;
  sub_180111E98(&unk_18026ACD0, &v2, &v1);
  return atexit(sub_18013CB80);
}
