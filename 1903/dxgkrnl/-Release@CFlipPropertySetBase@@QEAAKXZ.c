/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E998
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C005EB30 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C005EC70 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C005EE00 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C005F220 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C005FA90 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C005FB80 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1C005FE50 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00602E4 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C006042C (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C0061590 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C00619C8 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0061AE0 (-QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061B94 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C0063394 (--1CFlipResource@@MEAA@XZ.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0064148 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C006418C (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C00643AC (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipPropertySetBase::Release(CFlipPropertySetBase *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 2))-- == 1;
  v2 = *((_DWORD *)this + 2);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipPropertySetBase *, __int64))this)(this, 1LL);
  return v2;
}
