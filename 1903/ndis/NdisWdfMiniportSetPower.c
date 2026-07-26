/*
 * XREFs of NdisWdfMiniportSetPower @ 0x1C009EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A7128 (ndisWdfNotifySystemPower.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00B9200 (ndisSelectiveSuspendClearStop.c)
 */

__int64 __fastcall NdisWdfMiniportSetPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        int a3,
        enum _NDIS_DEVICE_POWER_STATE a4)
{
  __int64 result; // rax

  if ( (unsigned int)(a2 - 2) <= 4 )
    ndisWdfNotifySystemPower((char)a1, a3, a4);
  result = ndisWdfNotifyDevicePower(a1);
  if ( a3 == 1 )
  {
    result = (unsigned int)(a2 - 2);
    if ( (unsigned int)result <= 1 )
    {
      if ( a1->SelectiveSuspend )
        return ndisSelectiveSuspendClearStop((char)a1, 6);
    }
  }
  return result;
}
