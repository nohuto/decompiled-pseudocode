/*
 * XREFs of ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x180242EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x180141B4C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z @ 0x18023E748 (--0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::SubscribeToViewChangeNotifications(
        PeoplePaneViewManager *this,
        struct IPeoplePaneViewUpdateSink *a2,
        unsigned int *a3)
{
  struct IPeoplePaneViewUpdateSink *v6; // rdi
  unsigned int v7; // ecx
  _QWORD *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // eax
  PeoplePaneViewManager::ViewChangeListener *v12; // rcx
  struct IPeoplePaneViewUpdateSink *v14; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IPeoplePaneViewUpdateSink *v17; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    v17 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
    v14 = a2;
    v6 = a2;
  }
  v7 = *((_DWORD *)this + 106);
  v15 = v7;
  *((_DWORD *)this + 106) = v7 + 1;
  *a3 = v7;
  v8 = (_QWORD *)((char *)this + 392);
  v9 = 0;
  v10 = v8[1];
  if ( v10 == v8[3]
    && (v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                (__int64)v8,
                v10 + 1,
                a3),
        v9 = v11,
        v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    ++v8[1];
    v12 = (PeoplePaneViewManager::ViewChangeListener *)(*v8 - 16LL + 16LL * v8[1]);
    if ( v12 )
      PeoplePaneViewManager::ViewChangeListener::ViewChangeListener(
        v12,
        (const struct PeoplePaneViewManager::ViewChangeListener *)&v14);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
