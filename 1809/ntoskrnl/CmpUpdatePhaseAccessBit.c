/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x14075E7E0
 * Callers:
 *     CmpAcceptBoot @ 0x14071DDA8 (CmpAcceptBoot.c)
 * Callees:
 *     CmpTrimHive @ 0x1405B0000 (CmpTrimHive.c)
 *     CmpGetNextActiveHive @ 0x1405B1474 (CmpGetNextActiveHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E830 (CmpUpdateReorganizeRegistryValues.c)
 */

void CmpUpdatePhaseAccessBit()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v2 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v2 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[20] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
