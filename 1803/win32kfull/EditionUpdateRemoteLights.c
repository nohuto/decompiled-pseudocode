/*
 * XREFs of EditionUpdateRemoteLights @ 0x1C0113C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS EditionUpdateRemoteLights()
{
  NTSTATUS result; // eax

  result = gfRemotingConsole;
  if ( gfRemotingConsole )
    return ZwDeviceIoControlFile(
             ghConsoleShadowKeyboardChannel,
             0LL,
             0LL,
             0LL,
             giosbKbdControl,
             0xB0008u,
             gklp,
             4u,
             0LL,
             0);
  return result;
}
