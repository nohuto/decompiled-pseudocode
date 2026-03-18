/*
 * XREFs of RIMGetHMonitor @ 0x1C01463B0
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167680 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167854 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetHMonitor(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 480) || *(_DWORD *)(a1 + 1320) )
    return *(_QWORD *)(a1 + 1328);
  else
    return -1LL;
}
