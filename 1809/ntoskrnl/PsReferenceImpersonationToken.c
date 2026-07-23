/*
 * XREFs of PsReferenceImpersonationToken @ 0x1406A5B00
 * Callers:
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 * Callees:
 *     PsReferenceImpersonationTokenEx @ 0x140632BC0 (PsReferenceImpersonationTokenEx.c)
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
