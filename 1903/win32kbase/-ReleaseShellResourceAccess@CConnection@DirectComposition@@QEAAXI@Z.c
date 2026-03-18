/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00080A8
 * Callers:
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00070CC (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00079D0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0007D00 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000E7B4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C01A6DF4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(
        DirectComposition::CConnection *this,
        int a2)
{
  struct _ERESOURCE *v2; // rbx
  bool v5; // zf

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 30);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  v5 = *((_DWORD *)this + 57) == a2;
  *((_DWORD *)this + 57) -= a2;
  if ( v5 )
    *((_QWORD *)this + 29) = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)this + 30));
  KeLeaveCriticalRegion();
}
