/*
 * XREFs of ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x1801C982C
 * Callers:
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C810C (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C824C (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::GetTabletModePositioner(
        PeoplePaneViewManager *this,
        struct ITabletModePositioner **a2)
{
  __int64 v3; // rbx
  HRESULT Service; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  IUnknown *punk; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  punk = 0LL;
  v3 = *((_QWORD *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  Service = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, IUnknown **))(*(_QWORD *)v3 + 72LL))(
              v3,
              0LL,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &punk);
  v5 = Service;
  if ( Service >= 0 )
  {
    Service = IUnknown_QueryService(
                punk,
                &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                (void **)a2);
    v5 = Service;
    if ( Service >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 673LL;
  }
  else
  {
    v6 = 672LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)Service);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v5;
}
