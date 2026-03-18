/*
 * XREFs of CmpLockKcbStackFlusherLocksExclusive @ 0x14027FBEC
 * Callers:
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     HvLockHiveFlusherExclusive @ 0x14068FFC4 (HvLockHiveFlusherExclusive.c)
 *     CmpQuitNextActiveHive @ 0x140839B88 (CmpQuitNextActiveHive.c)
 */

__int64 __fastcall CmpLockKcbStackFlusherLocksExclusive(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int16 v4; // dx
  __int64 v5; // rcx
  __int64 v6; // rbx

  v2 = *(__int16 *)(a1 + 2) + 1;
  for ( result = CmpGetNextActiveHive(0LL); ; result = CmpGetNextActiveHive(v6) )
  {
    v6 = result;
    if ( !result )
      break;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(CmpGetKcbAtLayerHeight(a1) + 32);
        if ( v5 == v6 )
          break;
        if ( (__int16)(v4 - 1) < 0 )
          goto LABEL_7;
      }
      HvLockHiveFlusherExclusive(v5);
      --v2;
    }
LABEL_7:
    if ( !v2 )
      return CmpQuitNextActiveHive(v6);
  }
  return result;
}
