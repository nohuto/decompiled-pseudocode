/*
 * XREFs of ??_GTabletModePositioner@@UEAAPEAXI@Z @ 0x1803A9AC8
 * Callers:
 *     ??_ETabletModePositioner@@WBI@EAAPEAXI@Z @ 0x1800C0920 (--_ETabletModePositioner@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x1803A9698 (--1TabletModePositioner@@UEAA@XZ.c)
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
