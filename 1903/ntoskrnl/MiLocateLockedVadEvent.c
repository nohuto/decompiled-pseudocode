/*
 * XREFs of MiLocateLockedVadEvent @ 0x1400ACF18
 * Callers:
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiVadCommitCrossPartition @ 0x1400576D8 (MiVadCommitCrossPartition.c)
 *     MiCheckUserVirtualAddress @ 0x14005DDB0 (MiCheckUserVirtualAddress.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 *     MiMarkMdlComplete @ 0x1402C7278 (MiMarkMdlComplete.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140899938 (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(a1 + 56); result && (a2 & (_DWORD)result[8]) == 0; result = (__int64 **)*result )
    ;
  return result;
}
