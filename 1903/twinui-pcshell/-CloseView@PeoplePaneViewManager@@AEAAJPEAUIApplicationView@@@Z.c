/*
 * XREFs of ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180220090
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x18021FE80 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x18021FFF0 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180039338 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::CloseView(
        PeoplePaneViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  struct IImmersiveApplication **v3; // r8
  int ApplicationFromView; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  HWND Ancestor; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  PeoplePaneViewManager *v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  HWND hwnd; // [rsp+68h] [rbp+28h] BYREF

  v13 = this;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v14, v3);
  LastError = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v13 = 0LL;
    v6 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, PeoplePaneViewManager **))(*(_QWORD *)v6 + 24LL))(
           v6,
           4LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v13);
    LastError = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(PeoplePaneViewManager *, HWND *))(*(_QWORD *)v13 + 32LL))(v13, &hwnd);
      LastError = v7;
      if ( v7 >= 0 )
      {
        Ancestor = GetAncestor(hwnd, 2u);
        if ( PostMessageW(Ancestor, 0x10u, 0LL, 0LL) )
          LastError = 0;
        else
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x3BF,
                        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                        v10);
        goto LABEL_11;
      }
      v8 = 956LL;
    }
    else
    {
      v8 = 953LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B6,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return LastError;
}
