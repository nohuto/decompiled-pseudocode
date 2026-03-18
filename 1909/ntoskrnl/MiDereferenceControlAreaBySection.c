/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x140071174
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14012BEB0 (MmGetImageFileSignatureInformation.c)
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x140609480 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x1406F1448 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
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
