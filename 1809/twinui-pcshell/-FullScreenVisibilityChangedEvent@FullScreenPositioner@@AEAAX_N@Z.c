/*
 * XREFs of ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x180141224
 * Callers:
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180142A38 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9a93ee57caea2b3e2d042c02cff1fd50___ @ 0x18013FB88 (Windows--Internal--ComTaskPool--QueueTask__lambda_9a93ee57caea2b3e2d042c02cff1fd50___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1803B188C (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FullScreenPositioner::FullScreenVisibilityChangedEvent(FullScreenPositioner *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct IObjectArray *v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  struct IObjectArray *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  if ( (int)CGITRegistrationList::GetCallbackArray((FullScreenPositioner *)((char *)this + 376), &v8) >= 0 )
  {
    v6 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    v7 = a2;
    Windows::Internal::ComTaskPool::QueueTask__lambda_9a93ee57caea2b3e2d042c02cff1fd50___(
      v5,
      v4,
      *((_DWORD *)this + 92),
      &v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
}
