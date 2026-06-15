/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x1400615BC
 * Callers:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x140060EC4 (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_dq @ 0x140055F84 (WPP_SF_dq.c)
 *     ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005C40C (-LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005F760 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(CSpatialCrossProcessServerEndpoint *this)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const GUID *v8; // r9

  v1 = *((_QWORD *)this + 123);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 123);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_1eb75a32cc973e21c68a39f53babc24a_Traceguids,
        *((_DWORD *)this + 21),
        v1);
      v4 = *((_QWORD *)this + 123);
    }
    _InterlockedExchange64((volatile __int64 *)this + 122, v4);
    v5 = *((_QWORD *)this + 110);
    *((_QWORD *)this + 123) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v5 + 72), 0x20u);
  }
  if ( *((_QWORD *)this + 122) )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
    {
      CSpatialCrossProcessEndpointTraceLogger::LogSetClientEvent(
        (CSpatialCrossProcessServerEndpoint *)((char *)this + 384),
        v6,
        v7,
        v8);
      SetEvent(*((HANDLE *)this + 122));
      return 1;
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_1eb75a32cc973e21c68a39f53babc24a_Traceguids);
  }
  return v2;
}
