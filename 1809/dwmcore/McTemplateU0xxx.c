/*
 * XREFs of McTemplateU0xxx @ 0x1801BA300
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18006EEB8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180204820 (-NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1802050C0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxx(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-50h] BYREF
  va_list v4; // [rsp+40h] [rbp-40h]
  __int64 v5; // [rsp+48h] [rbp-38h]
  va_list v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  va_list v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  va_list va; // [rsp+A0h] [rbp+20h]
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va1; // [rsp+A8h] [rbp+28h]
  va_list va2; // [rsp+B0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  va_copy(v8, va2);
  v9 = 8LL;
  return McGenEventWrite(a1, a2, v11, 4u, &v3);
}
