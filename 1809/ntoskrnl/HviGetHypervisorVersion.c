/*
 * XREFs of HviGetHypervisorVersion @ 0x140322600
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4DE8 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlpHvIdentityInfoCallback @ 0x1402714C0 (HvlpHvIdentityInfoCallback.c)
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x140818718 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DD10 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741826LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
