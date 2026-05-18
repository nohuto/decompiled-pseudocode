/*
 * XREFs of sub_180009B30 @ 0x180009B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111FA8 @ 0x180111FA8 (sub_180111FA8.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

int sub_180009B30()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+38h] [rbp+10h] BYREF

  memset(&unk_18026BCD0, 0, 0x40uLL);
  v2 = 0;
  sub_180111FA8(&unk_18026BCD0, &v2, &v1);
  return atexit(sub_18013CC90);
}
