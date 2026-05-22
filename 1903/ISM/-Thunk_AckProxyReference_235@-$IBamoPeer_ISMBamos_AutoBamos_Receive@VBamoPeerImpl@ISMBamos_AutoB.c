/*
 * XREFs of ?Thunk_AckProxyReference_235@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18002ECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_235(
        Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  return Microsoft::BamoImpl::BaseBamoPeerImpl::AckProxyReference(a1, **(_DWORD **)a2, **(_BYTE **)(a2 + 8));
}
