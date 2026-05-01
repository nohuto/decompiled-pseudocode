/*
 * XREFs of _lambda_7e0eba65ec7ba47035c550f2870caa0e_::operator() @ 0x1800B03C0
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_7e0eba65ec7ba47035c550f2870caa0e__&_::Run @ 0x1800B35A0 (wil--details--functor_wrapper_void__lambda_7e0eba65ec7ba47035c550f2870caa0e__-_--Run.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7e0eba65ec7ba47035c550f2870caa0e_::operator()(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = AppUsageTelemetry::Provider();
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x400000000000uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = 0x2000000LL;
    v8 = 8;
    TlgWrite(v3, &unk_180509E37, 0LL, 0LL, 3u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 248LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 248LL));
}
