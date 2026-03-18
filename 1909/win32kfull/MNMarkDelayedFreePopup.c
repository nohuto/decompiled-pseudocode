/*
 * XREFs of MNMarkDelayedFreePopup @ 0x1C02105EC
 * Callers:
 *     xxxMNStartMenuState @ 0x1C0210DE4 (xxxMNStartMenuState.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNMarkDelayedFreePopup(_QWORD **a1, __int64 *a2)
{
  __int64 result; // rax

  *(_DWORD *)**a1 |= 0x10000u;
  result = *a2;
  if ( *(_QWORD *)*a2 )
  {
    *(_QWORD *)(**a1 + 72LL) = *(_QWORD *)(*(_QWORD *)*a2 + 72LL);
    *(_DWORD *)**a1 |= 0x20000000u;
    result = *a2;
    *(_QWORD *)(*(_QWORD *)*a2 + 72LL) = **a1;
  }
  return result;
}
