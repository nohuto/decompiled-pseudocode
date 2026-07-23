/*
 * XREFs of PnpMarkHalDeviceNode @ 0x1409DDA48
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 */

__int64 PnpMarkHalDeviceNode()
{
  __int64 result; // rax
  __int64 i; // rcx

  result = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)i )
  {
    result = (unsigned int)(*(_DWORD *)(i + 300) - 775);
    if ( (unsigned int)result <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      return PipSetDevNodeFlags(i, 4);
    }
  }
  return result;
}
