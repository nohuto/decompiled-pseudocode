/*
 * XREFs of ProcLibRegisterEtw @ 0x1C00351A8
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

NTSTATUS ProcLibRegisterEtw()
{
  NTSTATUS result; // eax
  GUID v1; // xmm0
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  result = EtwRegister(
             &PPM_ETW_PROVIDER,
             (PETWENABLECALLBACK)ProcLibTraceControlCallback,
             0LL,
             (PREGHANDLE)&WPP_MAIN_CB.Queue);
  if ( result >= 0 )
  {
    v1 = (GUID)*((_OWORD *)EventInformation - 1);
    xmmword_1C0013090 = 0LL;
    ProviderId = v1;
    if ( !EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0013068, &RegHandle) )
      EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
    ProcLibEtwRegistered = 1;
    return 0;
  }
  return result;
}
