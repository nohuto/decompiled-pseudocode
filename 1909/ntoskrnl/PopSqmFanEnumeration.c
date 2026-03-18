/*
 * XREFs of PopSqmFanEnumeration @ 0x140783F88
 * Callers:
 *     PopFanAdd @ 0x140783F20 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140A1B9FC (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_140391F06, 0LL, 0LL, 2u, &pData);
  }
}
