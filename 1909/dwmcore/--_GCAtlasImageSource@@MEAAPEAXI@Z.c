/*
 * XREFs of ??_GCAtlasImageSource@@MEAAPEAXI@Z @ 0x180018710
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x18001A01C (--1CAtlasEntry@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
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
    operator delete(this, 0x40uLL);
  return this;
}
