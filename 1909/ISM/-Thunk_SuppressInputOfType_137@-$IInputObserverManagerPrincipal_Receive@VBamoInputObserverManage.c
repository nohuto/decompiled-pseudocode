/*
 * XREFs of ?Thunk_SuppressInputOfType_137@?$IInputObserverManagerPrincipal_Receive@VBamoInputObserverManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800679E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputObserverManagerPrincipal_Receive<BamoImpl::BamoInputObserverManagerPrincipalImpl>::Thunk_SuppressInputOfType_137(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoInputObserverManagerPrincipalImpl::SuppressInputOfType(a1, **a2, *a2[1]);
}
