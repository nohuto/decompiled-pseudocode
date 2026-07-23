/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14001D200
 * Callers:
 *     NtFindAtom @ 0x1405EBA80 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     ExCallSessionCallBack @ 0x140639448 (ExCallSessionCallBack.c)
 *     KeUserModeCallback @ 0x14064CF40 (KeUserModeCallback.c)
 *     NtDeleteAtom @ 0x1406C5E10 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1406CAB80 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406CE400 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1406CE750 (NtQueryInformationAtom.c)
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
