/*
 * XREFs of ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x18021196C
 * Callers:
 *     ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x1802119B0 (--_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18007B470 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1802119EC (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(union _SLIST_HEADER *this)
{
  CHolographicInteropTaskQueue *v2; // rcx
  void *v3; // rdx
  wil::details *Alignment; // rcx

  this->Alignment = (ULONGLONG)&CHolographicInteropTaskQueue::`vftable';
  CHolographicInteropTaskQueue::ClearList((CHolographicInteropTaskQueue *)this, this + 1);
  CHolographicInteropTaskQueue::ClearList(v2, this + 2);
  Alignment = (wil::details *)this[3].Alignment;
  if ( Alignment )
    wil::details::CloseHandle(Alignment, v3);
}
