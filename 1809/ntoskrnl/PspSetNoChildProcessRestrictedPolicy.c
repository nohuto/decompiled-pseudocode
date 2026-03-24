/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1406CD2C8
 * Callers:
 *     PspApplyMitigationOptions @ 0x14064DD90 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140139DCC (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  PACCESS_TOKEN v4; // rdi

  v4 = PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
