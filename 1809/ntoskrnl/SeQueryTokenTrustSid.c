/*
 * XREFs of SeQueryTokenTrustSid @ 0x140131588
 * Callers:
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
