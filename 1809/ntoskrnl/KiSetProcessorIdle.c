/*
 * XREFs of KiSetProcessorIdle @ 0x1400D73C4
 * Callers:
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x140572B50 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v7; // rdx
  int v8; // eax

  v3 = *(_QWORD *)(a1 + 192);
  result = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 25016);
    if ( v5 )
      *(_BYTE *)(v5 + 16) = 1;
    *(_BYTE *)(a1 + 11883) = a3;
    if ( (result & 1) != 0 )
    {
      v6 = result - 1;
      *(_BYTE *)(a1 + 35) = v6;
      if ( !v6 )
        _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
      _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 209));
      v7 = *(_QWORD *)(a1 + 24920);
      result = *(_QWORD *)(v3 + 16) & v7;
      if ( result == v7 )
        _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v7);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v8 = result + 1;
    *(_BYTE *)(a1 + 35) = v8;
    if ( v8 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 209));
    result = ~*(_QWORD *)(a1 + 24920);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), result);
  }
  return result;
}
