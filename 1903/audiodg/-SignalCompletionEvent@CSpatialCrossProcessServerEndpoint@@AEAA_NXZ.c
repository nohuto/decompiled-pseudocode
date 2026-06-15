/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F65C
 * Callers:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005EFCC (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032A10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140036EE8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     WPP_SF_dq @ 0x14005395C (WPP_SF_dq.c)
 *     ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005A368 (-LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D7A0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(CSpatialCrossProcessServerEndpoint *this)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const GUID *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 125);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 125);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_1c85ab2a3ce43051f8fb91f3cfc52dc1_Traceguids,
        *((_DWORD *)this + 27),
        v1);
      v4 = *((_QWORD *)this + 125);
    }
    _InterlockedExchange64((volatile __int64 *)this + 124, v4);
    v5 = *((_QWORD *)this + 123);
    v13 = (wil::details *)*((_QWORD *)this + 124);
    *((_QWORD *)this + 123) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(
           (_QWORD *)this + 123,
           &v13);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        (const char *)(unsigned int)v6);
    v7 = *((_QWORD *)this + 112);
    *((_QWORD *)this + 125) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v7 + 72), 0x20u);
  }
  if ( *((_QWORD *)this + 123) )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
    {
      CSpatialCrossProcessEndpointTraceLogger::LogSetClientEvent(
        (CSpatialCrossProcessServerEndpoint *)((char *)this + 400),
        v8,
        v9,
        v10);
      SetEvent(*((HANDLE *)this + 124));
      return 1;
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_1c85ab2a3ce43051f8fb91f3cfc52dc1_Traceguids);
  }
  return v2;
}
