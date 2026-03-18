/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00EA580
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00E9B58 (xxxCancelMouseMoveTracking.c)
 *     _SetDoubleClickTime @ 0x1C00EA4B0 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  __int64 v1; // rdx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v1 + 296);
}
