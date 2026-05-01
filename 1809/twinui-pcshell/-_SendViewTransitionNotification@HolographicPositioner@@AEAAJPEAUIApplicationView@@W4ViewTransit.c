/*
 * XREFs of ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B85F4
 * Callers:
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B8718 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B88B4 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ab9f828b40129b4f40202efbf92da624___ @ 0x1801B0104 (Windows--Internal--ComTaskPool--QueueTask__lambda_ab9f828b40129b4f40202efbf92da624___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::_SendViewTransitionNotification(__int64 a1, __int64 a2, int a3)
{
  struct IObjectArray *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-28h] BYREF
  struct IObjectArray *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+48h] [rbp-8h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  struct IObjectArray *v17; // [rsp+88h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  if ( (int)AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 344), &v17) >= 0 )
  {
    v6 = v17;
    if ( ((int (__fastcall *)(struct IObjectArray *, int *))v17->lpVtbl->GetCount)(v17, &v16) >= 0 )
    {
      if ( v16 )
      {
        if ( a1 )
          v7 = a1 + 120;
        else
          v7 = 0LL;
        v12[0] = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v11 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
        v13 = v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
        v14 = a2;
        v11 = 0LL;
        v15 = a3;
        Windows::Internal::ComTaskPool::QueueTask__lambda_ab9f828b40129b4f40202efbf92da624___(
          v9,
          v8,
          *(_DWORD *)(a1 + 384),
          (__int64)&v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return 0LL;
}
