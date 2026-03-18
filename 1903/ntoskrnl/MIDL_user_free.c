/*
 * XREFs of MIDL_user_free @ 0x140944190
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     PiSwIrpPropertySet @ 0x140742164 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140776CF0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140776E44 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407772E4 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
