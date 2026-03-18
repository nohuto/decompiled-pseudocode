/*
 * XREFs of IsPTPInputEnabled @ 0x1C019ACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // edx

  v0 = 0;
  if ( gPTPEnabled )
    return (gTouchPadParameters[5] & 8) != 0;
  return v0;
}
