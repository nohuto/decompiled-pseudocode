/*
 * XREFs of McTemplateU0 @ 0x1400050C0
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001C60 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001D10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140002E30 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x140005068 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 1, (__int64)v4);
}
