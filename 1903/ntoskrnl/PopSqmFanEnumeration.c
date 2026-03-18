/*
 * XREFs of PopSqmFanEnumeration @ 0x140781C28
 * Callers:
 *     PopFanAdd @ 0x140781BC0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140A1B784 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_140391C3D, 0LL, 0LL, 2u, &pData);
  }
}
