/*
 * XREFs of ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800C2014
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x1800C1C60 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801D7184 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CInteractionContextWrapper::operator new()
{
  LPVOID result; // rax
  __int64 v1; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x280uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v1);
  return result;
}
