/*
 * XREFs of CmpValueEnumStackInitialize @ 0x140839904
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140280148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140280334 (CmpValueEnumStackEntryInitialize.c)
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
