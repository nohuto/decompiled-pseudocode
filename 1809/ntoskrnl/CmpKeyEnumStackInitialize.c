/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x1407FF8B4
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407FA954 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FEDFC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407F9F48 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1407FF678 (CmpKeyEnumStackEntryInitialize.c)
 */

_DWORD *__fastcall CmpKeyEnumStackInitialize(char *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _DWORD *result; // rax

  memset(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = (__int64)(a1 + 88);
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 128LL;
    --v3;
  }
  while ( v3 );
  return result;
}
