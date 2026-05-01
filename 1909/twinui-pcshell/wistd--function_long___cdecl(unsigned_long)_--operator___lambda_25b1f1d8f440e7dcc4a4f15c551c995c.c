/*
 * XREFs of wistd::function_long___cdecl(unsigned_long)_::operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c__void_ @ 0x1803C7380
 * Callers:
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVTabletModePositionerManager@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVTabletModePositionerManager@@@Z @ 0x1803C75B8 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1803C75B8.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1803D8560 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1803D8560.c)
 *     ??$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@ZW42@W43@PEAVWindowArrangementView@@@SmartCookie@@QEAAJPEAUIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@Z12PEAVWindowArrangementView@@@Z @ 0x1803DFC90 (--$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_C.c)
 * Callees:
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wistd::function_long___cdecl_unsigned_long__::operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c__void_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  v5 = operator new(v4, (void *)(a1 + 8));
  *v5 = &off_18044FC18;
  v5[1] = 0LL;
  if ( v5 + 1 != a2 )
  {
    v5[1] = *a2;
    *a2 = 0LL;
  }
  v5[2] = a2[1];
  *(_QWORD *)(a1 + 112) = v5;
  return a1;
}
