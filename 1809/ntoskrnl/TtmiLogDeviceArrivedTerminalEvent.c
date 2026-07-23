/*
 * XREFs of TtmiLogDeviceArrivedTerminalEvent @ 0x140884398
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x14087F4A0 (TtmpPublishDeviceEvent.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall TtmiLogDeviceArrivedTerminalEvent(int a1, int a2, int a3, int a4, LPCWSTR pwsz)
{
  _UNKNOWN **v5; // rax
  int ProcessSessionId; // eax
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v14; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+44h] [rbp-65h] BYREF
  int v16; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-51h] BYREF
  int *v18; // [rsp+78h] [rbp-31h]
  int v19; // [rsp+80h] [rbp-29h]
  int v20; // [rsp+84h] [rbp-25h]
  int *v21; // [rsp+88h] [rbp-21h]
  int v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+94h] [rbp-15h]
  int *v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+A0h] [rbp-9h]
  int v26; // [rsp+A4h] [rbp-5h]
  int *v27; // [rsp+A8h] [rbp-1h]
  int v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B4h] [rbp+Bh]
  int *v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+C0h] [rbp+17h]
  int v32; // [rsp+C4h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+1Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&stru_14096E820, 1uLL);
    if ( (_BYTE)v5 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v12 = ProcessSessionId;
      v18 = &v12;
      v21 = &v13;
      v24 = &v14;
      v27 = &v15;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v30 = &v16;
      v13 = a1;
      v14 = a2;
      v15 = a3;
      v16 = a4;
      TlgCreateWsz(&pDesc, pwsz);
      LOBYTE(v5) = TlgWrite(&stru_14096E820, &unk_1403728F0, 0LL, 0LL, 8u, &pData);
    }
  }
  return (char)v5;
}
