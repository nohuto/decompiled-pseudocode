/*
 * XREFs of ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x1803E5E38
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@Z00@Z @ 0x1803E5CDC (--$_ForwardVirtualDesktopNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@IEAAJP.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_ @ 0x18036F4F4 (_lambda_4f7e66b8cf68c224e991614d9a353a90_--__lambda_4f7e66b8cf68c224e991614d9a353a90_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4f7e66b8cf68c224e991614d9a353a90___ @ 0x1803E5C54 (Windows--Internal--ComTaskPool--QueueTask__lambda_4f7e66b8cf68c224e991614d9a353a90___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopNotifications::_QueueNotification<IVirtualDesktop,IVirtualDesktop>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  int CallbackArray; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  struct IObjectArray *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IObjectArray *v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v21; // [rsp+90h] [rbp+40h]
  __int64 *v22; // [rsp+98h] [rbp+48h]

  v22 = a4;
  v21 = a3;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v20);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    v10 = (unsigned int)CallbackArray;
    v11 = 107LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)v10);
    goto LABEL_6;
  }
  v15 = a2;
  v16 = v20;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v17 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v18 = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4f7e66b8cf68c224e991614d9a353a90___(
         v13,
         v12,
         *(_DWORD *)(a1 + 104),
         &v15);
  lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_(&v15);
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 123LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a4);
  return (unsigned int)v9;
}
