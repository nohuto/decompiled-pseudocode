/*
 * XREFs of EtwTraceTimeZoneBiasChange @ 0x1408F4874
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall EtwTraceTimeZoneBiasChange(int a1)
{
  int v1; // r9d
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  int v5; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+5Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  int *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  int *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]
  int v17; // [rsp+C0h] [rbp+67h] BYREF

  v17 = a1;
  v5 = ExpLastTimeZoneBias;
  if ( stru_140426618.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426618, 0x400000000000uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v3;
    v14 = &v4;
    v3 = v1;
    v4 = v2;
    v12 = 4;
    v15 = 4;
    TlgWrite(&stru_140426618, &unk_14039377C, 0LL, 0LL, 4u, &pData);
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    v9 = 0;
    UserData.Ptr = (ULONGLONG)&v17;
    UserData.Size = 4;
    v7 = &v5;
    v8 = 4;
    EtwWrite(EtwKernelProvRegHandle, &KernelTimeZoneBiasChange, 0LL, 2u, &UserData);
  }
}
