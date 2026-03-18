/*
 * XREFs of SepIsAclEqual @ 0x1408E2F9C
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 */

char __fastcall SepIsAclEqual(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v3; // ax

  if ( a1 )
  {
    if ( !a2 )
      return 0;
    v3 = a1[1];
    if ( v3 != a2[1] || RtlCompareMemory(a1, a2, v3) != (unsigned __int16)a1[1] )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
