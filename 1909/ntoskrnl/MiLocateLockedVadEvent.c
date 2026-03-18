/*
 * XREFs of MiLocateLockedVadEvent @ 0x1400E8428
 * Callers:
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiVadCommitCrossPartition @ 0x140057778 (MiVadCommitCrossPartition.c)
 *     MiCheckUserVirtualAddress @ 0x14005DE50 (MiCheckUserVirtualAddress.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073EB0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiZeroFault @ 0x1400A9860 (MiZeroFault.c)
 *     MiFreeVadRange @ 0x1400E71E8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x1400E8414 (MiLocateVadEvent.c)
 *     MiMarkMdlComplete @ 0x1402C6FD8 (MiMarkMdlComplete.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140899158 (MiCopyLargeVad.c)
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
