/*
 * XREFs of RawDeleteVcb @ 0x140682554
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400B59C8 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x14030A9B8 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
