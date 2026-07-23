/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x14073D2F4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F6A70 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F6C80 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, char *a2, const WCHAR *a3)
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
  return RegRtlDeleteTreeInternal(a2, a3, v4, 0);
}
