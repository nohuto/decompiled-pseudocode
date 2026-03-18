/*
 * XREFs of MmSectionToSectionObjectPointers @ 0x140892AE8
 * Callers:
 *     IopIsFileOpenOrSection @ 0x1408585A0 (IopIsFileOpenOrSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 */

__int64 __fastcall MmSectionToSectionObjectPointers(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  ULONG_PTR v3; // rax
  __int64 v4; // rbx

  v1 = MiSectionControlArea(a1);
  v2 = v1;
  if ( !*(_QWORD *)(v1 + 64) )
    return 0LL;
  v3 = MiReferenceControlAreaFile(v1);
  v4 = *(_QWORD *)(v3 + 40);
  MiDereferenceControlAreaFile(v2, v3);
  return v4;
}
