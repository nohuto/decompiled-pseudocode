/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140088A50
 * Callers:
 *     NtFindAtom @ 0x1405F5A40 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 *     ExCallSessionCallBack @ 0x14069FAE4 (ExCallSessionCallBack.c)
 *     PsConvertToGuiThread @ 0x1406AC240 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406ADC00 (NtAddAtomEx.c)
 *     NtDeleteAtom @ 0x1406AE4A0 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x1406AF1F0 (NtQueryInformationAtom.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7872) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
