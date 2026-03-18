/*
 * XREFs of HvpGetCellContextInitialize @ 0x140832B6C
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x1402805D4 (CmpValueEnumStackEntryInitialize.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280F48 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  *(_DWORD *)a1 = -1;
  return result;
}
