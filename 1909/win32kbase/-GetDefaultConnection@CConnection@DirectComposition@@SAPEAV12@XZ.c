/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8
 * Callers:
 *     NtDCompositionGetFrameStatistics @ 0x1C000C4E0 (NtDCompositionGetFrameStatistics.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C000D130 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000F91C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     DCompositionIsShellProcess @ 0x1C003AB88 (DCompositionIsShellProcess.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C006D5AC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C006F970 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionForceRender @ 0x1C00B7110 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C019FDB0 (DCompositionDDAChange.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C019FE30 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01A0040 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C01A0680 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C01A09B0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C01A0B90 (NtDesktopCaptureBits.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000CA90 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

struct DirectComposition::CConnection *DirectComposition::CConnection::GetDefaultConnection(void)
{
  volatile signed __int32 *v0; // rbx
  struct DirectComposition::CProcessData *v1; // rax
  struct DirectComposition::CProcessData *v2; // rdi
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v4; // rdi

  v0 = 0LL;
  v1 = DirectComposition::CProcessData::Current();
  v2 = v1;
  if ( !v1 )
    goto LABEL_5;
  v3 = (struct _ERESOURCE *)*((_QWORD *)v1 + 4);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v3, 1u);
  v0 = (volatile signed __int32 *)*((_QWORD *)v2 + 3);
  if ( v0 )
    _InterlockedIncrement(v0);
  ExReleaseResourceLite(*((PERESOURCE *)v2 + 4));
  KeLeaveCriticalRegion();
  if ( !v0 )
  {
LABEL_5:
    v4 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v4, 1u);
      v0 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v0;
}
