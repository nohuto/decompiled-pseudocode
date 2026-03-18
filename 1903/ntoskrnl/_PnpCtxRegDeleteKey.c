/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x140933B34
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x14070AE3C (_CmAddDeviceToContainerWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409340AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934710 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140936734 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3B070 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B280 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteKeyTransacted @ 0x140789170 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegDeleteKey(__int64 a1, char *a2, const WCHAR *a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return RegRtlDeleteKeyTransacted(a2, a3, v4);
}
