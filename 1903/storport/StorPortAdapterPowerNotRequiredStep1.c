/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022760
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C00227B4 (StorPortAdapterPowerNotRequiredStep2.c)
 *     McTemplateK0pqtq @ 0x1C003E5D4 (McTemplateK0pqtq.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003F644 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, int a2, int a3)
{
  if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
    McTemplateK0pqtq((_DWORD)Context, a2, a3, *Context[628], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[628] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
