/*
 * XREFs of CmpLockKcbStackExclusive @ 0x140638B38
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmpAssignKeySecurity @ 0x140784110 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
