/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x140060100
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005DEF0 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005E39C (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005E73C (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2)
{
  int ObjectsAvailableForRendering; // edi
  __int64 result; // rax
  unsigned int v6; // edx
  void *v7; // rcx
  unsigned __int32 State; // eax
  unsigned __int32 v9; // r8d
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
  {
    ObjectsAvailableForRendering = -2147467261;
LABEL_19:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount",
      91,
      ObjectsAvailableForRendering);
    return (unsigned int)ObjectsAvailableForRendering;
  }
  *a2 = 0;
  if ( !*((_BYTE *)this + 56) )
  {
    ObjectsAvailableForRendering = -2005139437;
    goto LABEL_19;
  }
  if ( *((_BYTE *)this + 1056) )
  {
    result = 0LL;
    *a2 = *((_DWORD *)this + 261);
    return result;
  }
  ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering(
                                   (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)this - 2,
                                   (unsigned int *)this + 260,
                                   (unsigned int *)this + 261);
  if ( ObjectsAvailableForRendering < 0 )
    goto LABEL_19;
  ObjectsAvailableForRendering = (*(__int64 (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, int *, int *))(*(_QWORD *)this + 64LL))(
                                   this,
                                   &v11,
                                   &v10);
  if ( ObjectsAvailableForRendering < 0
    || (ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
                                         (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                                         (unsigned int *)this + 263),
        ObjectsAvailableForRendering < 0) )
  {
    State = PingPongState::GetState((__int64)this + 152);
    if ( State != 17 )
    {
      do
      {
        if ( State > 0x10 )
          break;
        v9 = State;
        State = _InterlockedCompareExchange(
                  *((volatile signed __int32 **)this + 36),
                  `PingPongState::AbortWrite'::`2'::nextState[State],
                  State);
      }
      while ( v9 != State );
    }
  }
  else
  {
    v6 = v10 + v11;
    v7 = (void *)*((_QWORD *)this + 118);
    if ( v7 && v6 <= *((_DWORD *)this + 234) )
    {
      *((_DWORD *)this + 230) = v6;
      *((_DWORD *)this + 231) = 0;
      if ( v6 )
        memset_0(v7, 0, 4LL * v6);
    }
    *a2 = *((_DWORD *)this + 261);
    *((_BYTE *)this + 1056) = 1;
  }
  if ( ObjectsAvailableForRendering < 0 )
    goto LABEL_19;
  return (unsigned int)ObjectsAvailableForRendering;
}
