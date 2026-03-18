/*
 * XREFs of PsQueryProcessAttributes @ 0x1406845F4
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PopCreateUserPowerRequest @ 0x1406B3DA4 (PopCreateUserPowerRequest.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     PsQueryProcessAttributesByToken @ 0x140684660 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  PACCESS_TOKEN v6; // rbx

  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
