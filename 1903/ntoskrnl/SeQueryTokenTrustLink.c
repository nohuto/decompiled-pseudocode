/*
 * XREFs of SeQueryTokenTrustLink @ 0x14000A27C
 * Callers:
 *     PsRestoreImpersonation @ 0x1405D61A0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
