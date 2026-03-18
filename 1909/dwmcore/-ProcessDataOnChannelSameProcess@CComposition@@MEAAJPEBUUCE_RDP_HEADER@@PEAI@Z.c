/*
 * XREFs of ?ProcessDataOnChannelSameProcess@CComposition@@MEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180159AF0
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EB7B0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     _lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_ @ 0x18015A230 (_lambda_735079264b3842ed665395672707c8d3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall __noreturn CComposition::ProcessDataOnChannelSameProcess(
        CComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  ModuleFailFastForHRESULT(-2147418113, retaddr);
}
