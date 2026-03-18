/*
 * XREFs of ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z @ 0x1801F68F8
 * Callers:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z @ 0x1801F68F8 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801F7910 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801F80D0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z @ 0x1801F68F8 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z.c)
 */

bool __fastcall CManipulationContext::CheckForSingleTarget(const struct CInteraction *a1, const struct InputSinks *a2)
{
  const struct CInteraction *v3; // rdi
  bool result; // al

  if ( *((_QWORD *)a1 + 8) != *(_QWORD *)a2
    || *((_QWORD *)a1 + 9) != *((_QWORD *)a2 + 1)
    || *((_QWORD *)a1 + 10) != *((_QWORD *)a2 + 2)
    || *((_QWORD *)a1 + 11) != *((_QWORD *)a2 + 3) )
  {
    return 0;
  }
  v3 = (const struct CInteraction *)*((_QWORD *)a1 + 29);
  result = 1;
  do
  {
    if ( !v3 )
      break;
    result = CManipulationContext::CheckForSingleTarget(v3, a2);
    v3 = (const struct CInteraction *)*((_QWORD *)v3 + 27);
  }
  while ( result );
  return result;
}
