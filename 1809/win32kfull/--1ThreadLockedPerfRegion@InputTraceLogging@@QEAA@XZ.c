/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     NtUserSendInput @ 0x1C00AE4F0 (NtUserSendInput.c)
 *     EditionHandleMitSignal @ 0x1C00AE650 (EditionHandleMitSignal.c)
 *     EditionLLMouseButtonHook @ 0x1C00B47C0 (EditionLLMouseButtonHook.c)
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 *     ProcessHidRawInput @ 0x1C01C4EB0 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01C8ED0 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C0218BE0 (NtUserInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01C44F4 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this,
        __int64 a2)
{
  __int64 v2; // rdi

  if ( *(_QWORD *)this )
  {
    v2 = *(_QWORD *)this;
    *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 16) = *(_QWORD *)(v2 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
