/*
 * XREFs of EtwEventRegister @ 0x18000A640
 * Callers:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 *     sub_1800098D0 @ 0x1800098D0 (sub_1800098D0.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     sub_1800CC190 @ 0x1800CC190 (sub_1800CC190.c)
 *     sub_1800CC218 @ 0x1800CC218 (sub_1800CC218.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 */

NTSTATUS __cdecl EtwEventRegister(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  LONG v4; // eax
  NTSTATUS v5; // ebx

  if ( !EnableCallback && CallbackContext )
    return 87;
  v4 = EtwNotificationRegister(ProviderId, 3u, (PETW_NOTIFICATION_CALLBACK)EnableCallback, CallbackContext, RegHandle);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
