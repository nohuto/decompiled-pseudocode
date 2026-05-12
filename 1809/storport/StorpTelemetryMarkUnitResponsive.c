/*
 * XREFs of StorpTelemetryMarkUnitResponsive @ 0x1C0050824
 * Callers:
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0046E90 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047670 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryMarkUnitResponsive(__int64 a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r8
  __int64 v3; // r9
  const struct _TlgProvider_t *v4; // rcx
  char v5; // [rsp+30h] [rbp-D0h] BYREF
  char v6; // [rsp+31h] [rbp-CFh] BYREF
  char v7; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int LevelPlus1; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  void **p_CallbackContext; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  unsigned int *p_LevelPlus1; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  char *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  char *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 && (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
    {
      v4 = *(const struct _TlgProvider_t **)(v1 + 24);
      LevelPlus1 = v4[1].LevelPlus1;
      v5 = *(_BYTE *)(v3 + 96);
      v6 = *(_BYTE *)(v3 + 97);
      v7 = *(_BYTE *)(v3 + 98);
      v9 = *(_DWORD *)(v3 + 3212);
      v10 = *(_DWORD *)(v3 + 3200);
      v11 = *(_DWORD *)(v3 + 3204);
      p_CallbackContext = &v4[93].CallbackContext;
      v15 = v3 + 1976;
      p_LevelPlus1 = &LevelPlus1;
      v19 = &v5;
      v21 = &v6;
      v23 = &v7;
      v25 = &v9;
      v27 = &v10;
      v29 = &v11;
      v14 = 16LL;
      v16 = 16LL;
      v18 = 4LL;
      v20 = 1LL;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      TlgWrite(v4, &unk_1C0058A7E, v2, (LPCGUID)v3, 0xBu, &pData);
    }
  }
}
