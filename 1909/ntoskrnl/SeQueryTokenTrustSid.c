/*
 * XREFs of SeQueryTokenTrustSid @ 0x1401319C4
 * Callers:
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
