/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140054D10
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 *     MiReferenceDriverPage @ 0x140155DA4 (MiReferenceDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int16 v1; // r8
  __int64 v2; // rax
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
