/*
 * XREFs of RIMGetHMonitor @ 0x1C00E91BC
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01128F8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0112A84 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetHMonitor(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 480) && !*(_DWORD *)(a1 + 848) )
    return -1LL;
  v2 = *(_QWORD *)(a1 + 856);
  if ( v2 )
    return *(_QWORD *)v2;
  return result;
}
