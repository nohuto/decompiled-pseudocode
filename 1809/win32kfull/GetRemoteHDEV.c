/*
 * XREFs of GetRemoteHDEV @ 0x1C01FB89C
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01FB810 (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C01FB940 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01FBA10 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01FBBB0 (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x1C02577E0 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int16 a1, __int64 a2)
{
  if ( (unsigned __int16)(a1 - 1) > 0xFFFDu || *(_DWORD *)(*(_QWORD *)(gpDispInfo + 16LL) + 20LL) == 1 )
    return *(_QWORD *)(gpDispInfo + 40LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(*(_QWORD *)(gpDispInfo + 16LL), a2, a2);
}
