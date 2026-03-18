/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x180155B70
 * Callers:
 *     ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x1801558F8 (--1CInternalMilCmdConnection@@EEAA@XZ.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x180155BB0 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelTable::~CChannelTable(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CChannelTable::`vftable';
  DeleteCriticalSection(this + 1);
  LockSemaphore = this->LockSemaphore;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&HANDLE_TABLE::`vftable';
  operator delete(LockSemaphore);
}
