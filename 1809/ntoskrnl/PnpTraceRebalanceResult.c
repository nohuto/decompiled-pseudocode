/*
 * XREFs of PnpTraceRebalanceResult @ 0x14083AF68
 * Callers:
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

BOOLEAN PnpTraceRebalanceResult()
{
  BOOLEAN result; // al
  __int64 v1; // r10
  __int64 v2; // rbx
  __int64 v3; // r9
  int *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  _DWORD v18[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  _DWORD v22[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  _DWORD *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  _DWORD v28[2]; // [rsp+D8h] [rbp-28h] BYREF
  char *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  char *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]

  result = TraceLoggingProviderEnabled(&stru_140400BC8, 0, 0x400000000000uLL);
  if ( result )
  {
    if ( !v1 || !*(_QWORD *)(v1 + 40) || !*(_QWORD *)(v1 + 24) )
      __fastfail(5u);
    v2 = MEMORY[0xFFFFF78000000008];
    if ( stru_140400BC8.LevelPlus1 > 5 )
    {
      result = TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL);
      if ( result )
      {
        v6 = v2 - *((_QWORD *)v4 + 7);
        v9 = *v4;
        v7 = *((_BYTE *)v4 + 32);
        v8 = *((_BYTE *)v4 + 48);
        v10 = v4[3];
        v11 = v4[5];
        v13 = v2;
        v15 = v18;
        v17 = *(_QWORD *)(v3 + 48);
        v18[0] = *(unsigned __int16 *)(v3 + 40);
        v19 = v22;
        v21 = *(_QWORD *)(v3 + 64);
        v22[0] = *(unsigned __int16 *)(v3 + 56);
        v23 = &v9;
        v25 = v28;
        v27 = *(_QWORD *)(v5 + 48);
        v28[0] = *(unsigned __int16 *)(v5 + 40);
        v29 = &v7;
        v31 = &v8;
        v33 = &v10;
        v35 = &v11;
        v37 = &v12;
        v39 = &v13;
        v12 = v6 / 0x2710;
        v16 = 2LL;
        v18[1] = 0;
        v20 = 2LL;
        v22[1] = 0;
        v24 = 4LL;
        v26 = 2LL;
        v28[1] = 0;
        v30 = 1LL;
        v32 = 1LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 8LL;
        v40 = 8LL;
        return TlgWrite(&stru_140400BC8, &unk_14036E56D, 0LL, 0LL, 0xFu, &pData);
      }
    }
  }
  return result;
}
