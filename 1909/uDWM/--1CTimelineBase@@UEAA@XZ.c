/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x18008CB6C
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18007E020 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x18008CBB0 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimelineBase::~CTimelineBase(CTimelineBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CTimelineBase::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
