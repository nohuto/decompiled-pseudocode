/*
 * XREFs of PiGetTargetDeviceNode @ 0x140730D4C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140730BF4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14087B46C (PiProcessQueryRemoveNoFdo.c)
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
