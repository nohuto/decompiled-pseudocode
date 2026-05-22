/*
 * XREFs of ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z @ 0x1800EC3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::OnSystemContextNotification(GazeProcessor *this, struct SystemContextMessage *a2)
{
  if ( *(_DWORD *)a2 == 1 )
    return GazeProcessor::UpdateDeviceTransformsFromInputConfig((GazeProcessor *)((char *)this - 8), a2);
  else
    return 0LL;
}
