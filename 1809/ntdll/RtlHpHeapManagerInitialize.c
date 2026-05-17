/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x18010C498
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x180109D7C (RtlHpInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x1800A7100 (memset.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset(&RtlpHpHeapManager, 0, 0x30C8uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset(&unk_180166908, 0, 0x48uLL);
  qword_180166930 = -1LL;
  memset(&unk_180166950, 0, 0x3040uLL);
  qword_180166988 = -1LL;
  v3 = 255LL;
  v4 = &unk_1801669C8;
  do
  {
    memset(v4 - 1, 0, 0x30uLL);
    *v4 = 0LL;
    v4[1] = 0LL;
    v4 += 6;
    --v3;
  }
  while ( v3 );
  v5 = 3LL;
  qword_1801699C0 = *a2;
  result = &unk_180169998;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
