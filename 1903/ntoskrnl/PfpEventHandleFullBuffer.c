/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1401239D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x140123A18 (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_1404677E0.Alignment);
    if ( LOWORD(stru_1404677E0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
