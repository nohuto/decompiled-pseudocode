/*
 * XREFs of ?Thunk_ForcePrimaryInputType_5@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18007F900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCManagerPrincipal_Receive<BamoImpl::BamoMPCManagerPrincipalImpl>::Thunk_ForcePrimaryInputType_5(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoMPCManagerPrincipalImpl::ForcePrimaryInputType(a1, **a2);
}
