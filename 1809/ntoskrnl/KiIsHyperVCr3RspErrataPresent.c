/*
 * XREFs of KiIsHyperVCr3RspErrataPresent @ 0x1401B4C88
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x1401B4498 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationSupported @ 0x1401B473C (KiIsTsaMitigationSupported.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14017D6F0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1401863B0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     HviGetHypervisorVersion @ 0x140322310 (HviGetHypervisorVersion.c)
 */

_BOOL8 __fastcall KiIsHyperVCr3RspErrataPresent(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+2Ch] [rbp-1Ch]

  result = 0;
  if ( *(_BYTE *)(a1 + 141) == 1 && HviIsHypervisorVendorMicrosoft() )
  {
    HviGetHypervisorFeatures(&v2);
    if ( (v2 & 0x100000000000LL) == 0 )
    {
      HviGetHypervisorVersion(&v2);
      if ( (unsigned int)v2 < 0x429D && ((_DWORD)v2 != 14393 || (v3 & 0xFFFFFFu) < 0x1479) )
        return 1;
    }
  }
  return result;
}
