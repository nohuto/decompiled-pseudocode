/*
 * XREFs of VfDriverInitSuccess @ 0x1409606C8
 * Callers:
 *     MmCallDllInitialize @ 0x1407441F0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x1409667B8 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
