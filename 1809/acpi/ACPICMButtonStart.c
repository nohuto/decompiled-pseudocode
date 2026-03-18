/*
 * XREFs of ACPICMButtonStart @ 0x1C008E39C
 * Callers:
 *     ACPICMPowerButtonStart @ 0x1C008E1E0 (ACPICMPowerButtonStart.c)
 *     ACPICMExperienceButtonStart @ 0x1C00AA590 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1C00AA6F0 (ACPICMLidStart.c)
 *     ACPICMSleepButtonStart @ 0x1C00AA710 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
