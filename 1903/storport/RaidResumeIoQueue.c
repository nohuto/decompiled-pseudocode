/*
 * XREFs of RaidResumeIoQueue @ 0x1C00021EC
 * Callers:
 *     RaidResumeUnitQueue @ 0x1C00020C4 (RaidResumeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0046BE8 (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003783C (WPP_SF_.c)
 */

__int64 __fastcall RaidResumeIoQueue(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_772facc504a834290d533c89211024ca_Traceguids);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
    return 0;
  }
  else
  {
    v3 = 0;
    if ( !v2 )
    {
      v3 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 184), 1);
    }
  }
  return v3;
}
