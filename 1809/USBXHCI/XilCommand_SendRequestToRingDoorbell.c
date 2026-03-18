/*
 * XREFs of XilCommand_SendRequestToRingDoorbell @ 0x1C000A788
 * Callers:
 *     XilCommand_WriteDoorbell @ 0x1C000A85C (XilCommand_WriteDoorbell.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendRequestToRingDoorbell(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int16 v5; // r9
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[4]) = 20;
  v7 = 0;
  v8[3] = *(_QWORD *)(a1 + 32);
  LODWORD(result) = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v8, 40, (unsigned int)&v7, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v7;
    if ( v7 >= 0 )
      return result;
    v5 = 30;
  }
  else
  {
    v5 = 29;
  }
  v6 = result;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 72),
           2u,
           7u,
           v5,
           (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
           v6);
}
