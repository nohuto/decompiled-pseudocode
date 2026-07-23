/*
 * XREFs of SepInitializationPhase0 @ 0x140A00F84
 * Callers:
 *     SeInitSystem @ 0x1409FEA60 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x140691FFC (ObInitializeFastReference.c)
 *     SepVariableInitialization @ 0x1409FEA90 (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x140A01540 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140A02044 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140A020F0 (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x140A1C86C (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  ULONG_PTR SystemToken; // rax

  if ( !SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *($3B2F3BCC17ED4CEE0C65CF31B442AA49 *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
