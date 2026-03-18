/*
 * XREFs of PiGetTargetDeviceNode @ 0x1406F00F4
 * Callers:
 *     PiCheckRemovalPreconditions @ 0x1406EF768 (PiCheckRemovalPreconditions.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406EFF98 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140840338 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiGetTargetDeviceNode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 152);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
