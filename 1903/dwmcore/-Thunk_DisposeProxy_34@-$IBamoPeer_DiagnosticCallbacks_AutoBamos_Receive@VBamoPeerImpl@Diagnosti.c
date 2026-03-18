/*
 * XREFs of ?Thunk_DisposeProxy_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018B7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_DisposeProxy_34(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 24LL),
           a1,
           **a2);
}
