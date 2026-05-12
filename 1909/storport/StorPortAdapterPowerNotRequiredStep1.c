/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022890
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C00228E4 (StorPortAdapterPowerNotRequiredStep2.c)
 *     McTemplateK0pqtq @ 0x1C003F9C4 (McTemplateK0pqtq.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0040A34 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, int a2, int a3)
{
  if ( StorEtwLoggingEnabled && (byte_1C0062741 & 1) != 0 )
    McTemplateK0pqtq((_DWORD)Context, a2, a3, *Context[628], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[628] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
