/*
 * XREFs of sub_1800023D0 @ 0x1800023D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800023D0()
{
  memmove(&qword_180258850, "Ground", 6uLL);
  BYTE6(qword_180258850) = 0;
  return atexit(sub_180135030);
}
