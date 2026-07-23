/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x140583834
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1401B7230 (SeTokenSetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PspSetRedirectionTrustPolicy(struct _KPROCESS *a1, int a2)
{
  PACCESS_TOKEN v4; // rdi

  v4 = PsReferencePrimaryToken(a1);
  SeTokenSetRedirectionTrustPolicy((__int64)v4, a2 == 2);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
