/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$27 @ 0x180292380
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1802A4880 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::catch_27(__int64 a1, __int64 a2)
{
  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)(a2 + 232) + 496LL),
    *(unsigned int *)(a2 + 136),
    0LL,
    1LL);
  return &loc_1802921CA;
}
