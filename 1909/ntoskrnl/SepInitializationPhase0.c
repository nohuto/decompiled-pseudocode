/*
 * XREFs of SepInitializationPhase0 @ 0x140A014A0
 * Callers:
 *     SeInitSystem @ 0x1409FEF7C (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14068556C (ObInitializeFastReference.c)
 *     SepVariableInitialization @ 0x1409FEFAC (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x140A01A5C (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140A02560 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140A0260C (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x140A1CA48 (SepRmDbInitialization.c)
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
  *($0C1BE2699A312A75424054B216B8DB7A *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
