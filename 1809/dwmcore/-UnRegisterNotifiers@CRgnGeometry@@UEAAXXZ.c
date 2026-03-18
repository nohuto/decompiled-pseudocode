/*
 * XREFs of ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x1801BC320
 * Callers:
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x1800A0D04 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CRgnGeometry::UnRegisterNotifiers(CRgnGeometry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
}
