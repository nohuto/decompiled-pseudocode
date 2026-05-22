/*
 * XREFs of ?Thunk_SetConstantToDefault_16@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008B130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_SetConstantToDefault_16(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstantToDefault(
           a1,
           **(_DWORD **)a2,
           *(_QWORD *)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
