/*
 * XREFs of PopSqmThermalUsermodeEvent @ 0x14087DB24
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x14086D6C0 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopSqmThermalUsermodeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v6; // r9d
  __int16 v7; // r10
  int v8; // r11d
  int v9; // [rsp+30h] [rbp-41h] BYREF
  int v10; // [rsp+34h] [rbp-3Dh] BYREF
  BOOL v11; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  int *v13; // [rsp+60h] [rbp-11h]
  __int64 v14; // [rsp+68h] [rbp-9h]
  int *v15; // [rsp+70h] [rbp-1h]
  __int64 v16; // [rsp+78h] [rbp+7h]
  BOOL *v17; // [rsp+80h] [rbp+Fh]
  __int64 v18; // [rsp+88h] [rbp+17h]
  _DWORD *v19; // [rsp+90h] [rbp+1Fh]
  __int64 v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]
  _DWORD v22[2]; // [rsp+A8h] [rbp+37h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
    {
      v9 = v8;
      v10 = v6;
      v11 = a5 != 0;
      v14 = 4LL;
      v13 = &v9;
      v15 = &v10;
      v17 = &v11;
      v19 = v22;
      v22[0] = (unsigned __int16)(2 * v7);
      v16 = 4LL;
      v18 = 4LL;
      v20 = 2LL;
      v21 = a2;
      v22[1] = 0;
      TlgWrite(&pCallbackContext, &unk_14037240E, 0LL, 0LL, 7u, &pData);
    }
  }
}
