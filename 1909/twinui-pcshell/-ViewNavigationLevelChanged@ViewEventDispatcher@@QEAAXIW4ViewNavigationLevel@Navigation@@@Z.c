/*
 * XREFs of ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18029164C
 * Callers:
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1802A76B0 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x180189610 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180295548 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::ViewNavigationLevelChanged(RTL_SRWLOCK *a1, unsigned int a2, int a3)
{
  struct IViewWrapperInternal *v5; // rbx
  int v6; // eax
  struct IViewWrapperInternal *v7[4]; // [rsp+20h] [rbp-19h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+40h] [rbp+7h] BYREF
  int v9; // [rsp+48h] [rbp+Fh]
  __int64 (__fastcall ***v10)(); // [rsp+78h] [rbp+3Fh]

  if ( a3 == 1 )
  {
    v7[1] = (struct IViewWrapperInternal *)-2LL;
    v5 = (struct IViewWrapperInternal *)&a1[35];
    AcquireSRWLockExclusive(a1 + 35);
    v7[2] = v5;
    v7[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7);
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, v7) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7[0] + 904LL))(v7[0]);
      v8 = off_18046AC80;
      v9 = v6;
      v10 = &v8;
      std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(&v8, 0);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7);
    if ( v5 )
      ReleaseSRWLockExclusive((PSRWLOCK)v5);
  }
}
