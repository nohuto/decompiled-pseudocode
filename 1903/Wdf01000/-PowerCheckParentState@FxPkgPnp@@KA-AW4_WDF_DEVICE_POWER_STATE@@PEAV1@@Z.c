/*
 * XREFs of ?PowerCheckParentState@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00194D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentState(FxPkgPnp *This)
{
  unsigned __int8 waitForParentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( This->PowerCheckParentOverload(This, &waitForParentOn) < 0 )
    return 851LL;
  else
    return waitForParentOn != 0 ? 815 : 819;
}
