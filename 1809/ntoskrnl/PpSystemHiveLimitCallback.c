/*
 * XREFs of PpSystemHiveLimitCallback @ 0x1408278F0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14015F004 (PnpRequestDeviceAction.c)
 *     PpResetProblemDevices @ 0x14083A70C (PpResetProblemDevices.c)
 */

__int64 __fastcall PpSystemHiveLimitCallback(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    PnpSystemHiveTooLarge = 0;
    PpResetProblemDevices();
    return PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 14, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    PnpSystemHiveTooLarge = 1;
  }
  return result;
}
