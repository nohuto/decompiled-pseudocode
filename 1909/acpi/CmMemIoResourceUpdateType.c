/*
 * XREFs of CmMemIoResourceUpdateType @ 0x1C0060458
 * Callers:
 *     TranslateBridgeResources @ 0x1C00B58D0 (TranslateBridgeResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmMemIoResourceUpdateType(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, UCHAR a2, ULONGLONG a3)
{
  ULONGLONG v6; // rax

  v6 = RtlCmDecodeMemIoResource(Descriptor, 0LL);
  return RtlCmEncodeMemIoResource(Descriptor, a2, v6, a3);
}
