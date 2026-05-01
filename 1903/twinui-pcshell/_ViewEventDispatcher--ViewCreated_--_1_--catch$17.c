/*
 * XREFs of _ViewEventDispatcher::ViewCreated_::_1_::catch$17 @ 0x180271E1F
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180285420 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewCreated_::_1_::catch_17(__int64 a1, __int64 a2)
{
  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)(a2 + 152) + 496LL),
    *(unsigned int *)(a2 + 64),
    *(_QWORD *)(a2 + 120),
    1LL);
  return &loc_180271D73;
}
