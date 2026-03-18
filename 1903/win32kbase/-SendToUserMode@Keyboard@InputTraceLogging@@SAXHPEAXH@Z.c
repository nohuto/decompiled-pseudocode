/*
 * XREFs of ?SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z @ 0x1C017D660
 * Callers:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0GPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C017C990 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0GPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Keyboard::SendToUserMode(__int64 a1, void *a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  BOOL v5; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  BOOL *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  void **v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]
  void *v13; // [rsp+B8h] [rbp+6Fh] BYREF
  int v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x4000uLL) )
    {
      v8 = v4;
      v10 = 8LL;
      v12 = v4;
      v5 = v3 == 0;
      v7 = &v5;
      v9 = &v13;
      v11 = &v14;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E737D, 0LL, 0LL, 5u, &pData);
    }
  }
}
