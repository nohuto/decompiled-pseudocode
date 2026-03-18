/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x1406F06C0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140085FA4 (SeTokenGetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1)
{
  PACCESS_TOKEN v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = PsReferencePrimaryToken(a1);
  SeTokenGetNoChildProcessRestricted((__int64)v2, &v4, &v5, &v6);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v2);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}
