/*
 * XREFs of sub_1800023D0 @ 0x1800023D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_1800023D0()
{
  memmove(&qword_180259850, "Ground", 6uLL);
  BYTE6(qword_180259850) = 0;
  return atexit(sub_180135140);
}
