/*
 * XREFs of TtmiLogDeviceInputNotified @ 0x140884A18
 * Callers:
 *     TtmNotifyDeviceInput @ 0x14087E5E0 (TtmNotifyDeviceInput.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall TtmiLogDeviceInputNotified(int a1, __int64 a2, int a3, char a4, char a5)
{
  _UNKNOWN **v5; // rax
  int ProcessSessionId; // eax
  char v12; // [rsp+38h] [rbp-61h] BYREF
  char v13; // [rsp+39h] [rbp-60h] BYREF
  int v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v15; // [rsp+40h] [rbp-59h] BYREF
  int v16; // [rsp+44h] [rbp-55h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-41h] BYREF
  int *v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+84h] [rbp-15h]
  int *v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+94h] [rbp-5h]
  __int64 *v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A4h] [rbp+Bh]
  int *v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B4h] [rbp+1Bh]
  char *v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+C0h] [rbp+27h]
  int v33; // [rsp+C4h] [rbp+2Bh]
  char *v34; // [rsp+C8h] [rbp+2Fh]
  int v35; // [rsp+D0h] [rbp+37h]
  int v36; // [rsp+D4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&stru_14096E820, 1uLL);
    if ( (_BYTE)v5 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v14 = ProcessSessionId;
      v13 = a5;
      v19 = &v14;
      v22 = &v15;
      v25 = &v17;
      v28 = &v16;
      v31 = &v12;
      v34 = &v13;
      v15 = a1;
      v17 = a2;
      v16 = a3;
      v12 = a4;
      v20 = 4;
      v23 = 4;
      v26 = 8;
      v29 = 4;
      v32 = 1;
      v35 = 1;
      LOBYTE(v5) = TlgWrite(&stru_14096E820, &unk_14037389E, 0LL, 0LL, 8u, &pData);
    }
  }
  return (char)v5;
}
