/*
 * XREFs of McTemplateU0q @ 0x140005108
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001C60 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140002E30 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x140005068 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0q(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v5[16]; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v7 = 4LL;
  v4 = 0;
  v6 = &v4;
  return McGenEventWrite(Microsoft_Windows_Dwm_Dwm_Provider_Context, (__int64)&StartDWMTransport, a3, 2, (__int64)v5);
}
