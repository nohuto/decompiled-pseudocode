/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180014AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180012968 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180014CE4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?ComputePnpAction@Win32kInterop@@AEBA?AW4PnPHandlingAction@@W4_KnownRIMDeviceKind@@@Z @ 0x1800BB798 (-ComputePnpAction@Win32kInterop@@AEBA-AW4PnPHandlingAction@@W4_KnownRIMDeviceKind@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800BD1B8 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE **a2)
{
  const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *v3; // rbx
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  Win32kInterop *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  TraceLoggingHProvider v9; // r10
  Win32kInterop *v10; // rcx
  LPCWSTR pwsz; // [rsp+38h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-68h] BYREF
  LPCGUID pRelatedActivityId; // [rsp+60h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-20h] BYREF

  v3 = *a2;
  pwsz = L"MITEP_PNP_DEVICE_NOTIFICATION";
  memset_0(&ActivityId, 0, 0x20uLL);
  pRelatedActivityId = 0LL;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputTraceLogging>::get(
                                           v4,
                                           lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 )
  {
    if ( TlgKeywordOn(v5, 1uLL) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v8 = wil::details::static_lazy<InputTraceLogging>::get(
             v7,
             lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v8 + 8) > 6u )
      {
        if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v8 + 8), 1uLL) )
        {
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite(v9, &unk_18019D947, &ActivityId, pRelatedActivityId, 3u, &pData);
        }
      }
    }
  }
  v6 = *(Win32kInterop **)(a1 + 8);
  if ( *((_DWORD *)v3 + 2) == 2 )
  {
    if ( ((*(_DWORD *)v3 - 1) & 0xFFFFFFFC) == 0 && *(_DWORD *)v3 != 3 )
      Win32kInterop::ProcessDeviceArrival(v6, v3);
  }
  else if ( *((_DWORD *)v3 + 2) == 3 && (unsigned int)Win32kInterop::ComputePnpAction(v6, *(unsigned int *)v3) )
  {
    Win32kInterop::ProcessDeviceRemoval(v10, v3);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&pwsz);
}
