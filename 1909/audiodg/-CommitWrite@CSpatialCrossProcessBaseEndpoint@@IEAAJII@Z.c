/*
 * XREFs of ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005BAD4
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x14005ED90 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C6CC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitWrite(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        __int32 a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 **v5; // rbp
  unsigned __int32 v6; // edi
  unsigned __int32 State; // eax
  __int64 v8; // r10
  bool i; // zf
  unsigned __int32 v10; // r11d
  unsigned int v11; // eax
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 > 1 )
  {
    v3 = -2005139345;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitWrite", 964, v3);
    return v3;
  }
  v5 = (volatile signed __int32 **)((char *)this + 192);
  v6 = 16;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 112) + 4LL * a2 + 32), a3);
  State = PingPongState::GetState((char *)this + 192);
  for ( i = State == 17; ; i = v10 == State )
  {
    v10 = State;
    if ( i )
      break;
    if ( State > 0x10 )
      goto LABEL_8;
    v6 = `PingPongState::CommitWrite'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v5[17], v6, State);
  }
  if ( State <= 0x10 )
    goto LABEL_9;
LABEL_8:
  v6 = 16;
LABEL_9:
  if ( *((_DWORD *)v5 + v6 + 17) == 3 )
  {
    v13 = 1;
    (**(void (__fastcall ***)(__int64, _QWORD, int *))(v8 + 752))(v8 + 752, 0LL, &v13);
    v3 = -2005139387;
    goto LABEL_11;
  }
  if ( a3 )
    v11 = *(_DWORD *)(v8 + 168);
  else
    v11 = 0;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v8 + 896) + 40LL), v11);
  return v3;
}
