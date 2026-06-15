/*
 * XREFs of ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005BAC0
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005FDE0 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C78C (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitRead(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  volatile signed __int32 **v4; // rdi
  unsigned __int32 State; // eax
  unsigned __int32 v6; // r11d
  bool i; // zf
  unsigned __int32 v8; // r10d
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 > 1 )
  {
    v2 = -2147024809;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitRead", 991, v2);
    return v2;
  }
  v4 = (volatile signed __int32 **)((char *)this + 192);
  State = PingPongState::GetState((char *)this + 192);
  for ( i = State == 17; ; i = v8 == State )
  {
    v8 = State;
    if ( i )
      break;
    if ( State > 0x10 )
      goto LABEL_8;
    v6 = `PingPongState::CommitRead'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v4[17], v6, State);
  }
  if ( State <= 0x10 )
    goto LABEL_9;
LABEL_8:
  v6 = 16;
LABEL_9:
  if ( *((_DWORD *)v4 + v6) == 3 )
  {
    v10 = 1;
    (**((void (__fastcall ***)(char *, _QWORD, int *))this + 94))((char *)this + 752, 0LL, &v10);
    v2 = -2005139387;
    goto LABEL_11;
  }
  return v2;
}
