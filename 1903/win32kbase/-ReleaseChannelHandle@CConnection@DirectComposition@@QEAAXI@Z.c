/*
 * XREFs of ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0008034
 * Callers:
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0007A1C (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0013E78 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CConnection::ReleaseChannelHandle(
        DirectComposition::CConnection *this,
        unsigned int a2)
{
  struct _ERESOURCE *v2; // rbx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  DirectComposition::CLinearObjectTableBase::ReleaseHandle((DirectComposition::CConnection *)((char *)this + 24), a2);
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
}
