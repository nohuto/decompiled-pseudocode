/*
 * XREFs of StorpTelemetryMiniportEvent @ 0x1C001FFE8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0020080 (StorpTelemetryMiniportEventUnit.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C004DC04 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C004DF08 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C005001C (StorpTelemetryMiniportEventAdapter.c)
 */

__int64 __fastcall StorpTelemetryMiniportEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 Unit; // rax
  __int64 v5; // r14
  int v11; // [rsp+58h] [rbp+20h]

  Unit = 0LL;
  v5 = 0LL;
  HIBYTE(v11) = 0;
  if ( a2 && *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
  {
    v5 = a2;
    LOWORD(v11) = *(_WORD *)(a2 + 8);
    BYTE2(v11) = *(_BYTE *)(a2 + 10);
    Unit = RaidAdapterFindUnit(a1, v11);
  }
  if ( a4 == 1 )
  {
    if ( a2 )
      return StorpMeasuresMiniportEventUnit(a1, Unit, v5, a3);
    else
      return StorpMeasuresMiniportEventAdapter(a1, a3);
  }
  else if ( a2 )
  {
    return StorpTelemetryMiniportEventUnit(a1, Unit, v5, a3);
  }
  else
  {
    return StorpTelemetryMiniportEventAdapter(a1, a3);
  }
}
