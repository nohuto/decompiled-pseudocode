/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x14026C3CC
 * Callers:
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x1405A49A4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D8AC0 (CmpGetKcbAtLayerHeight.c)
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
