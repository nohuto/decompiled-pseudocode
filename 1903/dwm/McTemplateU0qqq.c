/*
 * XREFs of McTemplateU0qqq @ 0x140005B38
 * Callers:
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140001210 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x140005A30 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0qqq(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+A0h] [rbp+18h] BYREF
  int v8; // [rsp+A8h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6[3] = 4LL;
  v6[2] = &v7;
  v6[5] = 4LL;
  v6[4] = &v8;
  v6[7] = 4LL;
  v6[6] = &a5;
  return McGenEventWrite(a1, (__int64)&UdwmProcessModeChange_Info, a3, 4, (__int64)v6);
}
