/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800BA870
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BDD18 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800BF060 (std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOA_ea_1800BF060.c)
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800BF130 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_1800BF130.c)
 *     std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800BF230 (std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE__ea_1800BF230.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800BFC10 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800F961C (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const unsigned __int16 *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  GUID *v3; // rdi
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  TraceLoggingHProvider v10; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  *(_QWORD *)this = a2;
  v3 = (GUID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v5 = (_OWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( a3 )
  {
    v6 = *(_OWORD *)((char *)a3 + 8);
    *((_QWORD *)this + 5) = v5;
    *v5 = v6;
  }
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        0LL,
                                        lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 )
  {
    if ( TlgKeywordOn(v7, 1uLL) )
    {
      EventActivityIdControl(3u, v3);
      v9 = wil::details::static_lazy<InputTraceLogging>::get(
             v8,
             lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v9[1] > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)v9[1], 1uLL) )
        {
          TlgCreateWsz(&pDesc, *(LPCWSTR *)this);
          TlgWrite(v10, &unk_18019D947, v3, *((LPCGUID *)this + 5), 3u, &pData);
        }
      }
    }
  }
  return this;
}
