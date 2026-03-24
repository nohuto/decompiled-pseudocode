/*
 * XREFs of RawDeleteVcb @ 0x14068F978
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14010C63C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140169FBC (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1400DAAE0 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
