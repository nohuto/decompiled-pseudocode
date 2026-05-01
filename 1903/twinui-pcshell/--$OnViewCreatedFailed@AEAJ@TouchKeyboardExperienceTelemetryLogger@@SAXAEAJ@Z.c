/*
 * XREFs of ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x18030C514
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803127C0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>(__int64 a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         a1,
         lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v3, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v10 = 0;
      v13 = 0;
      v9 = 4;
      v11 = &v6;
      v8 = a1;
      v6 = 0x1000000LL;
      v12 = 8;
      LOBYTE(v2) = TlgWrite(v4, &unk_1804D9289, 0LL, 0LL, 4u, &pData);
    }
  }
  return v2;
}
