/*
 * XREFs of SeQueryTokenTrustLink @ 0x1400CC28C
 * Callers:
 *     PsRestoreImpersonation @ 0x140648D10 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
