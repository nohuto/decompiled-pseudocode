/*
 * XREFs of ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180347030
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x180348244 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803483A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x180348A8C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180347574 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC91C (-InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::GetCurrentLayoutEnvironment(
        IUnknown **this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  IUnknown *v7; // rcx
  enum DEVICE_SCALE_FACTOR v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  enum DEVICE_SCALE_FACTOR v12; // [rsp+20h] [rbp-60h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-30h] BYREF
  enum DEVICE_SCALE_FACTOR v17; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ImmersiveApplicationLayout::InitLayoutEnv(a2, a2);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2110LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_15;
  }
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2113LL;
    goto LABEL_7;
  }
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2116LL;
    goto LABEL_7;
  }
  if ( TabletModePositioner::GetScaleFactor((TabletModePositioner *)this, &v12) >= 0 )
  {
    v8 = v12;
  }
  else
  {
    v7 = this[31];
    if ( v7 )
    {
      ((void (__fastcall *)(IUnknown *, _BYTE *))v7->lpVtbl[1].QueryInterface)(v7, v16);
      v8 = v17;
    }
    else
    {
      v8 = SCALE_100_PERCENT;
    }
    v12 = v8;
  }
  v9 = v14;
  *((_DWORD *)a2 + 4) = v8;
  v5 = 0;
  v10 = v15;
  *(_OWORD *)((char *)a2 + 24) = v9;
  *(_OWORD *)a2 = v10;
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
