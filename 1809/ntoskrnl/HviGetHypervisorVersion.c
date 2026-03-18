/*
 * XREFs of HviGetHypervisorVersion @ 0x140322310
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4C88 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlpHvIdentityInfoCallback @ 0x1402711D0 (HvlpHvIdentityInfoCallback.c)
 *     HvlPhase0Initialize @ 0x1407259E8 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x140817538 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DBB0 (HviIsHypervisorMicrosoftCompatible.c)
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
