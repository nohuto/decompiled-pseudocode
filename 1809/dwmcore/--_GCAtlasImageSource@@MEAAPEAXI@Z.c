/*
 * XREFs of ??_GCAtlasImageSource@@MEAAPEAXI@Z @ 0x180004A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x18000641C (--1CAtlasEntry@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CAtlasImageSource *__fastcall CAtlasImageSource::`scalar deleting destructor'(CAtlasImageSource *this)
{
  char v2; // r8

  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CAtlasImageSource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CAtlasImageSource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 3) = &CAtlasImageSource::`vftable'{for `IBitmapRealization'};
  CAtlasEntry::~CAtlasEntry((CAtlasImageSource *)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
