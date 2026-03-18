/*
 * XREFs of ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018A200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_SetBootstrapProxy_5(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 24LL),
           a1,
           **a2);
}
