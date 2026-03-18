/*
 * XREFs of NtGetDevicePowerState @ 0x1408ABA20
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406AB7BC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PopLockGetDoDevicePowerState @ 0x1402F7784 (PopLockGetDoDevicePowerState.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IoGetRelatedTargetDevice @ 0x1406911F8 (IoGetRelatedTargetDevice.c)
 */

NTSTATUS __stdcall NtGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE PowerState)
{
  __int64 v3; // r8
  NTSTATUS result; // eax
  NTSTATUS RelatedTargetDevice; // ebx
  PVOID v6; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PowerState < 0x7FFFFFFF0000LL )
      v3 = (__int64)PowerState;
    *(_DWORD *)v3 = *(_DWORD *)v3;
  }
  result = ObReferenceObjectByHandle(
             Device,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &v8);
    ObfDereferenceObject(Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v6 = v8;
      *PowerState = PopLockGetDoDevicePowerState(*((_QWORD *)v8 + 39));
      ObfDereferenceObject(v6);
    }
    return RelatedTargetDevice;
  }
  return result;
}
