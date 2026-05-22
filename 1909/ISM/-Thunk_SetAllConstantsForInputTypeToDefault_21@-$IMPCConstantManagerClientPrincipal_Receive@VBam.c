/*
 * XREFs of ?Thunk_SetAllConstantsForInputTypeToDefault_21@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008AED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_SetAllConstantsForInputTypeToDefault_21(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetAllConstantsForInputTypeToDefault(a1, **a2, *a2[1]);
}
