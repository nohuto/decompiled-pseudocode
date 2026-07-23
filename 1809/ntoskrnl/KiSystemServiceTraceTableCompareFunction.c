/*
 * XREFs of KiSystemServiceTraceTableCompareFunction @ 0x140845EC4
 * Callers:
 *     KiGetSystemServiceTraceTable @ 0x140845D74 (KiGetSystemServiceTraceTable.c)
 *     KiTrackSystemCallEntry @ 0x140845EE0 (KiTrackSystemCallEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSystemServiceTraceTableCompareFunction(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 >= a1 )
    return v2 > a1;
  else
    return 0xFFFFFFFFLL;
}
