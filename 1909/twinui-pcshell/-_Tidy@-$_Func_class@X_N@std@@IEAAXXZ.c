/*
 * XREFs of ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x180079310
 * Callers:
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x18001D49C (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 *     ??1?$function@$$A6AX_N@Z@std@@QEAA@XZ @ 0x1802882F4 (--1-$function@$$A6AX_N@Z@std@@QEAA@XZ.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x180288850 (--1ViewWrapperBase@@QEAA@XZ.c)
 *     ??1WindowWrapperBase@@QEAA@XZ @ 0x1802C1DE8 (--1WindowWrapperBase@@QEAA@XZ.c)
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x1802C39F0 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 *     ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x1802C3C2C (-_Swap@-$_Func_class@X_N@std@@IEAAXAEAV12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,bool>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
