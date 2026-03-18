/*
 * XREFs of McTemplateU0 @ 0x140005A88
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001D70 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001E20 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x140005A30 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 1, (__int64)v4);
}
