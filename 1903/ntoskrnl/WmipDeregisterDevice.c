/*
 * XREFs of WmipDeregisterDevice @ 0x140732468
 * Callers:
 *     IoWMIRegistrationControl @ 0x140714870 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x140099D28 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x1401583A8 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x140173FF8 (WmipDeregisterRegEntry.c)
 *     WmipEnterSMCritSection @ 0x14032BB58 (WmipEnterSMCritSection.c)
 *     WmipLeaveSMCritSection @ 0x14032BB84 (WmipLeaveSMCritSection.c)
 */

__int64 __fastcall WmipDeregisterDevice(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  unsigned int v3; // ebx
  char *v4; // rsi
  PVOID *i; // rdi

  WmipEnterSMCritSection();
  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v3 = 0;
  v4 = (char *)RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    for ( i = (PVOID *)WmipRegWorkList; i != &WmipRegWorkList; i = (PVOID *)*i )
    {
      if ( i[3] == v4 )
      {
        i[3] = 0LL;
        WmipUnreferenceRegEntry((__int64)v4);
      }
    }
  }
  WmipLeaveSMCritSection();
  if ( v4 )
  {
    WmipUnreferenceRegEntry((__int64)v4);
    WmipDeregisterRegEntry(v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
