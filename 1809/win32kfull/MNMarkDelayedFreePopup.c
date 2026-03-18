/*
 * XREFs of MNMarkDelayedFreePopup @ 0x1C01F9E68
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
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
