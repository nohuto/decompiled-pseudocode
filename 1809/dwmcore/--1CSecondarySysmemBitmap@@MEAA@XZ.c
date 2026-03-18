/*
 * XREFs of ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x18001A600
 * Callers:
 *     ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x18001A5C0 (--_ECSecondarySysmemBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CSecondarySysmemBitmap::~CSecondarySysmemBitmap(CSecondarySysmemBitmap *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondarySysmemBitmap::`vftable'{for `CSecondaryBitmap'};
  *((_QWORD *)this + 12) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 13) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
    WPF::ProcessHeapImpl::Free(v2);
  FastRegion::CRegion::FreeMemory((CSecondarySysmemBitmap *)((char *)this + 24));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
