/*
 * XREFs of PspReadIFEOMitigationAuditOptions @ 0x140685294
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PspReadOptionsMapFromIFEO @ 0x140685310 (PspReadOptionsMapFromIFEO.c)
 *     PspValidateMitigationAuditOptions @ 0x1406DB400 (PspValidateMitigationAuditOptions.c)
 */

__int64 __fastcall PspReadIFEOMitigationAuditOptions(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm6
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0uLL;
  result = PspReadOptionsMapFromIFEO(a1, L"MitigationAuditOptions", &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    result = PspValidateMitigationAuditOptions(&v5);
    if ( (int)result >= 0 )
      *a2 = v4;
  }
  return result;
}
