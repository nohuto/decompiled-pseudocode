/*
 * XREFs of PopSqmFanEnumeration @ 0x14075BCDC
 * Callers:
 *     PopFanAdd @ 0x14075BC70 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x1409D95B0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_140372525, 0LL, 0LL, 2u, &pData);
  }
}
