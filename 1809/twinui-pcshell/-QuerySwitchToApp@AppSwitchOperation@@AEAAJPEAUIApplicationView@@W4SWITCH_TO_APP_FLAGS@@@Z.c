/*
 * XREFs of ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18035628C
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x180355DA8 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x180356860 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180356970 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1802FD6C4 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC844 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803B97F4 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

__int64 __fastcall AppSwitchOperation::QuerySwitchToApp(__int64 a1, struct IApplicationView *a2, int a3)
{
  LANGID ThreadUILanguage; // ax
  unsigned int v6; // r12d
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v10; // rdx
  int v12; // eax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rdx
  int v36[2]; // [rsp+30h] [rbp-50h] BYREF
  int v37[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v38; // [rsp+40h] [rbp-40h]
  _BYTE v39[40]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v36[0] = a3;
  ThreadUILanguage = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
  {
    v6 = 0;
    v7 = 1;
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v6 = 1;
    v8 = 1;
  }
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)v37);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v10 = 224LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), v39);
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64), 2LL);
  if ( (v37[0] & 2) != 0 )
  {
    if ( v12 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)v37 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v14 + 112LL))(
              v14,
              0LL,
              2LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v37);
      ViewLayoutBehaviorFlags = v15;
      if ( v15 < 0 )
      {
        v16 = 237LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v15);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      v17 = *(_QWORD *)v37;
      *(_QWORD *)v36 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
      v18 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v17 + 48LL))(
              v17,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              v36);
      ViewLayoutBehaviorFlags = v18;
      if ( v18 < 0 )
      {
        v19 = 240LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
        goto LABEL_18;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v36,
              a2,
              2LL);
      ViewLayoutBehaviorFlags = v18;
      if ( v18 < 0 )
      {
        v19 = 242LL;
        goto LABEL_17;
      }
      goto LABEL_19;
    }
    if ( ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v39, v13) == 1 )
    {
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v10 = 247LL;
        goto LABEL_6;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(
                *(_QWORD *)(a1 + 64),
                1LL) != 2 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
      v21 = *(_QWORD *)(a1 + 64);
      v22 = v20 == 1;
      v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL);
      if ( v22 )
      {
        v24 = v23(v21, 4LL);
        v25 = *(__int64 **)(a1 + 64);
        v26 = *v25;
        if ( v24 == 1 )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v26 + 248))(
                                      v25,
                                      0LL,
                                      a2,
                                      2LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v10 = 261LL;
            goto LABEL_6;
          }
        }
        else
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, __int64, _QWORD))(v26 + 232))(
                                      v25,
                                      a2,
                                      v6,
                                      2LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v10 = 265LL;
            goto LABEL_6;
          }
        }
      }
      else
      {
        if ( !(unsigned int)v23(v21, 4LL) )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                              + 240LL))(
                                      *(_QWORD *)(a1 + 64),
                                      0LL,
                                      0LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v10 = 275LL;
            goto LABEL_6;
          }
        }
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a2,
                                    v8,
                                    2LL,
                                    0LL);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v10 = 277LL;
          goto LABEL_6;
        }
      }
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v10 = 284LL;
        goto LABEL_6;
      }
    }
  }
  else if ( v12 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
    v28 = *(_QWORD *)(a1 + 64);
    if ( v27 == 2 )
    {
      *(_QWORD *)v37 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v28 + 112LL))(
              v28,
              0LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v37);
      ViewLayoutBehaviorFlags = v15;
      if ( v15 < 0 )
      {
        v16 = 295LL;
        goto LABEL_12;
      }
      v29 = *(_QWORD *)v37;
      *(_QWORD *)v36 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
      v18 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v29 + 48LL))(
              v29,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              v36);
      ViewLayoutBehaviorFlags = v18;
      if ( v18 < 0 )
      {
        v19 = 298LL;
        goto LABEL_17;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v36,
              a2,
              1LL);
      ViewLayoutBehaviorFlags = v18;
      if ( v18 < 0 )
      {
        v19 = 299LL;
        goto LABEL_17;
      }
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
      return 0LL;
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v28 + 80LL))(*(_QWORD *)(a1 + 64), 4LL);
    v31 = *(__int64 **)(a1 + 64);
    v32 = *v31;
    if ( v30 != 1 )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, __int64, _QWORD))(v32 + 232))(
                                  v31,
                                  a2,
                                  v7,
                                  1LL,
                                  0LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v10 = 309LL;
        goto LABEL_6;
      }
      v33 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)v36 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
      v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v33 + 112LL))(
              v33,
              0LL,
              2LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              v36);
      ViewLayoutBehaviorFlags = v34;
      if ( v34 >= 0 )
      {
        *(_QWORD *)v37 = 0LL;
        v38 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v36 + 104LL))(*(_QWORD *)v36, 0LL, v37);
        v34 = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
        ViewLayoutBehaviorFlags = v34;
        if ( v34 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
          return 0LL;
        }
        v35 = 319LL;
      }
      else
      {
        v35 = 313LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
      return (unsigned int)ViewLayoutBehaviorFlags;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v32 + 248))(
                                v31,
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v10 = 304LL;
      goto LABEL_6;
    }
  }
  else if ( (v36[0] & 4) != 0
         || (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 168LL))(
              *(_QWORD *)(a1 + 64),
              0LL,
              v36) < 0 )
  {
    ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v10 = 329LL;
      goto LABEL_6;
    }
  }
  else
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                *(_QWORD *)(a1 + 64),
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v10 = 335LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
