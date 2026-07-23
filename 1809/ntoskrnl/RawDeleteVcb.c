/*
 * XREFs of RawDeleteVcb @ 0x140690B38
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14010C6BC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x14016A0BC (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
