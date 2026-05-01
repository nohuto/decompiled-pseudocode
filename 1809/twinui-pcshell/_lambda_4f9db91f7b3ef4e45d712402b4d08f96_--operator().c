/*
 * XREFs of _lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator() @ 0x1801C7C84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::Run @ 0x1801CB640 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z @ 0x1801C75A8 (--0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator()(__int64 a1)
{
  __int64 result; // rax
  const struct PeoplePaneViewManager::ViewChangeListener *v3; // rdi
  const struct PeoplePaneViewManager::ViewChangeListener *v4; // rbp
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 (__fastcall *v9)(__int64, _QWORD); // rax
  __int64 v10[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  result = *(_QWORD *)a1;
  v3 = *(const struct PeoplePaneViewManager::ViewChangeListener **)(*(_QWORD *)a1 + 464LL);
  v4 = (const struct PeoplePaneViewManager::ViewChangeListener *)((char *)v3 + 16 * *(_QWORD *)(*(_QWORD *)a1 + 472LL));
  while ( v3 != v4 )
  {
    PeoplePaneViewManager::ViewChangeListener::ViewChangeListener((PeoplePaneViewManager::ViewChangeListener *)v10, v3);
    v5 = v10[0];
    v11 = v10[0];
    result = Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            goto LABEL_11;
          v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL);
        }
        else
        {
          v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL);
        }
        result = v9(v5, *(_QWORD *)(a1 + 16));
      }
      else
      {
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(
                   v5,
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 48));
      }
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
                 v5,
                 *(_QWORD *)(a1 + 16),
                 *(unsigned int *)(a1 + 48));
    }
LABEL_11:
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v10[0] = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v3 = (const struct PeoplePaneViewManager::ViewChangeListener *)((char *)v3 + 16);
  }
  return result;
}
