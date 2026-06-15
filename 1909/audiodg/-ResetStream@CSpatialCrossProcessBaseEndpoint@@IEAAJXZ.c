/*
 * XREFs of ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14005D814
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D730 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A3BC (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C6CC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ResetStream(CSpatialCrossProcessBaseEndpoint *this)
{
  unsigned __int32 State; // eax
  unsigned __int32 v3; // r8d

  CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 400),
    "Reset");
  _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 112) + 72LL), 0x10u);
  *(_QWORD *)(*((_QWORD *)this + 112) + 40LL) = 0LL;
  State = PingPongState::GetState((__int64)this + 192);
  if ( State != 17 )
  {
    do
    {
      if ( State > 0x10 )
        break;
      v3 = State;
      State = _InterlockedCompareExchange(
                *((volatile signed __int32 **)this + 41),
                `PingPongState::Reset'::`2'::nextState[State],
                State);
    }
    while ( v3 != State );
  }
  return 0LL;
}
