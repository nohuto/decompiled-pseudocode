/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140619870
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140085988 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x14031D258 (SepVerifyDesktopAppxImage.c)
 *     CmpCheckExeOwnerForPca @ 0x1405B0554 (CmpCheckExeOwnerForPca.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x1405E6E8C (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EB524 (PspCallProcessNotifyRoutines.c)
 *     EtwpCovSampContextGetModule @ 0x1409020A4 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
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
