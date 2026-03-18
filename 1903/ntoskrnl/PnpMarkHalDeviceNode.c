/*
 * XREFs of PnpMarkHalDeviceNode @ 0x140A1FC60
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 */

__int64 PnpMarkHalDeviceNode()
{
  __int64 result; // rax
  __int64 i; // rcx

  result = (__int64)IopRootDeviceNode;
  for ( i = *((_QWORD *)IopRootDeviceNode + 1); i; i = *(_QWORD *)i )
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
