/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140030D40
 * Callers:
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiReferenceDriverPage @ 0x1402A6328 (MiReferenceDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // r8
  unsigned int v3; // edx

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) == 0 )
  {
    v1 = *(_WORD *)(a1 + 32);
    v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v3 = 0;
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        if ( !v2 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
          return v3;
      }
      else if ( v1 != 2 || !v2 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      {
        return v3;
      }
    }
    return 1;
  }
  return 0LL;
}
