/*
 * XREFs of MIDL_user_free @ 0x140943C00
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406F5400 (PiDqIrpPropertySet.c)
 *     PiSwIrpPropertySet @ 0x140744064 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14077A2D0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14077A424 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14077A8C4 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
