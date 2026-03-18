/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0126510
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 *     _SetDoubleClickTime @ 0x1C0126440 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_WORD *)(v1 + 42);
  if ( (v2 & 0x1000) != 0 || (v2 & 0x2FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 264);
  return *(_QWORD *)(v1 + 296);
}
