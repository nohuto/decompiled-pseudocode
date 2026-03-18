/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C
 * Callers:
 *     NtDCompositionGetFrameStatistics @ 0x1C0012840 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0012A40 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0012C50 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0012F70 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     DCompositionIsShellProcess @ 0x1C0013398 (DCompositionIsShellProcess.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C0058988 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00599DC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005BB90 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionForceRender @ 0x1C00A5C60 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C0166040 (DCompositionDDAChange.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01660C0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01662B0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0166790 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C0166AD0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C0166CA0 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *DirectComposition::CConnection::GetDefaultConnection(void)
{
  volatile signed __int32 *v0; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v5; // rdi

  v0 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  v2 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(struct _ERESOURCE **)(v2 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v3, 1u);
  v0 = *(volatile signed __int32 **)(v2 + 24);
  if ( v0 )
    _InterlockedIncrement(v0);
  ExReleaseResourceLite(*(PERESOURCE *)(v2 + 32));
  KeLeaveCriticalRegion();
  if ( !v0 )
  {
LABEL_7:
    v5 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v0 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v0;
}
