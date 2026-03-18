/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140343860
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x140284DD0 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x140289D20 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x1403437E0 (HviGetHardwareFeatures.c)
 *     HviGetIptFeatures @ 0x140343944 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140850718 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
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
