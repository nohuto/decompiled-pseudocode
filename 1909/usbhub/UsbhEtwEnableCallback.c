/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C002C4C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1C006F650 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1C006F650 = 0;
  }
}
