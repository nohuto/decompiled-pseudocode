/*
 * XREFs of ?UnregisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180157120
 * Callers:
 *     ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801CD1A0 (-DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CSpatialVisualContent@@MEAA@XZ @ 0x1801DADFC (--1CSpatialVisualContent@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ @ 0x180156D40 (-GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ.c)
 */

void __fastcall CSpatialResourceManager::UnregisterSpatialListener(
        CSpatialResourceManager *this,
        struct ISpatialNotificationListener *a2)
{
  struct ISpatialNotificationListener **i; // rbx
  __int64 v4; // rdx
  struct IDwmSpatialCompositor *SpatialCompositor; // rcx
  __int64 v6; // r8

  for ( i = (struct ISpatialNotificationListener **)*((_QWORD *)this + 4);
        i != *((struct ISpatialNotificationListener ***)this + 5) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != *((struct ISpatialNotificationListener ***)this + 5) )
  {
    SpatialCompositor = CSpatialResourceManager::GetSpatialCompositor(this);
    if ( SpatialCompositor )
      (*(void (__fastcall **)(__int64, struct IDwmSpatialCompositor *))(*(_QWORD *)v4 + 8LL))(v6, SpatialCompositor);
    memmove_0(i, i + 1, *((_QWORD *)this + 5) - (_QWORD)(i + 1));
    *((_QWORD *)this + 5) -= 8LL;
  }
}
