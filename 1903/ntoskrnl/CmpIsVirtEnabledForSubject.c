/*
 * XREFs of CmpIsVirtEnabledForSubject @ 0x1406ADA70
 * Callers:
 *     CmpIsSystemEntity @ 0x1406AD9C4 (CmpIsSystemEntity.c)
 * Callees:
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     CmpEffectiveTokenForSubject @ 0x1406ADAB8 (CmpEffectiveTokenForSubject.c)
 */

char __fastcall CmpIsVirtEnabledForSubject(__int64 a1)
{
  void *v1; // rax
  char v2; // bl
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(TokenInformation) = 0;
  v1 = (void *)CmpEffectiveTokenForSubject(a1, &v5);
  v2 = 1;
  if ( v5 != 1 )
    return 0;
  SeQueryInformationToken(v1, TokenVirtualizationEnabled, &TokenInformation);
  if ( !(_DWORD)TokenInformation )
    return 0;
  return v2;
}
