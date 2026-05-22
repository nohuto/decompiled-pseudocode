/*
 * XREFs of ?_Tidy@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ @ 0x180034380
 * Callers:
 *     ??1?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAA@XZ @ 0x180030F48 (--1-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAA@XZ @ 0x180030F78 (--1-$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1800311B0 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x180032068 (-Initialize@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSessio.c)
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x180034220 (-_Reset_move@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Swap@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXAEAV12@@Z @ 0x180034278 (-_Swap@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXAEAV12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Tidy(__int64 a1, __int64 a2)
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
