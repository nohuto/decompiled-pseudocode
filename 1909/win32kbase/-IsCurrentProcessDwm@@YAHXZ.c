/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002C0F4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BC484 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  PVOID CurrentProcess; // rcx
  _BOOL8 result; // rax

  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2);
  result = 0LL;
  if ( CurrentProcess )
    return CurrentProcess == g_pepDwm;
  return result;
}
