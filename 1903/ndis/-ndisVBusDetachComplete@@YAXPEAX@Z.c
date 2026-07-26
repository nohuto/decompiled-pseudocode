/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C011DED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C010379C (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  byte_1C00E6198 = 0;
  ndisBindEnumerateProtocolDrivers(
    (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_,
    0LL);
  ExWaitForRundownProtectionRelease(&RunRef);
  NmrClientDetachProviderComplete(NmrBindingHandle);
  ProviderDispatch = 0LL;
  *(_OWORD *)&NmrBindingHandle = 0LL;
}
