/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140343E00
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x140285070 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x140289FC0 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140343D80 (HviGetHardwareFeatures.c)
 *     HviGetIptFeatures @ 0x140343EE4 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140851018 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
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
