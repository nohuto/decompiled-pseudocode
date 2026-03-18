/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C
 * Callers:
 *     NtDCompositionGetFrameStatistics @ 0x1C000C4E0 (NtDCompositionGetFrameStatistics.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C000D960 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000F91C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     DCompositionIsShellProcess @ 0x1C003AB88 (DCompositionIsShellProcess.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006CA98 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C006D268 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006D2F0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C006D5AC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C006DE98 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C006F7F8 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C006F970 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionForceRender @ 0x1C00B7110 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C019FDB0 (DCompositionDDAChange.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C019FE30 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01A0040 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C01A0680 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C01A09B0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C01A0B90 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B4C20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
