/*
 * XREFs of sub_1800DE480 @ 0x1800DE480
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 *sub_1800DE480()
{
  __int64 *result; // rax

  memset(&stru_180166120, 0, 0x60uLL);
  memset(&unk_180166128, 0, 0x40uLL);
  result = &qword_180166168;
  qword_180166170 = (__int64)&qword_180166168;
  qword_180166168 = (__int64)&qword_180166168;
  return result;
}
