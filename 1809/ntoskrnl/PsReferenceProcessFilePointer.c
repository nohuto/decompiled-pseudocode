/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14061DB90
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400D9F14 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF200 (SepVerifyDesktopAppxImage.c)
 *     CmpCheckExeOwnerForPca @ 0x14058193C (CmpCheckExeOwnerForPca.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F5C14 (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 95;
  if ( ExAcquireRundownProtection_0(a1 + 95) )
  {
    Count = a1[119].Count;
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
