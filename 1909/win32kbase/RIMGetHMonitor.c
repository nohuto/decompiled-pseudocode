/*
 * XREFs of RIMGetHMonitor @ 0x1C0143D40
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165480 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165654 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetHMonitor(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 480) || *(_DWORD *)(a1 + 1336) )
    return *(_QWORD *)(a1 + 1344);
  else
    return -1LL;
}
