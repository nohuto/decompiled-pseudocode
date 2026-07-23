/*
 * XREFs of PnpTraceQueryStopFailure @ 0x14083AE4C
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x140840A64 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PnpTraceQueryStopFailure(__int64 a1)
{
  __int64 v1; // r9
  char v2; // r10
  int v3; // r11d
  char v4; // [rsp+30h] [rbp-49h] BYREF
  int v5; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v7; // [rsp+60h] [rbp-19h]
  int v8; // [rsp+68h] [rbp-11h]
  int v9; // [rsp+6Ch] [rbp-Dh]
  __int64 v10; // [rsp+70h] [rbp-9h]
  _DWORD v11[2]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  __int64 v15; // [rsp+90h] [rbp+17h]
  _DWORD v16[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]
  char *v20; // [rsp+B0h] [rbp+37h]
  int v21; // [rsp+B8h] [rbp+3Fh]
  int v22; // [rsp+BCh] [rbp+43h]

  if ( !a1 )
    __fastfail(5u);
  if ( stru_140400BC8.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL) )
    {
      v9 = 0;
      v11[1] = 0;
      v14 = 0;
      v16[1] = 0;
      v19 = 0;
      v22 = 0;
      v7 = v11;
      v10 = *(_QWORD *)(v1 + 48);
      v11[0] = *(unsigned __int16 *)(v1 + 40);
      v12 = v16;
      v15 = *(_QWORD *)(v1 + 64);
      v16[0] = *(unsigned __int16 *)(v1 + 56);
      v17 = &v5;
      v20 = &v4;
      v5 = v3;
      v4 = v2;
      v8 = 2;
      v13 = 2;
      v18 = 4;
      v21 = 1;
      TlgWrite(&stru_140400BC8, &unk_14036E6E8, 0LL, 0LL, 8u, &pData);
    }
  }
}
