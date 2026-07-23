/*
 * XREFs of ExSvmDevicePowerCallback @ 0x14031DC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmDevicePowerCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a3;
  LOBYTE(a3) = a2 == 1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))HalIommuDispatch[16])(ExpSvmIommuSystemContext, v3, a3);
}
