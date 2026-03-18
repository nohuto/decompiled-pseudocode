/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FF48C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01AA880 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxUnlockMenuState @ 0x1C01D5E00 (xxxUnlockMenuState.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     NtUserMNDragLeave @ 0x1C01F1FE0 (NtUserMNDragLeave.c)
 *     xxxMNDragOver @ 0x1C0205428 (xxxMNDragOver.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuStateInternal(struct tagMENUSTATE *a1, int a2)
{
  int v3; // r9d

  if ( (*((_DWORD *)a1 + 10))-- != 1 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 2);
  if ( (v3 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( !a2 && (v3 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
