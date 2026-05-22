/*
 * XREFs of ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4
 * Callers:
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18002F2AC (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CF2C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006D268 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z @ 0x1800AA710 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z.c)
 *     ?NotifyDeviceRemoval@WGIController@@AEAAJXZ @ 0x1800AA9A0 (-NotifyDeviceRemoval@WGIController@@AEAAJXZ.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AABA8 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800B045C (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800B06D8 (-NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ.c)
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800B09D4 (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     _lambda_a12a5617751b69e72fd80724b2c16071_::operator() @ 0x1800BB284 (_lambda_a12a5617751b69e72fd80724b2c16071_--operator().c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800BC520 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD3C4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800BE2E0 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 *     std::_Func_impl_no_alloc__lambda_55f71f5715b4f6826a0a264bcb9fdfc5__void_InputContext___::_Do_call @ 0x1800BF1C0 (std--_Func_impl_no_alloc__lambda_55f71f5715b4f6826a0a264bcb9fdfc5__void_InputContext___--_Do_cal.c)
 *     std::_Func_impl_no_alloc__lambda_8ea47011c1bd48b0517e50cdbf413d76__void_InputContext___::_Do_call @ 0x1800BF2C0 (std--_Func_impl_no_alloc__lambda_8ea47011c1bd48b0517e50cdbf413d76__void_InputContext___--_Do_cal.c)
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C3E80 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C4030 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801040D0 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801045DC (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105650 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180125A40 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IRawInputClient>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v6 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v6);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
