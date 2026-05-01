/*
 * XREFs of ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18021C74C
 * Callers:
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180232E40 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewEventDispatcher::ViewNavigationLevelChanged(RTL_SRWLOCK *a1, unsigned int a2, int a3)
{
  struct IViewWrapperInternal *v5; // rbx
  int v6; // eax
  __int64 (__fastcall ***v7)(); // rdx
  struct IViewWrapperInternal *v8[4]; // [rsp+20h] [rbp-29h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+40h] [rbp-9h] BYREF
  int v10; // [rsp+48h] [rbp-1h]
  __int64 (__fastcall ***v11)(); // [rsp+78h] [rbp+2Fh]

  if ( a3 == 1 )
  {
    v8[1] = (struct IViewWrapperInternal *)-2LL;
    v5 = (struct IViewWrapperInternal *)&a1[37];
    AcquireSRWLockExclusive(a1 + 37);
    v8[2] = v5;
    v8[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, v8) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8[0] + 896LL))(v8[0]);
      v9 = off_1803E2648;
      v10 = v6;
      v11 = &v9;
      ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)a1);
      if ( v11 )
      {
        v7 = &v9;
        LOBYTE(v7) = v11 != &v9;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v11)[4])(v11, v7);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
    if ( v5 )
      ReleaseSRWLockExclusive((PSRWLOCK)v5);
  }
}
