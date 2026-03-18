/*
 * XREFs of HviGetIptFeatures @ 0x140343EE4
 * Callers:
 *     KiGetIptInfo @ 0x140195310 (KiGetIptInfo.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018B7F0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140343E00 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HviGetIptFeatures(_DWORD *a1)
{
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v8[0] = 0LL;
  v8[1] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX
    && (LOBYTE(_RAX) = HviGetHypervisorVendorAndMaxFunction(v8), LODWORD(v8[0]) >= 0x4000000B)
    && (LOBYTE(_RAX) = HviGetHypervisorFeatures(&v9), (v10 & 0x800000000000000LL) != 0) )
  {
    _RAX = 1073741835LL;
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
