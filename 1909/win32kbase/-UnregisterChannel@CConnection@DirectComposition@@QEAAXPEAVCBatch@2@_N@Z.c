/*
 * XREFs of ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C006DE98
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C006DCE0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C000C200 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C000C254 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C006E4F0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CConnection::UnregisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CBatch *a2,
        char a3)
{
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx

  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)this);
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  *((_DWORD *)a2 + 5) = 6;
  if ( DirectComposition::CConnection::IsConnected(this) )
    DirectComposition::CConnection::PostBatch((union _SLIST_HEADER *)this, (struct _SLIST_ENTRY *)a2, a2);
  else
    DirectComposition::CBatch::ReturnToApplication(a2, 1);
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  if ( a3 )
    DirectComposition::CConnection::Release(this, v7);
}
