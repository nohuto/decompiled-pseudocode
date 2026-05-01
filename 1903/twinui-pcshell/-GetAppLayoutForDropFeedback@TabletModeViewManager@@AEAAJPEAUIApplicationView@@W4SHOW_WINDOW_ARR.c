/*
 * XREFs of ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1803B6F78
 * Callers:
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1803B6CF0 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1803B7A70 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18041CCB4 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804207E0 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

__int64 __fastcall TabletModeViewManager::GetAppLayoutForDropFeedback(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  const struct _GUID *v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  void *v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a4 = 0LL;
  v5 = *(_QWORD *)(a1 + 120);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( a3 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 24LL))(v15, &v18);
      v17 = 0LL;
      v18 = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      v11 = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&v18, v10, &v17);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x243,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_13:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        goto LABEL_16;
      }
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v12 = CAppLayoutItem::s_CreateInstance_View(a2, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v16);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 582LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_13;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v16 + 104LL))(v16, 0LL, &v19);
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 104LL))(v16, 1LL, &v19);
      v12 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 224LL))(v17, v16, 0LL, 0LL);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 585LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      v12 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v17)(
              v17,
              &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
              &v15);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 586LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v9 = 0;
    *a4 = v15;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x238,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v9;
}
