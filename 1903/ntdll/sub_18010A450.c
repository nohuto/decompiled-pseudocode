/*
 * XREFs of sub_18010A450 @ 0x18010A450
 * Callers:
 *     sub_1801070F4 @ 0x1801070F4 (sub_1801070F4.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

_QWORD *__fastcall sub_18010A450(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset(&qword_180166A50, 0, 0x38D0uLL);
  qword_180166A50 = (__int64)&qword_180163540;
  memset(&qword_180166A58, 0, 0x50uLL);
  qword_180166A80 = -1LL;
  dword_180166A94 = 16;
  memset(&unk_180166AA8, 0, 0x3840uLL);
  qword_180166AE8 = -1LL;
  v3 = &unk_180167320;
  dword_180166AFC = 2056;
  v4 = 255LL;
  do
  {
    *(v3 - 1) = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3 += 6;
    --v4;
  }
  while ( v4 );
  v5 = 3LL;
  qword_18016A318 = *a2;
  result = &unk_18016A2F0;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
