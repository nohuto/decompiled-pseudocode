/*
 * XREFs of ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800858E4
 * Callers:
 *     ?UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180088C60 (-UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180009D00 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 */

int __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(__int64 *a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                  (__int64)a1,
                  (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)v3 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)v3 + 3) )
    {
      v4 = *a1;
      v10 = 0;
      v6 = v4;
      v8 = &v6;
      v9 = 8;
      LODWORD(v2) = TlgWrite(v3, &unk_1800C81B9, 0LL, 0LL, 3u, &pData);
    }
  }
  return v2;
}
