/*
 * XREFs of McTemplateU0zqq @ 0x1801A851C
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800DCDA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z @ 0x1801A82D4 (-SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800B6720 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a4;
  v8 = 10LL;
  v10 = 4LL;
  v7 = L"FSVP";
  v12 = 4LL;
  v9 = &v13;
  v11 = &a5;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_PUBLISH_SEB_NOTIFICATION,
           a3,
           4u,
           &v6);
}
