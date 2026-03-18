/*
 * XREFs of SepSetTrustLevelForProcessToken @ 0x1400D9DF4
 * Callers:
 *     SeSubProcessToken @ 0x14064EA6C (SeSubProcessToken.c)
 *     SeExchangePrimaryToken @ 0x140748BB8 (SeExchangePrimaryToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7DD0 (RtlEqualSid.c)
 *     SepSidFromProcessProtection @ 0x1400ABACC (SepSidFromProcessProtection.c)
 *     SepSetTokenTrust @ 0x1406A4688 (SepSetTokenTrust.c)
 */

__int64 __fastcall SepSetTrustLevelForProcessToken(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  void *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 1738);
  *a3 = 0;
  v5 = (void *)SepSidFromProcessProtection(&v9);
  v6 = *(void **)(a1 + 1104);
  v7 = v5;
  if ( v6 )
  {
    if ( v5 && RtlEqualSid(v6, v5) )
      return 0LL;
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  result = SepSetTokenTrust(a1, v7);
  if ( (int)result >= 0 )
    *a3 = 1;
  return result;
}
