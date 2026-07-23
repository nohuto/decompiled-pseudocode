/*
 * XREFs of WheaLogInternalEvent @ 0x14017D4A0
 * Callers:
 *     WheapLogInitEvent @ 0x140729144 (WheapLogInitEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall WheaLogInternalEvent(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v3; // [rsp+50h] [rbp-9h]
  __int64 v4; // [rsp+58h] [rbp-1h]
  __int64 v5; // [rsp+60h] [rbp+7h]
  __int64 v6; // [rsp+68h] [rbp+Fh]
  __int64 v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  __int64 v11; // [rsp+90h] [rbp+37h]
  int v12; // [rsp+98h] [rbp+3Fh]
  int v13; // [rsp+9Ch] [rbp+43h]

  v11 = a1;
  UserData.Ptr = a1 + 12;
  *(_QWORD *)&UserData.Size = 4LL;
  v3 = a1 + 16;
  v4 = 4LL;
  v5 = a1 + 20;
  v6 = 4LL;
  v7 = a1 + 24;
  v9 = a1 + 8;
  v12 = *(_DWORD *)(a1 + 8);
  v8 = 4LL;
  v10 = 4LL;
  v13 = 0;
  EtwWriteEx((REGHANDLE)WheapDispatchPtr.Queue.ListEntry.Blink, &EVENT_WHEA_LOG_ENTRY, 0LL, 0, 0LL, 0LL, 6u, &UserData);
  return 0LL;
}
