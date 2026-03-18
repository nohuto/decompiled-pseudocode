/*
 * XREFs of SepLocateTokenIntegrity @ 0x14000AD1C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140085D88 (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x1400E4838 (SepCopyTokenIntegrity.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x1408DE324 (SepGetDefaultsSubjectContext.c)
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
