/*
 * XREFs of ?LockServer@PenWorkspaceDiscoverBrokerFactory@@UEAAJH@Z @ 0x1801FBD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::LockServer(PenWorkspaceDiscoverBrokerFactory *this, int a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax

  v2 = *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_;
  if ( a2 )
    v3 = *(void (**)(void))(v2 + 8);
  else
    v3 = *(void (**)(void))(v2 + 16);
  v3();
  return 0LL;
}
