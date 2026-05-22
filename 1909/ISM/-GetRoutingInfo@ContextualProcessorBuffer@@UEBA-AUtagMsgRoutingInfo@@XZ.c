/*
 * XREFs of ?GetRoutingInfo@ContextualProcessorBuffer@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1800FAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B9A20 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall ContextualProcessorBuffer::GetRoutingInfo(__int64 a1, void *a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 96);
  if ( *v3 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v3, &v5) >= 0 )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 72LL))(v5, a2);
  else
    memset_0(a2, 0, 0x28uLL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v5);
  return a2;
}
