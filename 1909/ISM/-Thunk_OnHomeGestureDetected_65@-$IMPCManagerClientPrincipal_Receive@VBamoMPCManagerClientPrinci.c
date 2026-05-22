/*
 * XREFs of ?Thunk_OnHomeGestureDetected_65@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801162B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KI@Z @ 0x1801157A4 (-OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KI@Z.c)
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnHomeGestureDetected_65(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureDetected(
           a1,
           **(_DWORD **)a2,
           **(_DWORD **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
