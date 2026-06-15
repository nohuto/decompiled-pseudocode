/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005E0B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005BEA0 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C34C (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C6CC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2)
{
  int ObjectsAvailableForRendering; // edi
  unsigned int *v5; // r14
  unsigned int v6; // edx
  void *v7; // rcx
  unsigned __int32 State; // eax
  unsigned __int32 v9; // r8d
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  ObjectsAvailableForRendering = 0;
  if ( !a2 )
  {
    ObjectsAvailableForRendering = -2147467261;
LABEL_19:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount",
      92,
      ObjectsAvailableForRendering);
    return (unsigned int)ObjectsAvailableForRendering;
  }
  *a2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    ObjectsAvailableForRendering = -2005139437;
    goto LABEL_19;
  }
  v5 = (unsigned int *)((char *)this + 1052);
  if ( *((_BYTE *)this + 1064) )
  {
    *a2 = *v5;
  }
  else
  {
    ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering(
                                     (const struct ControlData **)this - 2,
                                     (unsigned int *)this + 262,
                                     (unsigned int *)this + 263);
    if ( ObjectsAvailableForRendering < 0 )
      goto LABEL_19;
    ObjectsAvailableForRendering = (*(__int64 (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, int *, int *))(*(_QWORD *)this + 64LL))(
                                     this,
                                     &v12,
                                     &v11);
    if ( ObjectsAvailableForRendering < 0
      || (ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
                                           (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                                           (unsigned int *)this + 265),
          ObjectsAvailableForRendering < 0) )
    {
      State = PingPongState::GetState((__int64)this + 176);
      if ( State != 17 )
      {
        do
        {
          if ( State > 0x10 )
            break;
          v9 = State;
          State = _InterlockedCompareExchange(
                    *((volatile signed __int32 **)this + 39),
                    `PingPongState::AbortWrite'::`2'::nextState[State],
                    State);
        }
        while ( v9 != State );
      }
    }
    else
    {
      v6 = v11 + v12;
      v7 = (void *)*((_QWORD *)this + 119);
      if ( v7 )
      {
        if ( v6 <= *((_DWORD *)this + 236) )
        {
          *((_DWORD *)this + 233) = 0;
          *((_DWORD *)this + 232) = v6;
          if ( v6 )
            memset_0(v7, 0, 4LL * v6);
        }
      }
      *a2 = *v5;
      *((_BYTE *)this + 1064) = 1;
    }
    if ( ObjectsAvailableForRendering < 0 )
      goto LABEL_19;
  }
  return (unsigned int)ObjectsAvailableForRendering;
}
