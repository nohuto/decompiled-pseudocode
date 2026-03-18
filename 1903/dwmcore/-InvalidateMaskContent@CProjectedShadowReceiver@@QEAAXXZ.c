/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000699C
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x1800036B0 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1800064B0 (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022800 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007FEEC (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2338 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x1801F3040 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180006AF4 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowReceiver::InvalidateMaskContent(CProjectedShadowReceiver *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)this + 104);
  if ( !CCommonRegistryData::m_fDisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, CProjectedShadowReceiver *))(*(_QWORD *)this + 64LL))(
      this,
      0LL,
      this);
    CProjectedShadowReceiver::RequestRedraw(this);
  }
}
