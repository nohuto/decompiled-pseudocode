/*
 * XREFs of ?Thunk_CancelDrag_95@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180069170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragNDropContextualProcessorPrincipal_Receive<BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl>::Thunk_CancelDrag_95(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::CancelDrag(a1, **a2, *a2[1]);
}
