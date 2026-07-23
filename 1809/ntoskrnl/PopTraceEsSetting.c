/*
 * XREFs of PopTraceEsSetting @ 0x140192864
 * Callers:
 *     PopEsUpdateSetting @ 0x140762470 (PopEsUpdateSetting.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall PopTraceEsSetting(__int64 a1, int a2, unsigned __int8 a3)
{
  TLG_STATUS result; // eax
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v4 = PopEsMode;
    v6 = a3;
    v8 = &v4;
    v10 = &v5;
    v12 = &v6;
    v5 = a2;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    return TlgWrite(&pCallbackContext, &unk_140371686, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
