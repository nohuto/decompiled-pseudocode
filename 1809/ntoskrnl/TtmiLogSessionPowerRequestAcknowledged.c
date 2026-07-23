/*
 * XREFs of TtmiLogSessionPowerRequestAcknowledged @ 0x140886400
 * Callers:
 *     TtmNotifySessionPowerRequestPresent @ 0x1408811C0 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionPowerRequestAcknowledged(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        char a8)
{
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      v20 = a5;
      v18 = a6;
      v13 = a7;
      v14 = a8;
      v22 = &v15;
      v24 = &v16;
      v26 = &v17;
      v28 = &v19;
      v30 = &v20;
      v32 = &v18;
      v34 = &v13;
      v36 = &v14;
      v15 = a1;
      v16 = v12;
      v17 = v11;
      v19 = v10;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 8LL;
      v31 = 8LL;
      v33 = 4LL;
      v35 = v9;
      v37 = v9;
      TlgWrite(&stru_14096E820, &unk_14037317C, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
