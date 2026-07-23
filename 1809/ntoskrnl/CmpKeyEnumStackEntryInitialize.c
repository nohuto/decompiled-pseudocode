/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x140800858
 * Callers:
 *     CmpKeyEnumStackInitialize @ 0x140800A94 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackReset @ 0x140800B80 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackStart @ 0x140800BE0 (CmpKeyEnumStackStart.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

_DWORD *__fastcall CmpKeyEnumStackEntryInitialize(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *result; // rax
  __int64 v4; // rbx

  memset((void *)a1, 0, 0x80uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = 2LL;
  *(_DWORD *)(a1 + 16) = -1;
  *(_WORD *)(a1 + 20) = 0;
  result = (_DWORD *)(a1 + 72);
  v4 = a1 + 56;
  do
  {
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)v4 = -1;
    *(_WORD *)(v4 + 4) = 0;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_DWORD *)(v4 + 40) = -1;
    *(_WORD *)(v4 + 44) = 0;
    v4 += 8LL;
    *result++ = -1;
    --v2;
  }
  while ( v2 );
  return result;
}
