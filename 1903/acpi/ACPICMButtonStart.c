/*
 * XREFs of ACPICMButtonStart @ 0x1C00A310C
 * Callers:
 *     ACPICMPowerButtonStart @ 0x1C00A30F0 (ACPICMPowerButtonStart.c)
 *     ACPICMExperienceButtonStart @ 0x1C00ADC80 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1C00ADDE0 (ACPICMLidStart.c)
 *     ACPICMSleepButtonStart @ 0x1C00ADE00 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             BugCheckParameter3,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
