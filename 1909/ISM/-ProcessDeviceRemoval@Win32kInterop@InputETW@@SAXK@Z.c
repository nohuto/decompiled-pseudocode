/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BD1D8
 * Callers:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800BD068 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::Win32kInterop::ProcessDeviceRemoval(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = (unsigned int)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v3 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v2,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v3 > 5u )
    {
      if ( TlgKeywordOn(v3, 1uLL) )
      {
        v9 = 0;
        v7 = &v5;
        v5 = v1;
        v8 = 8;
        TlgWrite(v4, &unk_18019DAF4, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
