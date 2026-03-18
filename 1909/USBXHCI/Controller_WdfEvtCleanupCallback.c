/*
 * XREFs of Controller_WdfEvtCleanupCallback @ 0x1C0012960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_RemoveControllerFromGlobalControllerList @ 0x1C000FF50 (Controller_RemoveControllerFromGlobalControllerList.c)
 *     Etw_ControllerDelete @ 0x1C003E45C (Etw_ControllerDelete.c)
 *     Controller_DestroySecureObject @ 0x1C00601F0 (Controller_DestroySecureObject.c)
 */

__int64 __fastcall Controller_WdfEvtCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C0056428);
  Controller_DestroySecureObject(v1);
  Controller_RemoveControllerFromGlobalControllerList(v1);
  return Etw_ControllerDelete(v2, v1);
}
