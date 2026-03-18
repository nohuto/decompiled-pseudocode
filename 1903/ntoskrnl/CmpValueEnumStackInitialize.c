/*
 * XREFs of CmpValueEnumStackInitialize @ 0x14083A2A4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402803E8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x1402805D4 (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx
  __int64 result; // rax

  memset(a1 + 1, 0, 0x54uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = (char *)(a1 + 4);
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 32;
    --v2;
  }
  while ( v2 );
  return result;
}
