/*
 * XREFs of PsReferenceImpersonationToken @ 0x1406CA0A0
 * Callers:
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 * Callees:
 *     PsReferenceImpersonationTokenEx @ 0x1405DE460 (PsReferenceImpersonationTokenEx.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return PsReferenceImpersonationTokenEx(
           (__int64)Thread,
           1,
           CopyOnOpen,
           (bool *)EffectiveOnly,
           (int *)ImpersonationLevel,
           0LL);
}
