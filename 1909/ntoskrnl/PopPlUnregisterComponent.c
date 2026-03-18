/*
 * XREFs of PopPlUnregisterComponent @ 0x1408B98F4
 * Callers:
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 * Callees:
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall PopPlUnregisterComponent(__int64 a1)
{
  TLG_STATUS result; // eax
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  __int64 v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v3 = 1;
    v5 = &v3;
    v7 = 0;
    v6 = 2;
    v8 = a1;
    v10 = 0;
    v9 = 16;
    result = TlgWrite(&pCallbackContext, &unk_140391896, 0LL, 0LL, 4u, &v4);
  }
  *(_QWORD *)(a1 + 432) = 0LL;
  return result;
}
