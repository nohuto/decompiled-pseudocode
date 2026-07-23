/*
 * XREFs of VslIumEtwEnableCallback @ 0x140819BF0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall VslIumEtwEnableCallback(
        __int128 *SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  __int64 v10; // [rsp+40h] [rbp-68h]
  ULONGLONG v11; // [rsp+48h] [rbp-60h]
  ULONGLONG v12; // [rsp+50h] [rbp-58h]
  PVOID v13; // [rsp+58h] [rbp-50h]

  v8 = *SourceId;
  v9 = ControlCode;
  v10 = Level;
  v12 = MatchAllKeyword;
  v11 = MatchAnyKeyword;
  v13 = CallbackContext;
  VslpEnterIumSecureMode(2u, 213LL, 0, (__int64)v7);
}
