/*
 * XREFs of ACPIProcessorContainerStartDevice @ 0x1C00B1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPIProcessorContainerStartDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v5; // r8
  __int64 result; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v5 = DeviceExtension + 25;
  DeviceExtension += 27;
  v5[1] = v5;
  *v5 = v5;
  DeviceExtension[1] = DeviceExtension;
  *DeviceExtension = DeviceExtension;
  result = ACPIInitStartDevice(
             BugCheckParameter3,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIProcessorContainerStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
