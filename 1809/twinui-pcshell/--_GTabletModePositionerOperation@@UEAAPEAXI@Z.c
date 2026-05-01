/*
 * XREFs of ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x180355920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1800925CC (--1CWRLObjectWithSite@@QEAA@XZ.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x1800DE490 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x180341C0C (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

TabletModePositionerOperation *__fastcall TabletModePositionerOperation::`scalar deleting destructor'(
        TabletModePositionerOperation *this,
        char a2)
{
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((TabletModePositionerOperation *)((char *)this + 24));
  CWRLObjectWithSite::~CWRLObjectWithSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
