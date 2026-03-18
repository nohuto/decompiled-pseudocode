/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14061B380
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140085D88 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x14031CCA8 (SepVerifyDesktopAppxImage.c)
 *     CmpCheckExeOwnerForPca @ 0x1405B0554 (CmpCheckExeOwnerForPca.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EBCF4 (PspCallProcessNotifyRoutines.c)
 *     EtwpCovSampContextGetModule @ 0x140901A04 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 96;
  if ( ExAcquireRundownProtection_0(a1 + 96) )
  {
    Count = a1[120].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
