/*
 * XREFs of CmpValueEnumStackInitialize @ 0x140800D78
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026C968 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED350 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140804E80 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x14026CB44 (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(char *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x58uLL);
  *(_DWORD *)a1 = -1;
  v2 = 2LL;
  v3 = a1 + 16;
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 32;
    --v2;
  }
  while ( v2 );
  return result;
}
