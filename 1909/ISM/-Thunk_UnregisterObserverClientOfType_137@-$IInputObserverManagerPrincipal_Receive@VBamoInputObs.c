/*
 * XREFs of ?Thunk_UnregisterObserverClientOfType_137@?$IInputObserverManagerPrincipal_Receive@VBamoInputObserverManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180067A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputObserverManagerPrincipal_Receive<BamoImpl::BamoInputObserverManagerPrincipalImpl>::Thunk_UnregisterObserverClientOfType_137(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoInputObserverManagerPrincipalImpl::UnregisterObserverClientOfType(a1, **a2, *a2[1]);
}
