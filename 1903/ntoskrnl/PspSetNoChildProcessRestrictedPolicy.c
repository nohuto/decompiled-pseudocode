/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1406EC7DC
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140691394 (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14013BA10 (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  PACCESS_TOKEN v4; // rdi

  v4 = PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
