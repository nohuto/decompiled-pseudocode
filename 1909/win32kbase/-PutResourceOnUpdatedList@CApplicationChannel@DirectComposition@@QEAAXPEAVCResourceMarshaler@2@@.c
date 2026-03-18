/*
 * XREFs of ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0013D90
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00013EC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0001DAC (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00020A4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C000224C (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000C2BC (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C00130CC (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C0013240 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00136C0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0015AB8 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C007804C (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00798CC (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00799B4 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C008D8C8 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C00925BC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0096EE0 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01A32C8 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C01A4244 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v2; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)a2 + 4);
  if ( (v2 & 2) == 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v5 = (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 120LL))(
             a2,
             167LL) != 0
         ? 8
         : 0;
      *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v5 + 408);
      *(_QWORD *)((char *)this + v5 + 408) = a2;
      v2 = *((_DWORD *)a2 + 4);
    }
    *((_DWORD *)a2 + 4) = v2 | 2;
    *((_BYTE *)this + 240) |= 1u;
  }
}
