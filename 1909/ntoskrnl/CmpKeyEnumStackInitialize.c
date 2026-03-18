/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140838294
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833358 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14083784C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140838050 (CmpKeyEnumStackEntryInitialize.c)
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
