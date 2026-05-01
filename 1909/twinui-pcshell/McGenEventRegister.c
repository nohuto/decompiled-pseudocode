/*
 * XREFs of McGenEventRegister @ 0x180124CD8
 * Callers:
 *     DllMain @ 0x18008E868 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventRegister(__int64 a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  ULONG result; // eax

  result = 0;
  if ( !*a4 )
    return EventRegister(&MICROSOFT_TWINUI_PUBLISHER, (PENABLECALLBACK)McGenControlCallbackV2, a3, a4);
  return result;
}
