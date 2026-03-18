/*
 * XREFs of CleanupMediaChange @ 0x1C0113610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR CleanupMediaChange()
{
  LONG_PTR result; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    result = ObfDereferenceObject(WPP_MAIN_CB.Queue.ListEntry.Blink);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
  return result;
}
