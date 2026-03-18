/*
 * XREFs of HviGetHypervisorInterface @ 0x14018C1D0
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018C180 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x140284DD0 (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x140850718 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741825LL;
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
