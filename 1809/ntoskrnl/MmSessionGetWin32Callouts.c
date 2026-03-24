/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140088A60
 * Callers:
 *     NtFindAtom @ 0x1405F4A40 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405F4E90 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     KeUserModeCallback @ 0x140646460 (KeUserModeCallback.c)
 *     ExCallSessionCallBack @ 0x14069E824 (ExCallSessionCallBack.c)
 *     PsConvertToGuiThread @ 0x1406AAFA0 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406AC960 (NtAddAtomEx.c)
 *     NtDeleteAtom @ 0x1406AD200 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x1406ADF50 (NtQueryInformationAtom.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  union _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7872) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
