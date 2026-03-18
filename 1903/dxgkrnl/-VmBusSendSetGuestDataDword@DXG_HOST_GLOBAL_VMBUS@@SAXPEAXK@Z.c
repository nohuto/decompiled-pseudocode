/*
 * XREFs of ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x1C003D770
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C003D6B0 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestDataDword(__int64 a1, int a2, const GUID *a3)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(a1, 0, a3, (struct _MDL *)&v3);
}
