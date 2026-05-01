/*
 * XREFs of ?CancelTabTransfer@TabViewManager@@UEAAJU_GUID@@@Z @ 0x1801D89F0
 * Callers:
 *     _lambda_0c9591b3b7af47026ef620a0b989ad73_::operator() @ 0x1801D621C (_lambda_0c9591b3b7af47026ef620a0b989ad73_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@@Z @ 0x1801E48B0 (-RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV-$function@$$A6AJPEAUITabTrans.c)
 */

__int64 __fastcall TabViewManager::CancelTabTransfer(TabViewManager *this, struct _GUID *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall **v5)(); // [rsp+28h] [rbp-50h] BYREF
  __int128 v6; // [rsp+30h] [rbp-48h]
  __int64 (__fastcall ***v7)(); // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = off_1803DDD70;
  v6 = (__int128)*a2;
  v7 = &v5;
  v2 = TabViewManager::RunCallbackWithTabTransferEventBrokerAsync((char *)this - 152, &v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D4,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
