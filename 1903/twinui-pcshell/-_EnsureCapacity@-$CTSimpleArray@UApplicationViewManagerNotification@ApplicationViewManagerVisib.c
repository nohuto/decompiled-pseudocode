/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18011BF18
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028D90 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x180383F30 (-ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_.c)
 *     ?ItemHidden@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x180384080 (-ItemHidden@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA.c)
 *     ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1803843C0 (-ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_.c)
 *     ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x1803FBC00 (-MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180069F68 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = 4294967294LL;
  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = 0LL;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( is_mul_ok(v6, 2uLL) )
      {
        result = 0LL;
      }
      else
      {
        v7 = -1LL;
        result = 2147942934LL;
      }
      if ( (int)result >= 0 )
      {
        v8 = v7 - v6;
        v9 = v6 + 4096;
        if ( v8 <= 0x1000 )
          v9 = v7;
        v10 = v9;
        if ( a2 > v9 )
          v10 = a2;
        if ( v10 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( a2 > v9 )
            v3 = a2;
        }
        v11 = 0LL;
        if ( is_mul_ok(v3, 0x20uLL) )
        {
          result = CTCoAllocPolicy::Realloc(
                     (IMalloc *)&v11,
                     (v3 * (unsigned __int128)0x20uLL) >> 64,
                     *(void **)a1,
                     32 * v3,
                     &v11);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(a1 + 24) = v3;
          }
        }
        else
        {
          return 2147942934LL;
        }
      }
    }
  }
  return result;
}
