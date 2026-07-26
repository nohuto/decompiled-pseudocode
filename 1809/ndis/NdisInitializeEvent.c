/*
 * XREFs of NdisInitializeEvent @ 0x1C001E540
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00CB1EC (ndisMInitializeMiniportBlock.c)
 *     ndisSetOpenToTranslationMode @ 0x1C0117B90 (ndisSetOpenToTranslationMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
