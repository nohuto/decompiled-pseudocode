/*
 * XREFs of ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180032EE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180031FFC (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     ?PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180032B28 (-PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007BA88 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::SetButtonRoutingPolicy(__int64 a1, __int64 a2, int a3)
{
  const struct _TlgProvider_t *v5; // rax
  const char *v6; // rax
  TraceLoggingHProvider v7; // r10
  PenEventsDispatcherPrincipal *v8; // rcx
  __int64 v9; // rdx
  char ButtonEventsSupportedFlag; // si
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  int v13; // eax
  UINT32 cData; // [rsp+20h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v5 > 4u && TlgKeywordOn(v5, 0x200uLL) )
  {
    v6 = InputTraceLogging::PenPolicyToString(a3);
    TlgCreateSz(&pDesc, v6);
    TlgWrite(v7, &unk_18019B46B, 0LL, 0LL, 3u, &pData);
  }
  PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag((PenEventsDispatcherPrincipal *)a1);
  *(_DWORD *)(a1 + 192) = a3;
  ButtonEventsSupportedFlag = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(v8);
  if ( (_BYTE)v9 != ButtonEventsSupportedFlag )
  {
    v11 = *(_QWORD **)(a1 + 64);
    for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
    {
      LOBYTE(v9) = ButtonEventsSupportedFlag;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 48LL))(i[3] + 8LL, v9);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pene"
                        "ventsdispatcherprincipal.cpp",
          (const char *)(unsigned int)v13,
          cData);
    }
  }
  return 0LL;
}
