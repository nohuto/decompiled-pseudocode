/*
 * XREFs of IoQueryDeviceNodeDirectedDripsFlags @ 0x14028B520
 * Callers:
 *     PopReadyParentSleep @ 0x14056DC30 (PopReadyParentSleep.c)
 *     PopQueryCurrentBroadcastProperties @ 0x1408707C4 (PopQueryCurrentBroadcastProperties.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoQueryDeviceNodeDirectedDripsFlags(__int64 a1, bool *a2, bool *a3, bool *a4)
{
  bool result; // al

  if ( a2 )
    *a2 = (*(_DWORD *)(a1 + 704) & 0x6000) != 0 || (*(_DWORD *)(a1 + 296) & 0x100) != 0;
  if ( a3 )
  {
    result = (*(_DWORD *)(a1 + 704) & 0x8000) != 0;
    *a3 = result;
  }
  if ( a4 )
  {
    result = (*(_DWORD *)(a1 + 704) & 0x10000) == 0;
    *a4 = result;
  }
  return result;
}
