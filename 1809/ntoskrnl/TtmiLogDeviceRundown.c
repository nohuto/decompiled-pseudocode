/*
 * XREFs of TtmiLogDeviceRundown @ 0x140884B64
 * Callers:
 *     TtmiDevicesRundown @ 0x14087E7EC (TtmiDevicesRundown.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void TtmiLogDeviceRundown()
{
  int *v0; // r9
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+88h] [rbp-78h]
  int *v12; // [rsp+90h] [rbp-70h]
  __int64 v13; // [rsp+98h] [rbp-68h]
  int *v14; // [rsp+A0h] [rbp-60h]
  __int64 v15; // [rsp+A8h] [rbp-58h]
  __int64 *v16; // [rsp+B0h] [rbp-50h]
  __int64 v17; // [rsp+B8h] [rbp-48h]
  int *v18; // [rsp+C0h] [rbp-40h]
  __int64 v19; // [rsp+C8h] [rbp-38h]
  int *v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  __int64 *v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  int *v24; // [rsp+F0h] [rbp-10h]
  __int64 v25; // [rsp+F8h] [rbp-8h]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      v1 = *v0;
      v2 = v0[1];
      v3 = v0[2];
      v7 = *((_QWORD *)v0 + 3);
      v4 = v0[3];
      v5 = v0[4];
      v8 = *((_QWORD *)v0 + 4);
      v6 = v0[5];
      v10 = &v1;
      v12 = &v2;
      v14 = &v3;
      v16 = &v7;
      v18 = &v4;
      v20 = &v5;
      v22 = &v8;
      v24 = &v6;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 8LL;
      v25 = 4LL;
      TlgWrite(&stru_14096E820, &unk_140373A36, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
