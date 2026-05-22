/*
 * XREFs of ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800F9A80
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1800F9AA0 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 */

bool __fastcall MPCGamepadProcessor::IsEndOfCapture(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  return !MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 32));
}
