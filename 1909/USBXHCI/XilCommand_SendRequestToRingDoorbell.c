/*
 * XREFs of XilCommand_SendRequestToRingDoorbell @ 0x1C000C978
 * Callers:
 *     XilCommand_WriteDoorbell @ 0x1C000CA70 (XilCommand_WriteDoorbell.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendRequestToRingDoorbell(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int16 v7; // r9
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 112);
  *(_OWORD *)&v9[1] = 0LL;
  v9[3] = v4;
  v9[4] = 20LL;
  result = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v9, 40, (unsigned int)&v8, 4);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v7 = 29;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v3 + 72),
             2u,
             7u,
             v7,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             result);
  }
  result = (unsigned int)v8;
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 30;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v3 + 72),
             2u,
             7u,
             v7,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             result);
  }
  return result;
}
