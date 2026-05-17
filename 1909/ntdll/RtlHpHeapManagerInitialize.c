/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x18010A580
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18010722C (RtlHpInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset(&RtlpHpHeapManager, 0, 0x38D0uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset(&qword_180166A68, 0, 0x50uLL);
  qword_180166A90 = -1LL;
  dword_180166AA4 = 16;
  memset(&unk_180166AB8, 0, 0x3840uLL);
  qword_180166AF8 = -1LL;
  v3 = &unk_180167330;
  dword_180166B0C = 2056;
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
  qword_18016A328 = *a2;
  result = &unk_18016A300;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
