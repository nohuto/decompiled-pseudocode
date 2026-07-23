/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x14026C6BC
 * Callers:
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x1405A59A4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpUnlockKcbStackFlusherLocksExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(KcbAtLayerHeight + 24));
  }
}
