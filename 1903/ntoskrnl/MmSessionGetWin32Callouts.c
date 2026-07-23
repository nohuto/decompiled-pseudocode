/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14001CE10
 * Callers:
 *     NtFindAtom @ 0x1405EB2B0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     ExCallSessionCallBack @ 0x1406361E8 (ExCallSessionCallBack.c)
 *     KeUserModeCallback @ 0x140686D70 (KeUserModeCallback.c)
 *     NtDeleteAtom @ 0x1406C7530 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1406CBD50 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406CF2F0 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1406CF4E0 (NtQueryInformationAtom.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 960) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
