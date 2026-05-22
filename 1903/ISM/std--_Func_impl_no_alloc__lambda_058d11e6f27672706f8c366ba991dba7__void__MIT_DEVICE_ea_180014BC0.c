/*
 * XREFs of std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const___::_Do_call @ 0x180014BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180014CE4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const___::_Do_call()
{
  __int64 v0; // rcx
  const struct _TlgProvider_t *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rax
  TraceLoggingHProvider v4; // r10
  LPCWSTR pwsz; // [rsp+30h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-70h] BYREF
  LPCGUID pRelatedActivityId; // [rsp+58h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-28h] BYREF

  pwsz = L"MITEP_DEVICE_IDENTIFICATION";
  memset_0(&ActivityId, 0, 0x20uLL);
  pRelatedActivityId = 0LL;
  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputTraceLogging>::get(
                                           v0,
                                           lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 )
  {
    if ( TlgKeywordOn(v1, 1uLL) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v3 = wil::details::static_lazy<InputTraceLogging>::get(
             v2,
             lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v3 + 8) > 6u )
      {
        if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 1uLL) )
        {
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite(v4, &unk_18019D947, &ActivityId, pRelatedActivityId, 3u, &pData);
        }
      }
    }
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&pwsz);
}
