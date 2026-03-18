/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1401228C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x140122908 (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(struct _SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_14043BD20.Alignment);
    if ( LOWORD(stru_14043BD20.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
