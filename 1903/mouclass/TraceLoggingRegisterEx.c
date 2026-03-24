/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C000D140
 * Callers:
 *     DriverEntry @ 0x1C000F470 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002900 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v3; // xmm0
  TLG_STATUS result; // eax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (GUID)*((_OWORD *)EventInformation - 1);
  xmmword_1C0009038 = 0LL;
  ProviderId = v3;
  result = EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0009010, &RegHandle);
  if ( !result )
  {
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
    return 0;
  }
  return result;
}
