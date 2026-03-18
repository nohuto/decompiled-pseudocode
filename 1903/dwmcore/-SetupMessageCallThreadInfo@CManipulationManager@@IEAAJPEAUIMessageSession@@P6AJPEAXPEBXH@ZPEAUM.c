/*
 * XREFs of ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800E0234
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ @ 0x1800DF708 (-ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800E00F0 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulationManager::SetupMessageCallThreadInfo(
        CManipulationManager *this,
        struct IMessageSession *a2,
        int (*a3)(void *, const void *, int),
        struct CManipulationManager::MessageCallThreadInfo *a4)
{
  int EndpointHost; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)a4 + 1);
  EndpointHost = CoreUICallCreateEndpointHost(a2, (char *)a4 + 8, 0LL);
  if ( EndpointHost < 0 )
    ModuleFailFastForHRESULT((unsigned int)EndpointHost, retaddr, v9);
  v10 = *((_QWORD *)a4 + 2);
  if ( v10 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  v12 = CoreUICallCreateEndpointHost(v11, 0LL, (char *)a4 + 16);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr, v13);
  v14 = (*(__int64 (__fastcall **)(struct IMessageSession *, int (*)(void *, const void *, int), CManipulationManager *, struct CManipulationManager::MessageCallThreadInfo *))(*(_QWORD *)a2 + 96LL))(
          a2,
          a3,
          this,
          a4);
  if ( v14 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v14, retaddr, v15);
  return 0LL;
}
