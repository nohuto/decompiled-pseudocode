/*
 * XREFs of RawDeleteVcb @ 0x1406A0AB4
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400D4F78 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x14030A468 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
