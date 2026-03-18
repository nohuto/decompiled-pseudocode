/*
 * XREFs of ?PowerCheckParentStateNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentStateNP(FxPkgPnp *This)
{
  unsigned __int8 waitForParentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( This->PowerCheckParentOverload(This, &waitForParentOn) >= 0 )
    return waitForParentOn != 0 ? 33584 : 33588;
  else
    return 33623LL;
}
