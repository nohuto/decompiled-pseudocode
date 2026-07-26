/*
 * XREFs of ?ndisBootDriverReinit@@YAXPEAU_DRIVER_OBJECT@@PEAXK@Z @ 0x1C003F780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisBootDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisDriverReinit, Context);
}
