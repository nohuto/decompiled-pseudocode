/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics@@HPEAUISwitchThumbnailFactory@@@Z @ 0x1803A57AC
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803A537C (--$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1803A41B0 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 */

__int64 __fastcall VirtualDesktopRemoveAnimationCoordinator::RuntimeClassInitialize(
        VirtualDesktopRemoveAnimationCoordinator *this,
        const struct VirtualDesktopMetrics *a2,
        int a3,
        struct ISwitchThumbnailFactory *a4)
{
  __int64 v4; // r10
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 3LL;
  v5 = (_OWORD *)((char *)this + 248);
  do
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v5[2] = *((_OWORD *)a2 + 2);
    v5[3] = *((_OWORD *)a2 + 3);
    v5[4] = *((_OWORD *)a2 + 4);
    v5[5] = *((_OWORD *)a2 + 5);
    v5[6] = *((_OWORD *)a2 + 6);
    v5 += 8;
    v6 = *((_OWORD *)a2 + 7);
    a2 = (const struct VirtualDesktopMetrics *)((char *)a2 + 128);
    *(v5 - 1) = v6;
    --v4;
  }
  while ( v4 );
  *v5 = *(_OWORD *)a2;
  v5[1] = *((_OWORD *)a2 + 1);
  v5[2] = *((_OWORD *)a2 + 2);
  v5[3] = *((_OWORD *)a2 + 3);
  v5[4] = *((_OWORD *)a2 + 4);
  v5[5] = *((_OWORD *)a2 + 5);
  v7 = *((_OWORD *)a2 + 6);
  *((_DWORD *)this + 186) = a3;
  v5[6] = v7;
  v8 = ItemAnimationCoordinatorBase::RuntimeClassInitialize(this, a4, &stru_180525C18);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopremoveanimationcoordinator.cpp",
      (const char *)(unsigned int)v8);
  return v9;
}
