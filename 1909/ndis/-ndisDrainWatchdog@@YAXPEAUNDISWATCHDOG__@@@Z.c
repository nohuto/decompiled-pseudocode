/*
 * XREFs of ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FB6B4
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C01175DC (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000883C (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisDrainWatchdog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v1 = WatchdogFromHandle(a1);
    KeWaitForSingleObject(v1 + 42, Executive, 0, 0, 0LL);
  }
}
