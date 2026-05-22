/*
 * XREFs of ?Thunk_AttachClient_0@?$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180033320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IPenEventsDispatcherPrincipal_Receive<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::Thunk_AttachClient_0(
        BamoImpl::BamoPenEventsDispatcherPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoPenEventsDispatcherPrincipalImpl::AttachClient(a1, **a2);
}
