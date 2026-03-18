/*
 * XREFs of AslRegWildcardFindClose @ 0x14092824C
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1409234CC (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x1409282CC (AslRegWildcardFindFirst.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall AslRegWildcardFindClose(PVOID *P)
{
  PVOID **v1; // rsi
  PVOID *v3; // rcx
  PVOID *v4; // rbx
  PVOID v5; // rcx

  if ( P )
  {
    v1 = (PVOID **)*P;
    if ( *P != P )
    {
      do
      {
        v3 = v1[4];
        if ( v3 )
        {
          ZwClose(v3);
          v1[4] = 0LL;
        }
        v4 = *v1;
        ExFreePoolWithTag(v1, 0x74705041u);
        v1 = (PVOID **)v4;
      }
      while ( v4 != P );
    }
    v5 = P[3];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x74705041u);
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
