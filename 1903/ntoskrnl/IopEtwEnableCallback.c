/*
 * XREFs of IopEtwEnableCallback @ 0x140853D80
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x140293BB4 (IopIrpExtensionControl.c)
 */

void __fastcall IopEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( ControlCode != 1 )
      return;
  }
  else
  {
    ControlCode = 0;
  }
  IopIrpExtensionControl(1, ControlCode);
}
