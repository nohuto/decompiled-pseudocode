/*
 * XREFs of ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803BA314
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803AFE70 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1803B9334 (--0ScreenManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803B9650 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerM.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803B9EAC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ScreenManager_CreateInstance(const struct _GUID *a1, ScreenManager **a2)
{
  ScreenManager *v3; // rax
  ScreenManager *v4; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  int CanCastTo; // ebx
  ScreenManager *v9; // r8
  _DWORD *v10; // r9
  ScreenManager *v11; // rcx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ScreenManager *v15; // [rsp+30h] [rbp+8h] BYREF
  ScreenManager *v16; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v15);
  v15 = 0LL;
  v3 = (ScreenManager *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    CanCastTo = -2147024882;
    v12 = 334LL;
    goto LABEL_16;
  }
  v4 = ScreenManager::ScreenManager(v3);
  v16 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)v4 + 11);
  v15 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v16);
  *a2 = 0LL;
  if ( !InlineIsEqualGUID(&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v5, v6) )
    {
      *a2 = v15;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_859cc9da_cb27_4a90_b8fa_749bb1944473) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::CanCastTo(
                      (__int64)v9 + 8,
                      v10);
        if ( CanCastTo < 0 )
          goto LABEL_13;
        goto LABEL_11;
      }
      *a2 = v9;
    }
    CanCastTo = 0;
LABEL_11:
    (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)*a2 + 8LL))(*a2);
    goto LABEL_13;
  }
  v11 = v15;
  *a2 = v15;
  (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)v11 + 8LL))(v11);
  CanCastTo = 0;
LABEL_13:
  if ( CanCastTo < 0 )
  {
    v12 = 335LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)CanCastTo);
  }
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v15);
  return (unsigned int)CanCastTo;
}
