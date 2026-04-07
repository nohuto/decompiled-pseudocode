/*
 * XREFs of ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18007E020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x18008CB6C (--1CTimelineBase@@UEAA@XZ.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::`vector deleting destructor'(
        CLivePreviewTimeline *this,
        char a2)
{
  *(_QWORD *)this = &CLivePreviewTimeline::`vftable';
  CTimelineBase::~CTimelineBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CLivePreviewTimeline *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
