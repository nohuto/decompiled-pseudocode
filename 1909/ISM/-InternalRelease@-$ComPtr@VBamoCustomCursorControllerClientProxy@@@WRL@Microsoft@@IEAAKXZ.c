/*
 * XREFs of ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BFAC
 * Callers:
 *     ??1?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18006A3E8 (--1-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18006A7AC (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006A830 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006A9CC (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18006B7F0 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BA10 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C0E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CCEC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006D028 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1800C2B30 (--_EMagnifierProcessor@@UEAAPEAXI@Z.c)
 *     ??_GCustomCursorApplication@@QEAAPEAXI@Z @ 0x1800C8F68 (--_GCustomCursorApplication@@QEAAPEAXI@Z.c)
 *     ??_GSystemCursorController@@UEAAPEAXI@Z @ 0x1800C9000 (--_GSystemCursorController@@UEAAPEAXI@Z.c)
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800CA300 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CBE00 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x1800CE704 (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x1800D2120 (-OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_.c)
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x180104948 (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagnifierClientPr.c)
 *     ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@@Z @ 0x180104A78 (--$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagnifierClientPro.c)
 *     ??_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z @ 0x180104EF0 (--_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z.c)
 *     ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x180104FA0 (--_EMagnifierGestureTarget@@UEAAPEAXI@Z.c)
 *     ??_GMagnifierToggleTarget@@UEAAPEAXI@Z @ 0x180104FF0 (--_GMagnifierToggleTarget@@UEAAPEAXI@Z.c)
 *     ?OnMagnifierClientRegistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x180105610 (-OnMagnifierClientRegistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z.c)
 *     ?OnMagnifierClientUnregistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x180105660 (-OnMagnifierClientUnregistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
