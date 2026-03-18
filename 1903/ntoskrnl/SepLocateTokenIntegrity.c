/*
 * XREFs of SepLocateTokenIntegrity @ 0x14000AC8C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140085988 (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x1400AE2E8 (SepCopyTokenIntegrity.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x1408DEA24 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepLocateTokenIntegrity(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
