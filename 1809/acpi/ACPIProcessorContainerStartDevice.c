/*
 * XREFs of ACPIProcessorContainerStartDevice @ 0x1C00AE2B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPIProcessorContainerStartDevice(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v5; // r8
  __int64 result; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension + 25;
  DeviceExtension += 27;
  v5[1] = v5;
  *v5 = v5;
  DeviceExtension[1] = DeviceExtension;
  *DeviceExtension = DeviceExtension;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIProcessorContainerStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
