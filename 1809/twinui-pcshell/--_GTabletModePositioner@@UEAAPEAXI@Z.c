/*
 * XREFs of ??_GTabletModePositioner@@UEAAPEAXI@Z @ 0x180344028
 * Callers:
 *     ??_ETabletModePositioner@@WBI@EAAPEAXI@Z @ 0x1800A9A00 (--_ETabletModePositioner@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x180343C00 (--1TabletModePositioner@@UEAA@XZ.c)
 */

TabletModePositioner *__fastcall TabletModePositioner::`scalar deleting destructor'(
        TabletModePositioner *this,
        char a2)
{
  TabletModePositioner::~TabletModePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
