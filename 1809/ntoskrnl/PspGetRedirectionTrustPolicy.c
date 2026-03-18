/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x1405827D4
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1401B702C (SeTokenGetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PspGetRedirectionTrustPolicy(struct _KPROCESS *a1)
{
  PACCESS_TOKEN v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = PsReferencePrimaryToken(a1);
  SeTokenGetRedirectionTrustPolicy((__int64)v2, &v4, &v5);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v2);
  if ( v4 )
    return 1LL;
  else
    return v5 != 0 ? 2 : 0;
}
