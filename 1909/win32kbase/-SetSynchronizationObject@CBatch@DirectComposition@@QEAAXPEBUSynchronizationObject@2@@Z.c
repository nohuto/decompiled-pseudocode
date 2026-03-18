/*
 * XREFs of ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C006E608
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C000AE40 (NtDCompositionSubmitDWMBatch.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C000C098 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006E53C (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatch::SetSynchronizationObject(
        DirectComposition::CBatch *this,
        const struct DirectComposition::SynchronizationObject *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
  {
    ObReferenceObjectByPointer(a2, 3u, ExCompositionObjectType, 0);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 36LL));
    *((_BYTE *)this + 32) |= 0x10u;
  }
  else
  {
    *((_BYTE *)this + 32) &= ~0x10u;
  }
}
