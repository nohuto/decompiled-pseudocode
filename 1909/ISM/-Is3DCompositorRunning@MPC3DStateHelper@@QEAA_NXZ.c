/*
 * XREFs of ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18001F834
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F11C (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18001F868 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18001FB38 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800977E8 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180144B70 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPC3DStateHelper::Is3DCompositorRunning(PSRWLOCK SRWLock)
{
  char v2; // bl

  AcquireSRWLockShared(SRWLock);
  v2 = BYTE4(SRWLock[2].Ptr);
  ReleaseSRWLockShared(SRWLock);
  return v2;
}
