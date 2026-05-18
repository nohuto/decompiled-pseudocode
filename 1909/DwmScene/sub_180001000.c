/*
 * XREFs of sub_180001000 @ 0x180001000
 * Callers:
 *     sub_1801186AC @ 0x1801186AC (sub_1801186AC.c)
 *     sub_18011C320 @ 0x18011C320 (sub_18011C320.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001000(ULONGLONG *CallbackContext, unsigned __int16 *a2, unsigned __int16 *a3)
{
  GUID v4; // xmm0
  signed int v5; // eax
  unsigned int v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = (ULONGLONG)a3;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v4;
  v5 = EventRegister(&ProviderId, EnableCallback, CallbackContext, CallbackContext + 4);
  v6 = v5;
  if ( v5 )
  {
    v6 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      return (unsigned int)v5;
  }
  else
  {
    EventSetInformation(CallbackContext[4], 2LL, CallbackContext[1], *(unsigned __int16 *)CallbackContext[1]);
  }
  return v6;
}
