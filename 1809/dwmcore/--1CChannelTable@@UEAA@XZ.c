/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x1801457C0
 * Callers:
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x1801454A0 (--_GCConnection@@EEAAPEAXI@Z.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x180145800 (--_GCChannelTable@@UEAAPEAXI@Z.c)
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
  WPF::ProcessHeapImpl::Free(LockSemaphore);
}
