/*
 * XREFs of CmpLockKcbStackExclusive @ 0x1405AA5D8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407307D8 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x14075B97C (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1405D1728 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D8AC0 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
