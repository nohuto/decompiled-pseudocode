/*
 * XREFs of PopDiagTraceBsdWriteTime @ 0x1401BF44C
 * Callers:
 *     PopWriteBsdPoInfo @ 0x1401BEB38 (PopWriteBsdPoInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceBsdWriteTime(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  int v4; // r10d
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  int *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  __int64 *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( (a3 < 0 || a2) && pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x200000000000uLL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = &v6;
      v14 = &v8;
      v6 = v5;
      v17 = &v7;
      v20 = &v9;
      v8 = v3;
      v7 = v4;
      v9 = 0x1000000LL;
      v12 = 4;
      v15 = 8;
      v18 = 4;
      v21 = 8;
      TlgWrite(&pCallbackContext, &unk_14038F33E, 0LL, 0LL, 6u, &pData);
    }
  }
}
