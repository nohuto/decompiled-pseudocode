/*
 * XREFs of PnpTraceDeviceRemovalForResetComplete @ 0x14083A9D8
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x140827B80 (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char PnpTraceDeviceRemovalForResetComplete()
{
  __int64 v0; // rax
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // r11d
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  __int64 v14; // [rsp+80h] [rbp-80h]
  _DWORD v15[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  _DWORD v19[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  _DWORD *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  _DWORD v33[2]; // [rsp+118h] [rbp+18h] BYREF

  LOBYTE(v0) = TraceLoggingProviderEnabled(&stru_140400BC8, 0, 0x400000000000uLL);
  if ( (_BYTE)v0 )
  {
    v0 = *(_QWORD *)(v1 + 184);
    if ( v0 )
      v0 = *(_QWORD *)(v0 + 312);
    if ( stru_140400BC8.LevelPlus1 > 5 )
    {
      LOBYTE(v0) = TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL);
      if ( (_BYTE)v0 )
      {
        v6 = *(_DWORD *)(v2 + 300);
        v7 = *(_DWORD *)(v3 + 164);
        v8 = *(_DWORD *)(v3 + 176);
        v10 = PnpResetRetryInterval;
        v9 = *(_DWORD *)(v3 + 192);
        v12 = v15;
        v14 = *(_QWORD *)(v2 + 48);
        v15[0] = *(unsigned __int16 *)(v2 + 40);
        v16 = v19;
        v18 = *(_QWORD *)(v2 + 64);
        v19[0] = *(unsigned __int16 *)(v2 + 56);
        v20 = &v6;
        v22 = &v7;
        v24 = &v8;
        v26 = &v10;
        v28 = &v9;
        v30 = v33;
        v32 = *(_QWORD *)(v3 + 208);
        v33[0] = *(unsigned __int16 *)(v3 + 200);
        v13 = 2LL;
        v15[1] = v4;
        v17 = 2LL;
        v19[1] = v4;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 8LL;
        v29 = 4LL;
        v31 = 2LL;
        v33[1] = v4;
        LOBYTE(v0) = TlgWrite(&stru_140400BC8, &unk_14036E4DA, 0LL, 0LL, 0xDu, &pData);
      }
    }
  }
  return v0;
}
