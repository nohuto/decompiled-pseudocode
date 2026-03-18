/*
 * XREFs of GetRemoteHDEV @ 0x1C0212B84
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0212AC0 (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C0212C50 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0212D50 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0212F20 (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x1C0271110 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int16 a1, __int64 a2)
{
  if ( (unsigned __int16)(a1 - 1) > 0xFFFDu || *(_DWORD *)(*(_QWORD *)(gpDispInfo + 16LL) + 20LL) == 1 )
    return *(_QWORD *)(gpDispInfo + 40LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(*(_QWORD *)(gpDispInfo + 16LL), a2, a2);
}
