/*
 * XREFs of ?PowerCheckParentStateArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentStateArmedForWake(FxPkgPnp *This)
{
  unsigned __int8 waitForParentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( This->PowerCheckParentOverload(This, &waitForParentOn) >= 0 )
    return waitForParentOn != 0 ? 809 : 792;
  else
    return 851LL;
}
