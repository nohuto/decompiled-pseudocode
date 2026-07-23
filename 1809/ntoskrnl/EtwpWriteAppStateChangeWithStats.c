/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x1405B270C
 * Callers:
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     PsGetProcessStartKey @ 0x1400CCC30 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChangeWithStats()
{
  __int64 v0; // r9
  unsigned __int64 ProcessStartKey; // rax
  __int64 v2; // r9
  unsigned __int8 v3; // cl
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  bool v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  bool v10; // [rsp+33h] [rbp-CDh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  int *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  bool *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  char *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  char *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  bool *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  int *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  __int64 *v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]

  if ( stru_1404012D0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1404012D0, 0x200000000003uLL) )
    {
      v11 = *(_DWORD *)(v0 + 736);
      ProcessStartKey = PsGetProcessStartKey(v0);
      v3 = *(_BYTE *)(v2 + 1739);
      v14 = ProcessStartKey;
      v12 = *(_DWORD *)(v2 + 1572);
      v7 = (*(_DWORD *)(v2 + 1740) & 4) != 0;
      v8 = v3 & 7;
      v9 = (v3 >> 3) & 7;
      v13 = *(_DWORD *)(v2 + 1448);
      v4 = *(_QWORD *)(v2 + 1912);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v15 = v4 << 12;
      v20 = &v11;
      v23 = &v14;
      v26 = &v12;
      v29 = &v7;
      v32 = &v8;
      v35 = &v9;
      v38 = &v10;
      v44 = &v13;
      v47 = &v15;
      v10 = (v3 & 0x40) != 0;
      v17 = v5;
      v18 = 98;
      v21 = 4;
      v24 = 8;
      v27 = 4;
      v30 = 1;
      v33 = 1;
      v36 = 1;
      v39 = 1;
      v41 = v6;
      v42 = 44;
      v45 = 4;
      v48 = 8;
      TlgWrite(&stru_1404012D0, &unk_1403746B5, 0LL, 0LL, 0xDu, &pData);
    }
  }
}
