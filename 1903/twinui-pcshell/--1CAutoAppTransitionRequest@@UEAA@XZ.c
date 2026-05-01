/*
 * XREFs of ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1803A9610
 * Callers:
 *     ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x1803A9A90 (--_GCAutoAppTransitionRequest@@UEAAPEAXI@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803A9D10 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x1803AEEC0 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoAppTransitionRequest::~CAutoAppTransitionRequest(CAutoAppTransitionRequest *this)
{
  bool v1; // zf
  __int64 *v2; // rbx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &CAutoAppTransitionRequest::`vftable';
  v2 = (__int64 *)((char *)this + 8);
  if ( !v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 40LL))(*v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
}
