/*
 * XREFs of SepInitializationPhase0 @ 0x1409AE8C0
 * Callers:
 *     SeInitSystem @ 0x1409AC3BC (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14064FBA4 (ObInitializeFastReference.c)
 *     SepVariableInitialization @ 0x1409AC3EC (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x1409AEE18 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x1409AF8B8 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x1409AF964 (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x1409D9F90 (SepRmDbInitialization.c)
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
  *($75AA083C4A1F5100F19ADCB182604D40 *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
