/*
 * XREFs of PopDiagTracePowerButtonBugcheck @ 0x140874E40
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140746338 (PopRecordLongPowerButtonPressDetected.c)
 */

void __fastcall PopDiagTracePowerButtonBugcheck(int a1)
{
  int v1; // r9d
  char v2; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v3[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  int *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  char *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  __int64 *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  __int64 *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  int *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  char *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  int *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  int *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]

  if ( a1 == 7000 )
  {
    PopRecordLongPowerButtonPressDetected(1);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v5 = dword_140411208;
        v6 = dword_140411204;
        v2 = byte_140411248;
        v12 = qword_140411210;
        v17 = &v5;
        v7 = dword_140411218;
        v19 = &v6;
        v8 = dword_14041121C;
        v21 = &v2;
        v13[0] = qword_140411220;
        v23 = &v12;
        v9 = dword_14041124C;
        v31 = &v9;
        v3[0] = byte_140411258;
        v25 = &v7;
        v33 = v3;
        v10 = dword_140411250;
        v11 = dword_140411254;
        v27 = &v8;
        v35 = &v10;
        v15 = &v4;
        v4 = 7000;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 1LL;
        v24 = 8LL;
        v26 = 4LL;
        v28 = 4LL;
        v29 = v13;
        v30 = 8LL;
        v32 = 4LL;
        v34 = 1LL;
        v36 = 4LL;
        v37 = &v11;
        v38 = 4LL;
        TlgWrite(&pCallbackContext, &unk_140371EC0, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  else if ( a1 == 15000 && pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    v10 = dword_140411208;
    v9 = dword_140411204;
    v3[0] = byte_140411248;
    v13[0] = qword_140411210;
    v17 = &v10;
    v8 = dword_140411218;
    v19 = &v9;
    v7 = dword_14041121C;
    v21 = v3;
    v12 = qword_140411220;
    v23 = v13;
    v6 = dword_14041124C;
    v31 = &v6;
    v2 = byte_140411258;
    v25 = &v8;
    v33 = &v2;
    v5 = dword_140411250;
    v4 = dword_140411254;
    v27 = &v7;
    v35 = &v5;
    v15 = &v11;
    v11 = v1;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 1LL;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 4LL;
    v29 = &v12;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 1LL;
    v36 = 4LL;
    v37 = &v4;
    v38 = 4LL;
    TlgWrite(&pCallbackContext, &unk_140371D9B, 0LL, 0LL, 0xEu, &pData);
  }
}
