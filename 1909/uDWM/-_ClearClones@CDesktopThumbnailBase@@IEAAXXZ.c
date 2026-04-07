/*
 * XREFs of ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x1800AFC70
 * Callers:
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800AE668 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800AF7B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailBase::_ClearClones(CDesktopThumbnailBase *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  for ( i = 0; i < *((_DWORD *)this + 66); ++i )
  {
    v3 = *((_QWORD *)this + 30);
    v4 = *(CBaseObject **)(v3 + 16LL * i + 8);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      v3 = *((_QWORD *)this + 30);
    }
    v5 = *(CBaseObject **)(v3 + 16LL * i);
    if ( v5 )
      CBaseObject::Release(v5);
  }
}
