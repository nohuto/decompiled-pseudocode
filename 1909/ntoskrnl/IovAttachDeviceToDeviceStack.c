/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140962C1C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400887D0 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     VfXdvDriverCaptureIoCallbacks @ 0x14095FF3C (VfXdvDriverCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x140974A88 (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    VfXdvDriverCaptureIoCallbacks(*(struct _DRIVER_OBJECT **)(a1 + 8));
    return IovUtilFlushStackCache(a2);
  }
  return result;
}
