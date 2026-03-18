/*
 * XREFs of ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0007378
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00071C0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00079D0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C000F140 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C000F194 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000F54C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CConnection::UnregisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CBatch *a2,
        char a3)
{
  struct _ERESOURCE *v6; // rbx

  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)this);
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  *((_DWORD *)a2 + 5) = 6;
  if ( DirectComposition::CConnection::IsConnected(this) )
    DirectComposition::CConnection::PostBatch(this, a2, a2);
  else
    DirectComposition::CBatch::ReturnToApplication(a2, 1);
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  if ( a3 )
    DirectComposition::CConnection::Release(this);
}
