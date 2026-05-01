/*
 * XREFs of ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x1803BB810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x18009CA20 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x180100274 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1803A6D00 (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

TabletModePositionerOperation *__fastcall TabletModePositionerOperation::`scalar deleting destructor'(
        TabletModePositionerOperation *this,
        char a2)
{
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((TabletModePositionerOperation *)((char *)this + 24));
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
