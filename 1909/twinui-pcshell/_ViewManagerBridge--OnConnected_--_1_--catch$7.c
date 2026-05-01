/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::catch$7 @ 0x1802A758E
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180185708 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::OnConnected_::_1_::catch_7(wil *a1, __int64 a2)
{
  *(_DWORD *)(*(_QWORD *)(a2 + 80) + 140LL) = wil::ResultFromCaughtException(a1);
  return &loc_1802A7526;
}
