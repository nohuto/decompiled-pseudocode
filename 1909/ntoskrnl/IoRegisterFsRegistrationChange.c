/*
 * XREFs of IoRegisterFsRegistrationChange @ 0x140855F70
 * Callers:
 *     <none>
 * Callees:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140784E10 (IoRegisterFsRegistrationChangeMountAware.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  return IoRegisterFsRegistrationChangeMountAware(DriverObject, DriverNotificationRoutine, 0);
}
