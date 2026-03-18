/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x1403222C0
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1402711D0 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x140275D40 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140322250 (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x140817538 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176B90 (HviIsAnyHypervisorPresent.c)
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
