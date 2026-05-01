/*
 * XREFs of wistd::function_long___cdecl(unsigned_long)_::operator___lambda_fcf725c2e645c30ebf8c18d30787c565__void_ @ 0x180125E18
 * Callers:
 *     ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x1801261D8 (--$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@P.c)
 *     ??$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180172F88 (--$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZP.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18017305C (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180173130 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@Z @ 0x18035584C (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktop@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktop@@@Z @ 0x18035A0EC (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_18035A0EC.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_unsigned_long__::operator___lambda_fcf725c2e645c30ebf8c18d30787c565__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  a1[1] = &off_18044B4E0;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  result = a1;
  a1[14] = a1 + 1;
  return result;
}
