/*
 * XREFs of ApiSetEditionInputExtensibilityCallout @ 0x1C013EAEC
 * Callers:
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0120440 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01204D0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0120700 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = IsEditionInputExtensibilityCalloutSupported();
  if ( (int)result >= 0 )
    return EditionInputExtensibilityCallout(a1, a2);
  return result;
}
