/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C0025950
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C00259A4 (StorPortAdapterPowerNotRequiredStep2.c)
 *     McTemplateK0pqtq @ 0x1C004194C (McTemplateK0pqtq.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00429A0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, int a2, int a3)
{
  if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
    McTemplateK0pqtq((_DWORD)Context, a2, a3, *Context[644], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[644] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
