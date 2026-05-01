/*
 * XREFs of ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x180144EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18005BEE4 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_6ee4989f9139f581a42397e10829ce1f_::operator() @ 0x18014456C (_lambda_6ee4989f9139f581a42397e10829ce1f_--operator().c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x180145354 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveWindowManager::Set(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  const struct _GUID *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 i; // rbx
  void *v11; // rbx
  void (__fastcall *v12)(void *, GUID *, __int64 *); // rdi
  int v14; // [rsp+20h] [rbp-40h] BYREF
  void *v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  void *v19; // [rsp+50h] [rbp-10h] BYREF

  v16[1] = -2LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( (int)CImmersiveAppArray::s_CreateInstance(v8, &v15) >= 0 )
  {
    v17[0] = a3;
    v17[1] = a2;
    v18 = a4;
    v19 = v15;
    if ( v15 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 8LL))(v15);
    v9 = *(_QWORD *)(a1 + 48);
    for ( i = 0LL; i < v9; ++i )
    {
      if ( !lambda_6ee4989f9139f581a42397e10829ce1f_::operator()(v17, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v16[0] = 0LL;
    v11 = v15;
    v12 = **(void (__fastcall ***)(void *, GUID *, __int64 *))v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    v12(v11, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, v16);
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v16[0] + 24LL))(v16[0], &v14) >= 0 && v14 )
      CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(a1 - 176, v15, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
}
