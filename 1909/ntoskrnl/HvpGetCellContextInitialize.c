/*
 * XREFs of HvpGetCellContextInitialize @ 0x1408321CC
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x140280334 (CmpValueEnumStackEntryInitialize.c)
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280CA8 (CmpQueryKeyDataFromKeyNodeStack.c)
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
