/*
 * XREFs of ?Thunk_OnInteractiveIntentGesture_43@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180116440
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractiveIntentGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJPEAULegacyDeviceInfo@@IIII_KI@Z @ 0x180115C28 (-OnInteractiveIntentGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJPEAULegacyDeviceInf.c)
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnInteractiveIntentGesture_43(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnInteractiveIntentGesture(
           a1,
           *(struct LegacyDeviceInfo **)a2,
           **(_DWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16),
           **(_DWORD **)(a2 + 24),
           **(_DWORD **)(a2 + 32),
           **(_QWORD **)(a2 + 40),
           **(_DWORD **)(a2 + 48));
}
