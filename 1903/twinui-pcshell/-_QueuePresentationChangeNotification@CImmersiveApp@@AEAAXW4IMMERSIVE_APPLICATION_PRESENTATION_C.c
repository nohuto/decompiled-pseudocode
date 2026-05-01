/*
 * XREFs of ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18007CBB4
 * Callers:
 *     ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x18007CBA0 (-OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x180147040 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___ @ 0x180140870 (Windows--Internal--ComTaskPool--QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___.c)
 */

void __fastcall CImmersiveApp::_QueuePresentationChangeNotification(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 744);
  if ( v2 )
  {
    v13 = *(_QWORD *)(a1 + 744);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v13 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    *(_QWORD *)v9 = v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9);
    v10 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v5 = *(unsigned int *)(a1 + 752);
    v11 = a2;
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___(v7, v6, v5, v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x149C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
