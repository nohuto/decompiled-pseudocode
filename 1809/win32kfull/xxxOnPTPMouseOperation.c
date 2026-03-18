/*
 * XREFs of xxxOnPTPMouseOperation @ 0x1C01C2D2C
 * Callers:
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00AD214 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C01C2014 (-ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C01C246C (-UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 */

char xxxOnPTPMouseOperation()
{
  char result; // al
  int v1; // edi
  __int64 v2; // r10
  bool v3; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-31h] BYREF
  int v5; // [rsp+48h] [rbp-21h]
  __int64 v6; // [rsp+50h] [rbp-19h]
  __int64 v7; // [rsp+58h] [rbp-11h]
  _QWORD v8[5]; // [rsp+60h] [rbp-9h] BYREF
  _MOUSE_INPUT_DATA v9; // [rsp+88h] [rbp+1Fh] BYREF
  struct _MOUSE_INPUT_DATA v10; // [rsp+A0h] [rbp+37h] BYREF

  while ( 1 )
  {
    result = UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v4, (struct tagPTPMOUSEEVENT *)v8, &v3);
    if ( !result )
      break;
    ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v4, &v9);
    v1 = 8 * ((v5 & 1) == 0) + 1888;
    InputTraceLogging::Mouse::InjectInput();
    if ( v3 && v4[0] == v8[0] )
    {
      ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v8, &v10);
      SynthesizeMouseInputWithNextPreview(v2, &v9, v7, v6, v1, &v10);
    }
    else
    {
      SynthesizeMouseInput(v4[0], &v9, v7, v6, v1);
    }
  }
  return result;
}
