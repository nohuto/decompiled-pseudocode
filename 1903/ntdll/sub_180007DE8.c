/*
 * XREFs of sub_180007DE8 @ 0x180007DE8
 * Callers:
 *     sub_1800098D0 @ 0x1800098D0 (sub_1800098D0.c)
 *     sub_18007D494 @ 0x18007D494 (sub_18007D494.c)
 *     sub_1800827D0 @ 0x1800827D0 (sub_1800827D0.c)
 *     sub_180083E40 @ 0x180083E40 (sub_180083E40.c)
 *     sub_180084B70 @ 0x180084B70 (sub_180084B70.c)
 *     sub_1800D0B40 @ 0x1800D0B40 (sub_1800D0B40.c)
 * Callees:
 *     EtwEventSetInformation @ 0x18000A3E0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180007DE8(ULONGLONG *CallbackContext)
{
  GUID v2; // xmm0
  NTSTATUS v3; // eax
  unsigned __int32 v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  ProviderId = v2;
  v3 = EtwEventRegister(&ProviderId, EnableCallback, CallbackContext, CallbackContext + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      CallbackContext[4],
      (EVENT_INFO_CLASS)2,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  }
  return v4;
}
