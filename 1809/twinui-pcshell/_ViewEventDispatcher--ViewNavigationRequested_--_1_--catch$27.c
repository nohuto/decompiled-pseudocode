/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$27 @ 0x18021D425
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180230120 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::catch_27(__int64 a1, __int64 a2)
{
  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)(a2 + 208) + 512LL),
    *(unsigned int *)(a2 + 144),
    0LL,
    1LL);
  return &loc_18021D26E;
}
