/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14007644C
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x140023A40 (MmGetImageFileSignatureInformation.c)
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x1405F1440 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x1406D15C4 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v5);
}
