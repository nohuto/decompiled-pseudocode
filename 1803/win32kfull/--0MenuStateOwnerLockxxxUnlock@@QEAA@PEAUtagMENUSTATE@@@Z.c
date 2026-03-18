/*
 * XREFs of ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FF48C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01D54B0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C01D5AC4 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

MenuStateOwnerLockxxxUnlock *__fastcall MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        MenuStateOwnerLockxxxUnlock *this,
        struct tagMENUSTATE *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( gptiCurrent == *((_QWORD *)a2 + 4) )
      ++*((_DWORD *)a2 + 10);
    else
      *(_QWORD *)this = 0LL;
  }
  return this;
}
