/*
 * XREFs of EtwTraceLeapSecondDataParseFailure @ 0x1408F4620
 * Callers:
 *     ExpReadLeapSecondData @ 0x14075F730 (ExpReadLeapSecondData.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall EtwTraceLeapSecondDataParseFailure(int a1)
{
  int v1; // r9d
  int v2; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  int *v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+70h] [rbp-10h]
  int v7; // [rsp+74h] [rbp-Ch]
  int v8; // [rsp+90h] [rbp+10h] BYREF

  v8 = a1;
  if ( stru_140426618.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426618, 0x400000000000uLL) )
  {
    v7 = 0;
    v5 = &v2;
    v2 = v1;
    v6 = 4;
    TlgWrite(&stru_140426618, &unk_1403937B1, 0LL, 0LL, 3u, &pData);
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 4;
    EtwWrite(EtwKernelProvRegHandle, &KernelLeapSecondDataParseFailure, 0LL, 1u, &UserData);
  }
}
