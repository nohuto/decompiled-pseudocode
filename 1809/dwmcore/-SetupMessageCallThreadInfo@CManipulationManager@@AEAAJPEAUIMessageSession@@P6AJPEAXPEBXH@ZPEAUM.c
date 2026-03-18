/*
 * XREFs of ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x180062778
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180062418 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800625D0 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulationManager::SetupMessageCallThreadInfo(
        CManipulationManager *this,
        struct IMessageSession *a2,
        int (*a3)(void *, const void *, int),
        struct CManipulationManager::MessageCallThreadInfo *a4)
{
  int EndpointHost; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)a4 + 1);
  EndpointHost = CoreUICallCreateEndpointHost(a2, (char *)a4 + 8, 0LL);
  if ( EndpointHost < 0 )
    ModuleFailFastForHRESULT((unsigned int)EndpointHost, retaddr);
  v9 = *((_QWORD *)a4 + 2);
  if ( v9 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 536LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 536LL));
  v11 = CoreUICallCreateEndpointHost(v10, 0LL, (char *)a4 + 16);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
  v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, int (*)(void *, const void *, int), CManipulationManager *, struct CManipulationManager::MessageCallThreadInfo *))(*(_QWORD *)a2 + 88LL))(
          a2,
          a3,
          this,
          a4);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
  return 0LL;
}
