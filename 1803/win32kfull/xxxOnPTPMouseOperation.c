/*
 * XREFs of xxxOnPTPMouseOperation @ 0x1C01A1748
 * Callers:
 *     xxxDesktopThread @ 0x1C000D660 (xxxDesktopThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C01A0BE8 (-ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C01A0F20 (-UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 */

char xxxOnPTPMouseOperation()
{
  char result; // al
  __int64 v1; // rax
  BOOL v2; // ecx
  int v3; // edi
  __int64 v4; // r10
  __int64 v5; // r11
  bool v6; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-21h] BYREF
  int v8; // [rsp+48h] [rbp-11h]
  __int64 v9; // [rsp+50h] [rbp-9h]
  _QWORD v10[4]; // [rsp+58h] [rbp-1h] BYREF
  _MOUSE_INPUT_DATA v11; // [rsp+78h] [rbp+1Fh] BYREF
  struct _MOUSE_INPUT_DATA v12; // [rsp+90h] [rbp+37h] BYREF

  while ( 1 )
  {
    result = UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v7, (struct tagPTPMOUSEEVENT *)v10, &v6);
    if ( !result )
      break;
    ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v7, &v11);
    v1 = MilliSecsToQpcCount(v9);
    v2 = (v8 & 1) == 0;
    v3 = 8 * v2 + 1888;
    if ( v6 && v7[0] == v10[0] )
    {
      ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v10, &v12);
      SynthesizeMouseInputWithNextPreview(v4, &v11, v9, v5, v3, &v12);
    }
    else
    {
      SynthesizeMouseInput(v7[0], &v11, v9, v1, 8 * v2 + 1888);
    }
  }
  return result;
}
