/*
 * XREFs of ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18007C170
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071F0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800543AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180055350 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180055B04 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180082540 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180097910 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180144B70 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     <none>
 */

struct IMPCInputPostProcessor *__fastcall MPC3DStateHelper::GetPostProcessor(PSRWLOCK SRWLock)
{
  PVOID Ptr; // rbx

  AcquireSRWLockShared(SRWLock);
  Ptr = SRWLock[3].Ptr;
  ReleaseSRWLockShared(SRWLock);
  return (struct IMPCInputPostProcessor *)Ptr;
}
