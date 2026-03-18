/*
 * XREFs of KiSetProcessorIdle @ 0x14013AB5C
 * Callers:
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140014610 (KiGroupSchedulingGenerationEnd.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1405A1ABC (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 192);
  result = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 25016);
    if ( v6 )
      *(_BYTE *)(v6 + 16) = 1;
    *(_BYTE *)(a1 + 11883) = a3;
    if ( (result & 1) != 0 )
    {
      v7 = result - 1;
      *(_BYTE *)(a1 + 35) = v7;
      if ( !v7 )
        _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
      _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 209));
      v8 = *(_QWORD *)(a1 + 24920);
      result = *(_QWORD *)(v3 + 16) & v8;
      if ( result == v8 )
        _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v8);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v5 = result + 1;
    *(_BYTE *)(a1 + 35) = v5;
    if ( v5 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 209));
    result = ~*(_QWORD *)(a1 + 24920);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), result);
  }
  return result;
}
