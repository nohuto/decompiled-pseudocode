/*
 * XREFs of RtlpHpApplySegmentHeapConfigurations @ 0x18010A458
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x18010A364 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 */

int RtlpHpApplySegmentHeapConfigurations()
{
  int result; // eax
  int v1; // [rsp+78h] [rbp+3Fh]
  int v2; // [rsp+7Ch] [rbp+43h]

  result = NtOpenKey();
  if ( result >= 0 )
  {
    result = NtQueryValueKey();
    if ( result >= 0 && v1 == 4 )
    {
      if ( v2 )
        RtlpLowFragHeapGlobalFlags |= 0x10u;
      else
        RtlpLowFragHeapGlobalFlags |= 8u;
    }
  }
  return result;
}
