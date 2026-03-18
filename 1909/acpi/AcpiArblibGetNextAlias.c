/*
 * XREFs of AcpiArblibGetNextAlias @ 0x1C00ACC70
 * Callers:
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1C00ACD48 (AcpiArblibIsAliasedRangeAvailable.c)
 *     AcpiPortarbAddAllocation @ 0x1C00B1800 (AcpiPortarbAddAllocation.c)
 *     AcpiPortarbBacktrackAllocation @ 0x1C00B1900 (AcpiPortarbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiArblibGetNextAlias(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax

  if ( (a1 & 4) != 0 )
  {
    v3 = 1024LL;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v3 = 4096LL;
  }
  if ( (unsigned __int64)(v3 + a2) <= 0xFFFF )
  {
    *a3 = v3 + a2;
    return 1;
  }
  return 0;
}
