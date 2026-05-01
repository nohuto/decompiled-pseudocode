/*
 * XREFs of ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x180349360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1803438F0 (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x180343B78 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18034F320 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
 */

__int64 __fastcall TabletModePositioner::OnOutgoingTransitionCompleted(struct IAppTransitionManager **this)
{
  unsigned int v1; // ebx
  struct IAppLayoutOperation **v2; // rsi
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v4; // r9
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = this + 16;
  ppvOut = 0LL;
  if ( this[16]
    && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut),
        IUnknown_QueryService(
          (IUnknown *)*(this - 23),
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &ppvOut) >= 0) )
  {
    CAutoAppTransitionRequest::CAutoAppTransitionRequest((CAutoAppTransitionRequest *)v6, this[24]);
    CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
      (CAutoAppTransitionRequest *)v6,
      *v2,
      (struct IImmersiveMonitor *)ppvOut,
      v4);
    (*(void (__fastcall **)(struct IAppTransitionManager *))(*(_QWORD *)this[29] + 64LL))(this[29]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v2);
    CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)v6);
  }
  else
  {
    v1 = -2147418113;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v1;
}
