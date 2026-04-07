/*
 * XREFs of ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800AA6E0
 * Callers:
 *     ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x180088C70 (--_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800AA728 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailCVI::~CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVI::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
    CBaseObject::Release(v3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
