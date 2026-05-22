/*
 * XREFs of ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800FAF60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B9B70 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ContextualProcessorBuffer::IsSameAsTarget(
        ContextualProcessorBuffer *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3)
{
  char v5; // bl
  __int64 (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v8 = 0LL;
  v6 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 96);
  if ( *v6 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v6, &v8) >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v8 + 24LL))(
           v8,
           a2,
           a3);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v8);
  return v5;
}
