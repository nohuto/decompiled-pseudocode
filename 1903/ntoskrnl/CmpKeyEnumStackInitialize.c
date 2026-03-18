/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140838C34
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833CF8 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1408381EC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14083EBC0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14083320C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1408389F0 (CmpKeyEnumStackEntryInitialize.c)
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
