/*
 * XREFs of VfDriverInitSuccess @ 0x140921628
 * Callers:
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1409CB918 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x14092827C (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
