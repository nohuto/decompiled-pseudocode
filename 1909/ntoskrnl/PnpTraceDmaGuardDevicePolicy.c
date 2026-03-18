/*
 * XREFs of PnpTraceDmaGuardDevicePolicy @ 0x14077E4DC
 * Callers:
 *     PipDmgSaveDeviceDmarPolicy @ 0x14077E484 (PipDmgSaveDeviceDmarPolicy.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x14008BAEC (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDmaGuardDevicePolicy(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  _DWORD v15[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  __int64 *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( a2 && stru_140425D20.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425D20, 0x400000000000uLL) )
    {
      v7 = 1LL;
      v10 = &v7;
      v12 = v15;
      v14 = *(_QWORD *)(v4 + 48);
      v15[0] = *(unsigned __int16 *)(v4 + 40);
      v16 = &v6;
      v18 = &v8;
      v6 = v3;
      v8 = 0x1000000LL;
      v11 = 8LL;
      v13 = 2LL;
      v15[1] = v5;
      v17 = 4LL;
      v19 = 8LL;
      TlgWriteAgg((__int64)&stru_140425D20, (unsigned __int8 *)dword_14038D123, v2, v3, 7u, &v9);
    }
  }
}
