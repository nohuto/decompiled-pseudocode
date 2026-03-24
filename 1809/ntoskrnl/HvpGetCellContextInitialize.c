/*
 * XREFs of HvpGetCellContextInitialize @ 0x1407F9688
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1401B33F0 (CmpDereferenceSecurityNode.c)
 *     CmpValueEnumStackEntryInitialize @ 0x14026CB44 (CmpValueEnumStackEntryInitialize.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CB8C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmDeleteLayeredKey @ 0x14026CCCC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14026D15C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D474 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextInitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)a1 = -1;
  *(_WORD *)(a1 + 4) = 0;
  return result;
}
