/*
 * XREFs of ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1802203D0
 * Callers:
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1802211F8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetHwndFromView@PeoplePaneViewManager@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18022084C (-GetHwndFromView@PeoplePaneViewManager@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindPendingViewByHwnd(
        RTL_SRWLOCK *this,
        HWND a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rsi
  PeoplePaneViewManager *v7; // rcx
  struct IApplicationView **Ptr; // rdi
  struct IApplicationView **v9; // rbx
  unsigned int v10; // ebx

  v6 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  Ptr = (struct IApplicationView **)this[21].Ptr;
  v9 = (struct IApplicationView **)this[22].Ptr;
  while ( 1 )
  {
    if ( Ptr == v9 )
    {
      v10 = -2147023728;
      goto LABEL_6;
    }
    if ( PeoplePaneViewManager::GetHwndFromView(v7, *Ptr) == a2 )
      break;
    ++Ptr;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)Ptr);
  *a3 = *Ptr;
  v10 = 0;
LABEL_6:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return v10;
}
